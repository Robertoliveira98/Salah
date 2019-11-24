%{
#include <iostream>
#include <string.h>
#include <string>
#include <sstream>
#include <vector>
#include <stack>
#include "variaveis_globais.cpp"
#include "structs.cpp"
#include "vetores_pilhas.cpp"
#include "funcoes_escopo.cpp"
#include "funcoes_variaveis.cpp"
#include "funcoes_strings.cpp"
#include "funcoes_lacos.cpp"
#include "funcoes_subprograma.cpp"

%}

%token TK_NUM TK_FLOAT TK_NOME_VARIAVEL TK_CHAR TK_BOOL TK_STRING
%token TK_MAIN TK_TIPO_INT TK_TIPO_FLOAT TK_TIPO_DOUBLE TK_TIPO_BOOL TK_TIPO_CHAR TK_TIPO_STRING TK_PRINT TK_INPUT TK_IF TK_ELSE TK_WHILE TK_DO TK_FOR TK_BREAK TK_CONTINUE TK_SWITCH TK_CASE TK_DEFAULT TK_ALL TK_RETURN TK_EXCL TK_DIF
%token TK_FIM TK_ERROR

%start S

%left '+' '-'
%left '*' '/'

%%

S 			: EMPILHA ESCOPO_GLOBAL DESEMPILHA {
				if(verifica_lista_nao_iniciadas()){
					yyerror("Você chamou uma função não declarada!");
				}
				string atribuicoes_tamanho_string = "";

				Configuracao_String aux;
				for (vector<Configuracao_String>::iterator it = lista_conf_strings.begin(); it != lista_conf_strings.end(); it++) {
					aux = *it;
					atribuicoes_tamanho_string += "\n\t" + aux.var_tam + " = " + to_string(aux.valor_tam) + ";\n";
				}

				cout << "/*Compilador SALAH*/\n"
					 << "#include <iostream>\n"
					 << "#include <string>\n\n"
					 << "using namespace std;\n\n"
					 << declaracoes
					 << funcoes
					 << "\n\n"
					 << "int main(void) {\n"
					 	<< atribuicoes_tamanho_string
					 	<< "\n"
					 	<< $2.traducao
					 	<< free_strings
						<< "\n"
					 	<< "\treturn 0;\n"
					 << "}"
					 << endl;
			}
			;

EMPILHA 	: {
				empilhar_pilha();
			}
			;

EMPILHA_WHILE : {
				empilhar_laco(0, conta_while);
			}
			;

EMPILHA_DO_WHILE : {
				empilhar_laco(1, conta_while);
			}
			;

EMPILHA_FOR : {
				empilhar_laco(2, conta_while);
			}
			;

EMPILHA_SWITCH : TK_SWITCH '(' TK_NOME_VARIAVEL ')' {
				Variavel retornada  = retorna_variavel_temporaria($3.traducao);

				string temp = "tmp" +to_string(retornada.id);

				pilha_de_switch.push(temp);
				empilhar_laco(3, conta_switch);
			}
			;

DESEMPILHA 	: {
				desempilhar_pilha();
			}
			;

DESEMPILHA_LACO : {
				desempilhar_laco();
			}

ESCOPO_GLOBAL: ESCOPO_GLOBAL ESCOPO_GLOBAL  {
				$$.traducao = $1.traducao + $2.traducao;
			}
			| COMANDO {
				$$.traducao = $1.traducao;
			}
			| MAIN {
				$$.traducao = $1.traducao;
			}
			| FUNCAO {
				$$.traducao = $1.traducao;
			}
			;

FUNCAO		: 'function' TK_NOME_VARIAVEL '(' PARAMETROS ')' BLOCO DESEMPILHA{
				string nome_funcao = cria_funcao($2.traducao, -1);
				funcoes.append("\nvoid " + nome_funcao + "(" + $4.traducao + "){\n" + $6.traducao + "}\n");
				$$.traducao = "";
				tipo_retorna_funcao = -1;
			}
			| 'function' TK_NOME_VARIAVEL '(' PARAMETROS ')' ':' TIPO_FUNCAO BLOCO DESEMPILHA{
				string nome_funcao = cria_funcao($2.traducao, $7.tipo);

				string tipo = $7.traducao;
				if($7.tipo == 4){
					tipo = "int";
				}

				funcoes.append("\n" + tipo + " " + nome_funcao + "(" + $4.traducao + ") {\n" + $8.traducao + "}\n");
				$$.traducao = "";
				tipo_retorna_funcao = -1;
			}
			;

TIPO_FUNCAO	: TIPO {
				tipo_retorna_funcao = $1.tipo;
				$$.tipo = $1.tipo;
			}
			;

PARAMETROS	: EMPILHA PARAMETROS_NV{

				$$.traducao = $2.traducao;
			}
			| EMPILHA {
				$$.traducao = "";
			}
			;

PARAMETROS_NV : PARAMETROS_NV ',' PARAMETRO {
				$$.traducao = $1.traducao + ", " + $3.traducao;
			}
			| PARAMETRO {
				$$.traducao = $1.traducao;
			}
			;

PARAMETRO	: TK_NOME_VARIAVEL ':' TIPO {

				string temp = cria_variavel_temporaria($1.traducao, $3.tipo);

				temp.erase(0, 3);

				Variavel param;
				param.id = stoi(temp);
				param.nome = $1.traducao;
				param.tipo = $3.tipo;

				params.push_back(param);

				string tipo = $3.traducao;
				if($3.tipo == 4){
					tipo = "int";
				}

				$$.traducao = tipo + " tmp" + temp;
			}
			;

MAIN 		: 'function' TK_MAIN '(' ')' BLOCO {
				$$.traducao = $5.traducao;
			}
			;

BLOCO		: '{' EMPILHA COMANDOS DESEMPILHA '}' {
				$$.traducao = $3.traducao;
			}
			;

COMANDOS	: COMANDOS COMANDO  {
				$$.traducao = $1.traducao + $2.traducao;
			}
			| COMANDO {
				$$.traducao = $1.traducao;
			}
			;

COMANDO 	: E ';'
			| IF
			| WHILE
			| FOR
			| SWITCH
			| '/''/' COMANDO {
				$$.traducao = "\t/*\n" + $3.traducao + "\t*/\n";
			}
			;

E 			: 'var' TK_NOME_VARIAVEL ':' TIPO {

				string tradu_aux = "";

				if($4.tipo == 4){
					declaracoes.append("int " + cria_variavel_temporaria($2.traducao, 4) + ";\n");
				} else {
					int valor_tipo = $4.tipo;

					if(valor_tipo != 5){
						declaracoes.append($4.traducao + " " + cria_variavel_temporaria($2.traducao, valor_tipo) + ";\n");
					} else {
						string temp_tamanho_string = cria_variavel_temporaria("", 6);
						declaracoes.append("int " + temp_tamanho_string + ";\n");

						int tamanho_string = 0;

						string nova_temporaria = cria_variavel_temporaria($2.traducao, 5);
						declaracoes.append("char * " + nova_temporaria + ";\n");

						cria_conf_string(nova_temporaria, temp_tamanho_string, tamanho_string);

						tradu_aux = "\t" + nova_temporaria + " = (char*)malloc(" + temp_tamanho_string + " * sizeof(char));\n";
					}

				}
				$$.traducao = tradu_aux;
			}
			| 'var' TK_NOME_VARIAVEL ':' TIPO_NUM '=' ATRIBUICAO {

				if($4.tipo != $6.tipo){
					if(!((($4.tipo <= 2) || ($4.tipo == 4)) && (($6.tipo <= 2) || ($6.tipo == 4))))
						yyerror("Variáveis de tipo incompatíveis");
				}

				int valor_tipo = $4.tipo;

				string nova_temporaria = cria_variavel_temporaria($2.traducao, valor_tipo);
				declaracoes.append($4.traducao + " " + nova_temporaria + ";\n");
				$$.traducao = $6.traducao
							+ "\t" + nova_temporaria + " = " + $6.variavel_temporaria + ";\n";
			}
			| 'var' TK_NOME_VARIAVEL ':' TIPO_CHAR '=' TK_CHAR {
				string nova_temporaria = cria_variavel_temporaria($2.traducao, 3);
				declaracoes.append($4.traducao + " " + nova_temporaria + ";\n");

				$$.traducao = "\t" + nova_temporaria + " = " + $6.traducao + ";\n";
			}
			| 'var' TK_NOME_VARIAVEL ':' TIPO_BOOL '=' LOGICA {
				if($4.tipo != $6.tipo){
					yyerror("Variáveis de tipo incompatíveis");
				}

				string nova_temporaria = cria_variavel_temporaria($2.traducao, 4);
				declaracoes.append("int " + nova_temporaria + ";\n");

				$$.traducao = $6.traducao
							+ "\t" + nova_temporaria + " = " + $6.variavel_temporaria + ";\n";
			}
			| 'var' TK_NOME_VARIAVEL ':' TIPO_STRING '=' OP_STRING {
				string temp_tamanho_string = cria_variavel_temporaria("", 6);
				declaracoes.append("int " + temp_tamanho_string + ";\n");

				int tamanho_string = $6.tamanho;

				string nova_temporaria = cria_variavel_temporaria($2.traducao, 5);
				declaracoes.append("char * " + nova_temporaria + ";\n");

				cria_conf_string(nova_temporaria, temp_tamanho_string, tamanho_string);

				$$.traducao = $6.traducao
							+ "\t" + nova_temporaria + " = (char*)malloc(" + temp_tamanho_string + " * sizeof(char));\n"
							+ "\tstrcpy(" + nova_temporaria + ", " + $6.variavel_temporaria + ");\n";
			}
			| NOME_VARIAVEL '=' ATRI_LOG {

				Variavel retornada_esquerda  = retorna_variavel_temporaria($1.traducao);
				Variavel retornada_direita = retorna_variavel_temporaria_by_id($3.variavel_temporaria);

				string temp_esquerda = "tmp";
				string temp_direita = "tmp";

				temp_esquerda.append(to_string(retornada_esquerda.id));
				temp_direita.append(to_string(retornada_direita.id));

				string aux_temporaria = $3.variavel_temporaria;

				if(retornada_esquerda.tipo != retornada_direita.tipo)
					if(!(((retornada_esquerda.tipo <= 2) || (retornada_esquerda.tipo == 4)) && ((retornada_direita.tipo <= 2) || (retornada_direita.tipo == 4))))
						yyerror("Variáveis de tipo incompatíveis");


				$$.traducao = $3.traducao
							+ "\t" + temp_esquerda + " = " + aux_temporaria + ";\n";
			}
			| NOME_VARIAVEL '=' OP_STRING {
				Variavel retornada_esquerda  = retorna_variavel_temporaria($1.traducao);

				string temp_esquerda = "tmp";

				temp_esquerda.append(to_string(retornada_esquerda.id));

				int tamanho_string = $3.tamanho;

				compara_tamanho_string_conf(temp_esquerda, tamanho_string);

				if(retornada_esquerda.tipo != $3.tipo)
					yyerror("Variáveis de tipo incompatíveis");

				$$.traducao = $3.traducao
							+ "\tstrcpy(" + temp_esquerda + ", " + $3.variavel_temporaria + ");\n";
			}
			| NOME_VARIAVEL '=' TK_CHAR {
				string nova_temporaria = cria_variavel_temporaria("", 3);
				declaracoes.append("char " + nova_temporaria + ";\n");

				Variavel retornada_esquerda  = retorna_variavel_temporaria($1.traducao);
				Variavel retornada_direita = retorna_variavel_temporaria_by_id(nova_temporaria);

				string temp_esquerda = "tmp";
				string temp_direita = "tmp";

				temp_esquerda.append(to_string(retornada_esquerda.id));
				temp_direita.append(to_string(retornada_direita.id));

				string aux_temporaria = nova_temporaria;

				if(retornada_esquerda.tipo != retornada_direita.tipo)
					yyerror("Variáveis de tipo incompatíveis");

				$$.traducao = "\t" + nova_temporaria + " = " + $3.traducao + ";\n"
							+ "\t" + temp_esquerda + " = " + aux_temporaria + ";\n";
				$$.tipo = 3;
			}
			| TK_PRINT '(' IMPRIME ')' {
				$$.traducao = "\tcout << " + $3.traducao + ";\n";
			}
			| TK_INPUT '(' TK_NOME_VARIAVEL ')' {
				Variavel retornada  = retorna_variavel_temporaria($3.traducao);
				string temp = "tmp";
				temp.append(to_string(retornada.id));

				$$.traducao = "\tcin >> " + temp + ";\n";
			}
			| TK_BREAK TK_ALL{
				string goto_atual = retorna_goto();

				$$.traducao = "\n\tgoto " + goto_atual + ";\n";
			}
			| TK_CONTINUE {
				stack<Laco> pilha_aux_de_lacos = pilha_de_lacos;

				while (!pilha_aux_de_lacos.empty()){

			    	string goto_atual = retorna_inicio_goto(pilha_aux_de_lacos);
					pilha_aux_de_lacos.pop();

					if (pilha_aux_de_lacos.empty()) {
						$$.traducao = "\n\tgoto " + goto_atual + ";\n";
					}
			  	}
			}
			| TK_BREAK {
				stack<Laco> pilha_aux_de_lacos = pilha_de_lacos;

				while (!pilha_aux_de_lacos.empty()){

			    	string goto_atual = retorna_goto_pilha_aux(pilha_aux_de_lacos);
					pilha_aux_de_lacos.pop();

					if (pilha_aux_de_lacos.empty()) {
						$$.traducao = "\n\tgoto " + goto_atual + ";\n";
					}
			  	}
			}
			| TK_NOME_VARIAVEL '+' '+' {
				Variavel retornada = retorna_variavel_temporaria($1.traducao);
				string temp = "tmp";
				temp.append(to_string(retornada.id));

				if(retornada.tipo <= 2){
					$$.traducao = "\n\t" + temp + " = " + temp + " + 1;\n";
				}else{
					yyerror("Tipo incompativel com operação unaria\n");
				}
			}
			| TK_NOME_VARIAVEL '-' '-' {
				Variavel retornada = retorna_variavel_temporaria($1.traducao);
				string temp = "tmp";
				temp.append(to_string(retornada.id));

				if(retornada.tipo <= 2){
					$$.traducao = "\n\t" + temp + " = " + temp + " - 1;\n";
				}else{
					yyerror("Tipo incompativel com operação unária");
				}
			}
			| TK_NOME_VARIAVEL OP_MAT '=' TK_NOME_VARIAVEL {
				Variavel retornada_esq = retorna_variavel_temporaria($1.traducao);
				string temp_esq = "tmp";
				temp_esq.append(to_string(retornada_esq.id));

				Variavel retornada_dir = retorna_variavel_temporaria($4.traducao);
				string temp_dir = "tmp";
				temp_dir.append(to_string(retornada_dir.id));

				if((retornada_dir.tipo <= 2) && (retornada_esq.tipo <= 2)){
					$$.traducao = "\n\t" + temp_esq + " = " + temp_esq + " " + $2.traducao + " " + temp_dir + ";\n";
				}else{
					yyerror("Tipo incompativel com operação composta\n");
				}
			}
			| TK_NOME_VARIAVEL OP_MAT '=' TK_NUM {
				Variavel retornada_esq = retorna_variavel_temporaria($1.traducao);
				string temp_esq = "tmp";
				temp_esq.append(to_string(retornada_esq.id));

				string temp_dir = cria_variavel_temporaria("", 0);
				declaracoes.append("int " + temp_dir + ";\n");

				if(retornada_esq.tipo <= 2){
					$$.traducao = "\n\t" + temp_dir + " = " + $4.traducao + ";\n\t" + temp_esq + " = " + temp_esq + " " + $2.traducao + " " + temp_dir + ";\n";
				}else{
					yyerror("Tipo incompativel com operação composta\n");
				}
			}
			| TK_NOME_VARIAVEL ',' TK_NOME_VARIAVEL '=' TK_NOME_VARIAVEL ',' TK_NOME_VARIAVEL {
				Variavel retornada_esq = retorna_variavel_temporaria($1.traducao);
				string temp_esq = "tmp";
				temp_esq.append(to_string(retornada_esq.id));

				Variavel retornada_esq2 = retorna_variavel_temporaria($3.traducao);
				string temp_esq2 = "tmp";
				temp_esq2.append(to_string(retornada_esq2.id));

				Variavel retornada_dir = retorna_variavel_temporaria($5.traducao);
				string temp_dir = "tmp";
				temp_dir.append(to_string(retornada_dir.id));

				Variavel retornada_dir2 = retorna_variavel_temporaria($7.traducao);
				string temp_dir2 = "tmp";
				temp_dir2.append(to_string(retornada_dir2.id));

				if((retornada_dir.tipo <= 2) && (retornada_esq.tipo <= 2) && (retornada_dir2.tipo <= 2) && (retornada_esq2.tipo <= 2)){

					string aux_troca_1 = cria_variavel_temporaria("", 2);
					string aux_troca_2 = cria_variavel_temporaria("", 2);
					declaracoes.append("double " + aux_troca_1 + ";\n");
					declaracoes.append("double " + aux_troca_2 + ";\n");

					$$.traducao = "\n\t" + aux_troca_1 + " = (double) " + temp_esq + ";\n"
								+ "\t" + aux_troca_2 + " = (double) " + temp_esq2 +";\n\n"
								+ "\t" + temp_esq + " = (" + retorna_nome_tipo(retornada_esq.tipo) + ") " + temp_dir +";\n\n"
								+ "\t" + temp_esq2 + " = (" + retorna_nome_tipo(retornada_esq2.tipo) + ") " + temp_dir2 +";\n\n"
								+ "\t" + temp_dir + " = (" + retorna_nome_tipo(retornada_dir.tipo) + ") " + aux_troca_1 + ";\n"
								+ "\t" + temp_dir2 + " = (" + retorna_nome_tipo(retornada_dir2.tipo) + ") " + aux_troca_2 + ";\n";
				} else if((retornada_dir.tipo == 3) && (retornada_esq.tipo == 3) && (retornada_dir2.tipo == 3) && (retornada_esq2.tipo == 3)){

					string aux_troca_1 = cria_variavel_temporaria("", 3);
					string aux_troca_2 = cria_variavel_temporaria("", 3);
					declaracoes.append("char " + aux_troca_1 + ";\n");
					declaracoes.append("char " + aux_troca_2 + ";\n");

					$$.traducao = "\n\t" + aux_troca_1 + " = " + temp_esq + ";\n"
								+ "\t" + aux_troca_2 + " = " + temp_esq2 +";\n\n"
								+ "\t" + temp_esq + " = " + temp_dir +";\n\n"
								+ "\t" + temp_esq2 + " = " + temp_dir2 +";\n\n"
								+ "\t" + temp_dir + " = " + aux_troca_1 + ";\n"
								+ "\t" + temp_dir2 + " = " + aux_troca_2 + ";\n";
				} else if((retornada_dir.tipo == 4) && (retornada_esq.tipo == 4) && (retornada_dir2.tipo == 4) && (retornada_esq2.tipo == 4)){

					string aux_troca_1 = cria_variavel_temporaria("", 4);
					string aux_troca_2 = cria_variavel_temporaria("", 4);
					declaracoes.append("int " + aux_troca_1 + ";\n");
					declaracoes.append("int " + aux_troca_2 + ";\n");

					$$.traducao = "\n\t" + aux_troca_1 + " = " + temp_esq + ";\n"
								+ "\t" + aux_troca_2 + " = " + temp_esq2 +";\n\n"
								+ "\t" + temp_esq + " = " + temp_dir +";\n\n"
								+ "\t" + temp_esq2 + " = " + temp_dir2 +";\n\n"
								+ "\t" + temp_dir + " = " + aux_troca_1 + ";\n"
								+ "\t" + temp_dir2 + " = " + aux_troca_2 + ";\n";
				} else {
					yyerror("Tipo incompativel para troca\n");
				}
			}
			| CHAMA_FUNCAO {
				$$.traducao = $1.traducao;
				$$.variavel_temporaria = $1.variavel_temporaria;
				$$.tipo = $1.tipo;
			}
			| TK_RETURN ATRI_LOG {
				Variavel retornada_direita = retorna_variavel_temporaria_by_id($2.variavel_temporaria);

				if(tipo_retorna_funcao == retornada_direita.tipo){
					$$.traducao = $2.traducao
								+ "\n\treturn " + $2.variavel_temporaria + ";\n";
				} else {
					if(tipo_retorna_funcao == -1){
						yyerror("Foi escrito retorno e uma função que não tem retorno");
					} else {
						yyerror("Retorno de função diferente do declarado na função");
					}
				}
			}
			| TK_RETURN OP_STRING {
				Variavel retornada_direita = retorna_variavel_temporaria_by_id($2.variavel_temporaria);

				if(tipo_retorna_funcao == retornada_direita.tipo){
					$$.traducao = $2.traducao
								+ "\n\treturn " + $2.variavel_temporaria + ";\n";
				} else {
					if(tipo_retorna_funcao == -1){
						yyerror("Foi escrito retorno e uma função que não tem retorno");
					} else {
						yyerror("Retorno de função diferente do declarado na função");
					}
				}
			}
			| TK_RETURN TK_CHAR {
				string nova_temporaria = cria_variavel_temporaria("", 3);
				declaracoes.append("char " + nova_temporaria + ";\n");

				Variavel retornada_direita = retorna_variavel_temporaria_by_id(nova_temporaria);

				string temp_direita = "tmp";

				temp_direita.append(to_string(retornada_direita.id));

				string aux_temporaria = nova_temporaria;

				if(tipo_retorna_funcao == retornada_direita.tipo){
					$$.traducao = "\t" + nova_temporaria + " = " + $2.traducao + ";\n"
								+ "\n\treturn " + $2.variavel_temporaria + ";\n";
				} else {
					if(tipo_retorna_funcao == -1){
						yyerror("Foi escrito retorno e uma função que não tem retorno");
					} else {
						yyerror("Retorno de função diferente do declarado na função");
					}
				}
			}
			;

NOME_VARIAVEL	: TK_NOME_VARIAVEL {
					Variavel retornada_esquerda  = retorna_variavel_temporaria($1.traducao);

					tipo_variavel_esquerda = retornada_esquerda.tipo;

					$$.traducao = $1.traducao;
				}
				;

CHAMA_FUNCAO	: TK_NOME_VARIAVEL '(' CHAMA_PARAMS ')' {
					Funcao func = retorna_funcao($1.traducao);
					if(!func.nome.empty()){
						if(func.parametros.size() != $3.params.size())
							yyerror("Você chamou uma função com a quantidade de parametros errada!\n");
						else {
							string tempAux = "";
							string aux_temp = "";
							if(func.tipo != -1){
								tempAux = cria_variavel_temporaria("", func.tipo);
								string tipo_string = "int";
								switch (func.tipo) {
									case 1:
										tipo_string = "float";
										break;
									case 2:
										tipo_string = "double";
										break;
									case 3:
										tipo_string = "char";
										break;
									case 4:
										tipo_string = "int";
										break;
									case 5:
										tipo_string = "string";
										break;
								}
								declaracoes.append(tipo_string + " " + tempAux + ";\n");

								aux_temp = " = ";
							}

							int iguais = 0;

							Variavel aux_guardado;
							Param aux_chamado;

							vector<Variavel> params_guardado = func.parametros;
							vector<Param> params_chamado = $3.params;

							vector<Variavel>::iterator it_guardado = params_guardado.begin();
							vector<Param>::iterator it_chamado = params_chamado.begin();

							while(it_guardado != params_guardado.end()) {
								aux_guardado = *it_guardado;
								aux_chamado = *it_chamado;

								if(aux_guardado.tipo == aux_chamado.tipo)
									iguais++;
								else {
									if((aux_guardado.tipo <= 2) && (aux_chamado.tipo <= 2))
										iguais++;
								}

								it_guardado++;
								it_chamado++;
							}

							if(iguais != params_guardado.size())
								yyerror("Chamada de função com tipo diferente da definição!\n");
							else{
								$$.traducao = $3.traducao
											+ "\n\t" + tempAux + aux_temp + "func" + to_string(func.id) + "(" + $3.variavel_temporaria + ");\n";
								$$.variavel_temporaria = tempAux;
								$$.tipo = func.tipo;
							}
						}
					} else {
						func = retorna_funcao_lista_nao_iniciadas($1.traducao, 0);
						if(!func.nome.empty()){
							if(func.aux_param.size() != $3.params.size())
								yyerror("Você chamou uma função com a quantidade de parametros errada!\n");
							else{
								string tempAux = "";
								string aux_temp = "";
								if(func.tipo != -1){
									tempAux = cria_variavel_temporaria("", func.tipo);
									string tipo_string = "int";
									switch (func.tipo) {
										case 1:
											tipo_string = "float";
											break;
										case 2:
											tipo_string = "double";
											break;
										case 3:
											tipo_string = "char";
											break;
										case 4:
											tipo_string = "int";
											break;
										case 5:
											tipo_string = "string";
											break;
									}
									declaracoes.append(tipo_string + " " + tempAux + ";\n");

									aux_temp = " = ";
								}

								int iguais = 0;

								Param aux_guardado;
								Param aux_chamado;

								vector<Param> params_guardado = func.aux_param;
								vector<Param> params_chamado = $3.params;

								vector<Param>::iterator it_guardado = params_guardado.begin();
								vector<Param>::iterator it_chamado = params_chamado.begin();

								while(it_guardado != params_guardado.end()) {
									aux_guardado = *it_guardado;
									aux_chamado = *it_chamado;

									if(aux_guardado.tipo == aux_chamado.tipo)
										iguais++;
									else {
										if((aux_guardado.tipo <= 2) && (aux_chamado.tipo <= 2))
											iguais++;
									}

									it_guardado++;
									it_chamado++;
								}

								if(iguais != params_guardado.size())
									yyerror("Chamada de função com tipo diferente da definição!\n");
								else{
									$$.traducao = $3.traducao
												+ "\n\t" + tempAux + aux_temp + "func" + to_string(func.id) + "(" + $3.variavel_temporaria + ");\n";
									$$.variavel_temporaria = tempAux;
									$$.tipo = func.tipo;
								}

							}
						} else {
							string tempAux = "";
							string aux_temp = "";
							if(tipo_variavel_esquerda != -1){
								tempAux = cria_variavel_temporaria("", tipo_variavel_esquerda);
								string tipo_string = "int";
								switch (func.tipo) {
									case 1:
										tipo_string = "float";
										break;
									case 2:
										tipo_string = "double";
										break;
									case 3:
										tipo_string = "char";
										break;
									case 4:
										tipo_string = "int";
										break;
									case 5:
										tipo_string = "string";
										break;
								}
								declaracoes.append(tipo_string + " " + tempAux + ";\n");

								aux_temp = " = ";
							}

							Funcao nao_iniciada;
							nao_iniciada.nome = $1.traducao;
							nao_iniciada.id = id_func;
							nao_iniciada.aux_param = $3.params;
							nao_iniciada.tipo = tipo_variavel_esquerda;
							nao_iniciada.aux_linha = new_line;

							lista_de_funcoes_nao_iniciadas.push_back(nao_iniciada);

							$$.traducao = $3.traducao
										+ "\n\t" + tempAux + aux_temp + "func" + to_string(id_func) + "(" + $3.variavel_temporaria + ");\n";
							$$.variavel_temporaria = tempAux;
							$$.tipo = tipo_variavel_esquerda ;

							id_func++;
						}
					}
				}
				;

CHAMA_PARAMS: CHAMA_PARAMS_NV {
				$$.traducao = $1.traducao;
				$$.params = $1.params;
				$$.variavel_temporaria = $1.variavel_temporaria;
			}
			| {
				$$.traducao = "";
			}
			;

CHAMA_PARAMS_NV : CHAMA_PARAMS_NV ',' CHAMA_PARAM {
				$$.traducao = $1.traducao + $3.traducao;
				$$.variavel_temporaria = $1.variavel_temporaria + ", " + $3.variavel_temporaria;

				Param this_param;
				this_param.nome_tmp = $3.variavel_temporaria;
				this_param.tipo = $3.tipo;

				$$.params = $1.params;
				$$.params.push_back(this_param);
			}
			| CHAMA_PARAM {
				$$.traducao = $1.traducao;
				$$.variavel_temporaria = $1.variavel_temporaria;

				Param this_param;
				this_param.nome_tmp = $1.variavel_temporaria;
				this_param.tipo = $1.tipo;

				$$.params.push_back(this_param);
			}
			;

CHAMA_PARAM	: ATRI_LOG {
				$$.traducao = $1.traducao;
				$$.variavel_temporaria = $1.variavel_temporaria;
				$$.tipo = $1.tipo;
			}
			| OP_STRING {
				$$.traducao = $1.traducao;
				$$.variavel_temporaria = $1.variavel_temporaria;
				$$.tipo = 5;
			}
			;

OP_STRING	: OP_STRING '.' OP_STRING {
				string temp_tamanho_string = cria_variavel_temporaria("", 6);
				declaracoes.append("int " + temp_tamanho_string + ";\n");

				int tamanho_string = $1.tamanho + $3.tamanho - 1;

				string nova_temporaria = cria_variavel_temporaria("", 5);
				declaracoes.append("char * " + nova_temporaria + ";\n");

				cria_conf_string(nova_temporaria, temp_tamanho_string, tamanho_string);

				$$.traducao = $1.traducao
							+ $3.traducao
							+ "\t" + nova_temporaria + " = (char*)malloc(" + temp_tamanho_string + " * sizeof(char));\n"
							+ "\tstrcpy(" + nova_temporaria + ", " + $1.variavel_temporaria + ");\n"
							+ "\tstrcat(" + nova_temporaria + ", " + $3.variavel_temporaria + ");\n";
				$$.variavel_temporaria = nova_temporaria;
				$$.tamanho = tamanho_string;
				$$.tipo = 5;
			}
			| TK_STRING {
				string temp_tamanho_string = cria_variavel_temporaria("", 6);
				declaracoes.append("int " + temp_tamanho_string + ";\n");

				int tamanho_string = $1.traducao.length() + 1 - 2;

				string nova_temporaria = cria_variavel_temporaria("", 5);
				declaracoes.append("char * " + nova_temporaria + ";\n");

				cria_conf_string(nova_temporaria, temp_tamanho_string, tamanho_string);

				$$.traducao = 	"\t" + nova_temporaria + " = (char*)malloc(" + temp_tamanho_string + " * sizeof(char));\n"
								+ "\tstrcpy(" + nova_temporaria + ", " + $1.traducao + ");\n";
				$$.variavel_temporaria = nova_temporaria;
				$$.tamanho = tamanho_string;
				$$.tipo = 5;
			}
			| VAR {
				$$.variavel_temporaria = $1.variavel_temporaria;
				$$.traducao = $1.traducao;
				$$.tipo = $1.tipo;
			}
			| CHAMA_FUNCAO {
				$$.traducao = $1.traducao;
				$$.variavel_temporaria = $1.variavel_temporaria;
				$$.tipo = $1.tipo;

				if($1.variavel_temporaria == "")
					yyerror("Não há como receber valor de uma função que não tem retorno!");
			}
			;



IF			:TK_IF '(' ATRI_LOG ')' BLOCO {
				$$.traducao = $3.traducao
							+ "\n\tif ("+ $3.variavel_temporaria + ") goto inicio_if_" + to_string(conta_if) + ";\n"
							+ "\tgoto final_if_" + to_string(conta_if) + "; \n\n"
							+ "\tinicio_if_" + to_string(conta_if) + ": \n"
							+ $5.traducao
							+ "\n\tfinal_if_" + to_string(conta_if) + ":\n";
				conta_if++;
			}
 			| TK_IF '(' ATRI_LOG ')' BLOCO TK_ELSE BLOCO {
				$$.traducao = $3.traducao
							+ "\n\tif ("+ $3.variavel_temporaria + ") goto inicio_if_" + to_string(conta_if) + ";\n"
							+ "\tgoto inicio_else_" + to_string(conta_if) + ";\n\n"
							+ "\tinicio_if_" + to_string(conta_if) + ": \n"
							+ $5.traducao
							+ "\n\tgoto final_else_" + to_string(conta_if) + "; \n\n"
							+ "\tinicio_else_" + to_string(conta_if) + ":\n"
							+ $7.traducao
							+ " \n\tfinal_else_" + to_string(conta_if) + ":\n\n";
				conta_if++;
			}
			| TK_IF '(' ATRI_LOG ')' BLOCO TK_ELSE IF {
				$$.traducao = $3.traducao
							+ "\n\tif ("+ $3.variavel_temporaria + ") goto inicio_if_" + to_string(conta_if) + ";\n"
							+ "\tgoto inicio_else_" + to_string(conta_if) + "; \n\n"
							+ "\tinicio_if_" + to_string(conta_if) + ": \n"
							+ $5.traducao
							+ "\n\tgoto final_else_" + to_string(conta_if) + "; \n\n"
							+ "\tinicio_else_" + to_string(conta_if) + ":\n"
							+ $7.traducao
							+" \n\tfinal_else_" + to_string(conta_if) + ":\n\n";
				conta_if++;
			}
			;

SWITCH		: EMPILHA_SWITCH BLOCO_CASES DESEMPILHA_LACO{
				$$.traducao = "\n//SWITCH\n"
							+ $2.traducao;
				pilha_de_switch.pop();
			}
			;

BLOCO_CASES : '{' CASES DEFAULT '}' {
				$$.traducao = $2.traducao
							+ "\n\n//DEFAULT\n\n"
							+ "\tfinal_case_" + to_string(conta_case++) + ":\n"
							+ $3.traducao
							+ "\tfinal_switch_" + to_string(conta_switch) + ":\n";
				conta_case++;
				conta_switch++;
			}
			;

CASES		: CASES CASE{
				string nova_temporaria = cria_variavel_temporaria("", 0);
				declaracoes.append("int " + nova_temporaria + ";\n");

				$$.traducao = $1.traducao
							+ $2.label
							+ "\t" +  nova_temporaria + " = " + pilha_de_switch.top() + " == " + $2.variavel_temporaria + ";\n"
							+ "\tif(" + nova_temporaria + ") goto final_case_" + to_string(conta_case) + ";\n"
							+ "\tgoto final_case_" + to_string(conta_case + 1) + ";\n"
							+ "\n\tfinal_case_" + to_string(conta_case) + ":\n"
							+ $2.traducao
							+ "\n\tgoto final_case_" + to_string(conta_case + 1) + ";\n\n";
				conta_case++;
			}
			| CASE {
				string nova_temporaria = cria_variavel_temporaria("", 0);
				declaracoes.append("int " + nova_temporaria + ";\n");

				$$.traducao = $1.label
							+ "\t" +  nova_temporaria + " = " + pilha_de_switch.top() + " == " + $1.variavel_temporaria + ";\n"
							+ "\tif(" + nova_temporaria + ") goto final_case_" + to_string(conta_case) + ";\n"
							+ "\tgoto final_case_" + to_string(conta_case + 1) + ";\n"
							+ "\n\tfinal_case_" + to_string(conta_case) + ":\n"
							+ $1.traducao
							+ "\n\tgoto final_case_" + to_string(conta_case + 1) + ";\n\n";
				conta_case++;
			}
			;

CASE		: TK_CASE TK_NUM ':' COMANDOS{
				string tempAux = cria_variavel_temporaria("", 0);
				declaracoes.append("int " + tempAux + ";\n");

				$$.label = "\t" +  tempAux + " = " + $2.traducao + ";\n";
				$$.traducao = $4.traducao;
				$$.variavel_temporaria = tempAux;
				$$.tipo = 0;
			}
			| TK_CASE TK_FLOAT ':' COMANDOS{
				string tempAux = cria_variavel_temporaria("", 2);
				declaracoes.append("double " + tempAux + ";\n");

				$$.label = "\t" +  tempAux + " = " + $2.traducao + ";\n";
				$$.traducao = $4.traducao;
				$$.variavel_temporaria = tempAux;
				$$.tipo = 2;
			}
			| TK_CASE TK_BOOL ':' COMANDOS{
				int auxBool = 0;

				if ($2.traducao.compare("true") == 0){
					auxBool = 1;
				}
				string tempAux = cria_variavel_temporaria("", 4);

				declaracoes.append("int " + tempAux + ";\n");
				$$.traducao = $4.traducao
							+ "\t" + tempAux + " = " + to_string(auxBool) + ";\n";
				$$.variavel_temporaria = tempAux;
				$$.tipo = 4;
			}
			| TK_CASE TK_CHAR ':' COMANDOS{
				string nova_temporaria = cria_variavel_temporaria("", 3);
				declaracoes.append("char " + nova_temporaria + ";\n");

				$$.label = "\t" +  nova_temporaria + " = " + $2.traducao + ";\n";
				$$.traducao = $4.traducao;
				$$.variavel_temporaria = nova_temporaria;
				$$.tipo = 3;
			}
			| TK_CASE TK_STRING ':' COMANDOS{
				string nova_temporaria = cria_variavel_temporaria("", 5);
				declaracoes.append("string " + nova_temporaria + ";\n");

				$$.label = "\t" +  nova_temporaria + " = " + $2.traducao + ";\n";
				$$.traducao = $4.traducao;
				$$.variavel_temporaria = nova_temporaria;
				$$.tipo = 5;
			}
			| TK_CASE TK_NOME_VARIAVEL ':' COMANDOS{
				Variavel retornada  = retorna_variavel_temporaria($2.traducao);
				string temp = "tmp";
				temp.append(to_string(retornada.id));

				$$.label = "";
				$$.traducao = $4.traducao;
				$$.variavel_temporaria = temp;
				$$.tipo = 5;
			}
			;

DEFAULT		: TK_DEFAULT ':' COMANDOS{
				$$.traducao = $3.traducao;
			}
			| {
				$$.traducao = "";
			}
			;

WHILE		: EMPILHA_WHILE TK_WHILE '(' ATRI_LOG ')' BLOCO DESEMPILHA_LACO {
				$$.traducao = "\tinicio_while_" + to_string(conta_while) + ":\n"
							+ $4.traducao
							+ "\n\tif ("+ $4.variavel_temporaria +") goto inicio_bloco_while_" + to_string(conta_while) + ";\n"
							+ "\tgoto final_while_" + to_string(conta_while) + ";\n\n"
							+ "\tinicio_bloco_while_" + to_string(conta_while) + ":\n"
							+ $6.traducao
							+ "\n\tgoto inicio_while_" + to_string(conta_while) + ";\n"
							+ "\tfinal_while_" + to_string(conta_while) + ":\n\n";
				conta_while++;
			}
			| EMPILHA_DO_WHILE TK_DO BLOCO TK_WHILE '(' ATRI_LOG ')' ';' DESEMPILHA_LACO {
				$$.traducao = "\tinicio_do_while" + to_string(conta_while) + "\n"
							+ "\tinicio_bloco_while_" + to_string(conta_while) + ":\n"
							+ $3.traducao
							+ "\n\n" + $6.traducao
							+ "\n\tif ("+ $6.variavel_temporaria +") goto inicio_bloco_while_" + to_string(conta_while)
							+ "\n\n\tfinal_do_while_" + to_string(conta_while) + ":\n\n";
				conta_while++;
			}
			;

FOR			: EMPILHA_FOR TK_FOR '(' E ';' ATRI_LOG ';' E ')' BLOCO DESEMPILHA_LACO {
				$$.traducao = $4.traducao
							+ "\n\n\tinicio_for_" + to_string(conta_for) + ":\n"
							+ $6.traducao
							+ "\n\tif ("+ $6.variavel_temporaria +") goto inicio_bloco_for_" + to_string(conta_for) + ";\n"
							+ "\tgoto final_for_" + to_string(conta_for) + ";\n\n"
							+ "\tinicio_bloco_for_" + to_string(conta_for) + ":\n"
							+ $10.traducao
							+ "\n\n\t" + $8.traducao
							+ "\n\tgoto inicio_for_" + to_string(conta_for) + ";\n"
							+ "\tfinal_for_" + to_string(conta_for) + ":\n\n";
				conta_for++;
			}
			;

ATRI_LOG	: LOGICA {
				$$.variavel_temporaria = $1.variavel_temporaria;
				$$.traducao = $1.traducao;
				$$.tipo = $1.tipo;
			}
			| RELACIONAL {
				$$.variavel_temporaria = $1.variavel_temporaria;
				$$.traducao = $1.traducao;
				$$.tipo = 4;
			}
			| ATRIBUICAO {
				$$.variavel_temporaria = $1.variavel_temporaria;
				$$.traducao = $1.traducao;
				$$.tipo = $1.tipo;
			}
			| VAR {
				$$.variavel_temporaria = $1.variavel_temporaria;
				$$.traducao = $1.traducao;
				$$.tipo = $1.tipo;
			}
			;

RELACIONAL	: REL OP_REL REL {
				Variavel retornada_esquerda  = retorna_variavel_temporaria_by_id($1.variavel_temporaria);
				Variavel retornada_direita  = retorna_variavel_temporaria_by_id($3.variavel_temporaria);

				string temp_esquerda = "tmp";
				string temp_direita = "tmp";

				temp_esquerda.append(to_string(retornada_esquerda.id));
				temp_direita.append(to_string(retornada_direita.id));

				string tempAux = cria_variavel_temporaria("", 4);
				declaracoes.append("int " + tempAux + ";\n");

				if(retornada_direita.tipo != 5){
					$$.traducao = $1.traducao
								+ $3.traducao
								+ "\t" + tempAux + " = " + temp_esquerda + " " + $2.traducao + " " + temp_direita + ";\n";
				} else {

					int igual = strcmp($2.traducao.c_str(), "==");
					int diferente = strcmp($2.traducao.c_str(), "!=");

					if((igual == 0) || (diferente == 0)){
						string auxiliar_comparacao = cria_variavel_temporaria("", 0);
						declaracoes.append("int " + auxiliar_comparacao + ";\n");

						string auxiliar_comparacao_2 = cria_variavel_temporaria("", 4);
						declaracoes.append("int " + auxiliar_comparacao_2 + ";\n");
						if(igual == 0){
							$$.traducao = $1.traducao
										+ $3.traducao
										+ "\n\t" + auxiliar_comparacao + " = strcmp(" + temp_esquerda + "," + temp_direita + ");\n"
										+ "\t" + auxiliar_comparacao_2 + " = " + auxiliar_comparacao + " == 0;\n"
										+ "\tif(" + auxiliar_comparacao_2 + ") goto string_iguais_" + to_string(conta_rel_string) + ";\n"
										+ "\t" + tempAux + " = 0;\n"
										+ "\tgoto fim_string_iguais_" + to_string(conta_rel_string) + ";\n\n"
										+ "\tstring_iguais_" + to_string(conta_rel_string) + ":\n"
										+ "\t" + tempAux + " = 1;\n\n"
										+ "\tfim_string_iguais_" + to_string(conta_rel_string) + ":\n";
						} else {
							$$.traducao = $1.traducao
										+ $3.traducao
										+ "\n\t" + auxiliar_comparacao + " = strcmp(" + temp_esquerda + "," + temp_direita + ");\n"
										+ "\t" + auxiliar_comparacao_2 + " = " + auxiliar_comparacao + " == 0;\n"
										+ "\tif(" + auxiliar_comparacao_2 + ") goto string_diferentes_" + to_string(conta_rel_string) + ";\n"
										+ "\t" + tempAux + " = 1;\n"
										+ "\tgoto fim_string_diferentes_" + to_string(conta_rel_string) + ";\n\n"
										+ "\tstring_diferentes_" + to_string(conta_rel_string) + ":\n"
										+ "\t" + tempAux + " = 0;\n\n"
										+ "\tfim_string_diferentes_" + to_string(conta_rel_string) + ":\n";
						}
					} else {
						yyerror("operação incompativel com tipo String");
					}
				}

				$$.variavel_temporaria = tempAux;
			}
			| '(' RELACIONAL ')' {
				$$.variavel_temporaria = $2.variavel_temporaria;
				$$.traducao = $2.traducao;
				$$.tipo = 4;
			}
			;

REL 		: TK_NUM {
				string tempAux = cria_variavel_temporaria("", 0);
				declaracoes.append("int " + tempAux + ";\n");

				$$.traducao = "\t" +  tempAux + " = " + $1.traducao + ";\n";
				$$.variavel_temporaria = tempAux;
			}
			| TK_FLOAT {
				string tempAux = cria_variavel_temporaria("", 2);
				declaracoes.append("double " + tempAux + ";\n");

				$$.traducao = "\t" + tempAux + " = " + $1.traducao + ";\n";
				$$.variavel_temporaria = tempAux;
			}
			| TK_NOME_VARIAVEL {
				Variavel retornada  = retorna_variavel_temporaria($1.traducao);
				string temp = "tmp";
				temp.append(to_string(retornada.id));

				$$.traducao = "";
				$$.variavel_temporaria = temp;
			}
			| TK_CHAR {
				string nova_temporaria = cria_variavel_temporaria("", 3);
				declaracoes.append("char " + nova_temporaria + ";\n");

				$$.traducao = "\t" + nova_temporaria + " = " + $1.traducao + ";\n";
				$$.variavel_temporaria = nova_temporaria;
			}
			| TK_STRING {
				string temp_tamanho_string = cria_variavel_temporaria("", 6);
				declaracoes.append("int " + temp_tamanho_string + ";\n");

				int tamanho_string = $1.traducao.length() + 1 - 2;

				string nova_temporaria = cria_variavel_temporaria("", 5);
				declaracoes.append("char * " + nova_temporaria + ";\n");

				cria_conf_string(nova_temporaria, temp_tamanho_string, tamanho_string);

				$$.traducao = "\t" + nova_temporaria + " = (char*)malloc(" + temp_tamanho_string + " * sizeof(char));\n" +
							+ "\tstrcpy(" + nova_temporaria + ", " + $1.traducao + ");\n";
				$$.variavel_temporaria = nova_temporaria;
				$$.tamanho = tamanho_string;
			}
			| TK_BOOL {
				int auxBool = 0;

				if ($1.traducao.compare("true") == 0){
					auxBool = 1;
				}
				string tempAux = cria_variavel_temporaria("", 4);

				declaracoes.append("int " + tempAux + ";\n");
				$$.traducao = "\t" + tempAux + " = " + to_string(auxBool) + ";\n";
				$$.variavel_temporaria = tempAux;
				$$.tipo = 4;
			}
			| '(' ATRIBUICAO ')' {
				$$.variavel_temporaria = $2.variavel_temporaria;
				$$.traducao = $2.traducao;
				$$.tipo = $2.tipo;
			}
			;

LOGICA		: LOGICA OP_LOG LOGICA {
				Variavel retornada_esquerda  = retorna_variavel_temporaria_by_id($1.variavel_temporaria);
				Variavel retornada_direita  = retorna_variavel_temporaria_by_id($3.variavel_temporaria);

				string temp_esquerda = "tmp";
				string temp_direita = "tmp";

				temp_esquerda.append(to_string(retornada_esquerda.id));
				temp_direita.append(to_string(retornada_direita.id));

				string tempAux = cria_variavel_temporaria("", 4);

				declaracoes.append("int " + tempAux + ";\n");
				$$.traducao = $1.traducao
							+ $3.traducao
							+ "\t" + tempAux + " = " + temp_esquerda + " " + $2.traducao + " " + temp_direita + ";\n";
				$$.variavel_temporaria = tempAux;
				$$.tipo = 4;
			}
			| '(' LOGICA ')' {
				$$.variavel_temporaria = $2.variavel_temporaria;
				$$.traducao = $2.traducao;
				$$.tipo = $2.tipo;
			}
			| RELACIONAL {
				$$.variavel_temporaria = $1.variavel_temporaria;
				$$.traducao = $1.traducao;
				$$.tipo = 4;
			}
			| TK_EXCL LOGICA {
				Variavel retornada_direita  = retorna_variavel_temporaria_by_id($2.variavel_temporaria);

				string temp_direita = "tmp";

				temp_direita.append(to_string(retornada_direita.id));

				string tempAux = cria_variavel_temporaria("", 4);

				declaracoes.append("int " + tempAux + ";\n");
				$$.traducao = $2.traducao
							+ "\t" + tempAux + " = !" + temp_direita + ";\n";
				$$.variavel_temporaria = tempAux;
				$$.tipo = 4;
			}
			| TK_BOOL {
				int auxBool = 0;

				if ($1.traducao.compare("true") == 0){
					auxBool = 1;
				}
				string tempAux = cria_variavel_temporaria("", 4);

				declaracoes.append("int " + tempAux + ";\n");
				$$.traducao = "\t" + tempAux + " = " + to_string(auxBool) + ";\n";
				$$.variavel_temporaria = tempAux;
				$$.tipo = 4;
			}
			| VAR {
				$$.variavel_temporaria = $1.variavel_temporaria;
				$$.traducao = $1.traducao;
				$$.tipo = $1.tipo;
			}
			| CHAMA_FUNCAO {
				$$.traducao = $1.traducao;
				$$.variavel_temporaria = $1.variavel_temporaria;
				$$.tipo = $1.tipo;

				if($1.variavel_temporaria == "")
					yyerror("Não há como receber valor de uma função que não tem retorno!");
			}
			;

ATRIBUICAO	:  ATRIBUICAO OP_MAT ATRIBUICAO {
				Variavel retornada_esquerda  = retorna_variavel_temporaria_by_id($1.variavel_temporaria);
				Variavel retornada_direita  = retorna_variavel_temporaria_by_id($3.variavel_temporaria);

				string temp_esquerda = "tmp";
				string temp_direita = "tmp";

				temp_esquerda.append(to_string(retornada_esquerda.id));
				temp_direita.append(to_string(retornada_direita.id));

				string aux_traducao;

				//verifica se estao em tipos diferentes
				string tipoAux = "int";
				int tipoAuxNum = 0;
				if(retornada_esquerda.tipo == 1){
					tipoAux = "float";
					tipoAuxNum = 1;
				} else if (retornada_esquerda.tipo == 2){
					tipoAux = "double";
					tipoAuxNum = 2;
				}

				if(retornada_esquerda.tipo != retornada_direita.tipo){

					//verifica quem é o maior/menor
					int maiorTipo = retornada_direita.tipo;
					string menorVar = temp_esquerda;

					if(retornada_esquerda.tipo > retornada_direita.tipo){
						maiorTipo = retornada_esquerda.tipo;
						menorVar = temp_direita;
					}

					//verifica o tipo do maior
					tipoAux = "int";
					tipoAuxNum = 0;
					if(maiorTipo == 1){
						tipoAux = "float";
						tipoAuxNum = 1;
					}
					else if(maiorTipo == 2){
						tipoAux = "double";
						tipoAuxNum = 2;
					}


					// cria variável p/ conversao
					string tempAuxConversao = cria_variavel_temporaria("", maiorTipo);

					declaracoes.append(tipoAux + " " + tempAuxConversao + ";\n");

					aux_traducao = "\t" + tempAuxConversao + " = (" + tipoAux + ") " + menorVar + ";\n";


					//muda as variáveis dos cantos
					if(retornada_esquerda.tipo > retornada_direita.tipo){
						temp_direita = tempAuxConversao;
					} else {
						temp_esquerda = tempAuxConversao;
					}
				}

				string tempAux = cria_variavel_temporaria("", tipoAuxNum);
				declaracoes.append(tipoAux + " " + tempAux + ";\n");

				$$.traducao = $1.traducao
							+ $3.traducao
							+ aux_traducao
							+ "\t" + tempAux + " = " + temp_esquerda + $2.traducao + temp_direita + ";\n";
				$$.tipo = tipoAuxNum;
				$$.variavel_temporaria = tempAux;
			}
  			| VAR_MAT '%' VAR_MAT {
				Variavel retornada_esquerda  = retorna_variavel_temporaria_by_id($1.variavel_temporaria);
				Variavel retornada_direita  = retorna_variavel_temporaria_by_id($3.variavel_temporaria);

				string temp_esquerda = "tmp";
				string temp_direita = "tmp";

				temp_esquerda.append(to_string(retornada_esquerda.id));
				temp_direita.append(to_string(retornada_direita.id));

				string aux_traducao;

				//verifica se estao em tipos diferentes
				string tipoAux = "int";
				int tipoAuxNum = 0;
				if(retornada_esquerda.tipo == 1){
					tipoAux = "float";
					tipoAuxNum = 1;
				} else if (retornada_esquerda.tipo == 2){
					tipoAux = "double";
					tipoAuxNum = 2;
				}

				if(retornada_esquerda.tipo != retornada_direita.tipo){

					//verifica quem é o maior/menor
					int maiorTipo = retornada_direita.tipo;
					string menorVar = temp_esquerda;

					if(retornada_esquerda.tipo > retornada_direita.tipo){
						maiorTipo = retornada_esquerda.tipo;
						menorVar = temp_direita;
					}

					//verifica o tipo do maior
					tipoAux = "int";
					tipoAuxNum = 0;
					if(maiorTipo == 1){
						tipoAux = "float";
						tipoAuxNum = 1;
					}
					else if(maiorTipo == 2){
						tipoAux = "double";
						tipoAuxNum = 2;
					}
					// cria variável p/ conversao
					string tempAuxConversao = cria_variavel_temporaria("", maiorTipo);

					declaracoes.append(tipoAux + " " + tempAuxConversao + ";\n");

					aux_traducao = "\t" + tempAuxConversao + " = (" + tipoAux + ") " + menorVar + ";\n";

					//muda as variáveis dos cantos
					if(retornada_esquerda.tipo > retornada_direita.tipo){
						temp_direita = tempAuxConversao;
					} else {
						temp_esquerda = tempAuxConversao;
					}
				}

				string tempAux = cria_variavel_temporaria("", tipoAuxNum);
				declaracoes.append(tipoAux + " " + tempAux + ";\n");

				string aux = cria_variavel_temporaria("", 0);
				declaracoes.append("" "int " + aux + ";\n");

				$$.traducao = $1.traducao
							+ $3.traducao
							+ aux_traducao
							+ "\t" + aux + " = " + temp_esquerda + " / " + temp_direita + ";\n"
							+ "\t" + aux + " = " + temp_direita + " * " + aux + ";\n"
							+ "\t"+ aux + " = " + temp_esquerda + " - " + aux + ";\n"
							+ "\t" + tempAux + " = " + aux +";\n";
				$$.variavel_temporaria = tempAux;
				$$.tipo = tipoAuxNum;
			}
			| VAR_MAT OP_EXP VAR_MAT{
				Variavel retornada_esquerda  = retorna_variavel_temporaria_by_id($1.variavel_temporaria);
				Variavel retornada_direita  = retorna_variavel_temporaria_by_id($3.variavel_temporaria);

				string temp_esquerda = "tmp";
				string temp_direita = "tmp";

				temp_esquerda.append(to_string(retornada_esquerda.id));
				temp_direita.append(to_string(retornada_direita.id));

				string aux_traducao;

				//verifica se estao em tipos diferentes
				string tipoAux = "int";
				int tipoAuxNum = 0;
				if(retornada_esquerda.tipo == 1){
					tipoAux = "float";
					tipoAuxNum = 1;
				} else if (retornada_esquerda.tipo == 2){
					tipoAux = "double";
					tipoAuxNum = 2;
				}

				if(retornada_esquerda.tipo != retornada_direita.tipo){

					//verifica quem é o maior/menor
					int maiorTipo = retornada_direita.tipo;
					string menorVar = temp_esquerda;

					if(retornada_esquerda.tipo > retornada_direita.tipo){
						maiorTipo = retornada_esquerda.tipo;
						menorVar = temp_direita;
					}

					//verifica o tipo do maior
					tipoAux = "int";
					tipoAuxNum = 0;
					if(maiorTipo == 1){
						tipoAux = "float";
						tipoAuxNum = 1;
					}
					else if(maiorTipo == 2){
						tipoAux = "double";
						tipoAuxNum = 2;
					}

					// cria variável p/ conversao
					string tempAuxConversao = cria_variavel_temporaria("", maiorTipo);

					declaracoes.append("\t" + tipoAux + " " + tempAuxConversao + ";\n");

					aux_traducao = "\t" + tempAuxConversao + " = (" + tipoAux + ") " + menorVar + ";\n";

					//muda as variáveis dos cantos
					if(retornada_esquerda.tipo > retornada_direita.tipo){
						temp_direita = tempAuxConversao;
					} else {
						temp_esquerda = tempAuxConversao;
					}
				}

				string tempAux = cria_variavel_temporaria("", tipoAuxNum);
				declaracoes.append("" + tipoAux + " " + tempAux + ";\n");

				string conta = cria_variavel_temporaria("", 0);
				declaracoes.append("" "int " + conta + ";\n");

				string verifica_if = cria_variavel_temporaria("", 0);
				declaracoes.append("" "int " + verifica_if + ";\n");

				$$.traducao = $1.traducao
							+ $3.traducao
							+ aux_traducao
							+ "\n\t" + temp_direita + " = (int) " + temp_direita +";\n"
							+ "\t" + tempAux + " = " + temp_esquerda + ";\n"
							+ "\t" + conta + " = 1;\n\n"
							+ "\tinicio_for_operacao" + to_string(conta_for_operacao) + ":\n"
							+ "\t"+ verifica_if + " = " + conta + " < " + temp_direita +";\n"
							+ "\tif ("+ verifica_if +") goto inicio_bloco_for_operacao" + to_string(conta_for_operacao) + ";\n"
							+ "\tgoto final_for_operacao" + to_string(conta_for_operacao) + ";\n\n"
							+ "\tinicio_bloco_for_operacao" + to_string(conta_for_operacao) + ": \n"
							+ "\t" + tempAux + " = " + tempAux + " * " + temp_esquerda + ";\n\n"
							+ "\t" + conta + " = " + conta + " + 1;\n"
							+ "\tgoto inicio_for_operacao" + to_string(conta_for_operacao) + ";\n"
							+ "\tfinal_for_operacao" + to_string(conta_for_operacao) + ":\n\n";
				conta_for_operacao++;

				$$.variavel_temporaria = tempAux;
				$$.tipo = tipoAuxNum;
			}
			| VAR_MAT TK_EXCL{
				Variavel retornada_esquerda  = retorna_variavel_temporaria_by_id($1.variavel_temporaria);

				//verifica se estao em tipos diferentes
				string tipoAux = "int";
				int tipoAuxNum = 0;
				if(retornada_esquerda.tipo == 1){
					tipoAux = "float";
					tipoAuxNum = 1;
				} else if (retornada_esquerda.tipo == 2){
					tipoAux = "double";
					tipoAuxNum = 2;
				}

				string tempAux = cria_variavel_temporaria("", 0);
				declaracoes.append( "int " + tempAux + ";\n");

				string conta = cria_variavel_temporaria("", 0);
				declaracoes.append( "int " + conta + ";\n");

				string verifica_if = cria_variavel_temporaria("", 0);
				declaracoes.append("int " + verifica_if + ";\n");

				string tempNova = cria_variavel_temporaria("", 0);
				declaracoes.append("int " + tempNova + ";\n");

				$$.traducao = $1.traducao
							+ "\n\t" + tempAux + " = (int) " + $1.variavel_temporaria + ";"
							+ "\n\t" + tempNova + " = " + tempAux + " - 1;"
							+ "\n\t" + conta + " = 1;\n"
							+ "\n\tinicio_for_operacao" + to_string(conta_for_operacao) + ":"
							+ "\n\t" + verifica_if + " = " + tempNova + " != 1;"
							+ "\n\tif ("+ verifica_if +") goto inicio_bloco_for_operacao" + to_string(conta_for_operacao) + ";"
							+ "\n\tgoto final_for_operacao" + to_string(conta_for_operacao) + ";\n"
							+ "\n\tinicio_bloco_for_operacao" + to_string(conta_for_operacao) + ":"
							+ "\n\t" + tempAux + " = " + tempAux + " * " + tempNova + ";"
							+ "\n\t" + tempNova + " = " + tempNova + "- 1;\n"
							+ "\n\t" + conta + " = " + conta + " + 1;"
							+ "\n\tgoto inicio_for_operacao" + to_string(conta_for_operacao) + ";"
							+ "\n\tfinal_for_operacao" + to_string(conta_for_operacao) + ":\n\n";

				$$.variavel_temporaria = tempAux;
				$$.tipo = tipoAuxNum;
				conta_for_operacao++;

			}
			| TK_NUM {
				string tempAux = cria_variavel_temporaria("", 0);
				declaracoes.append("int " + tempAux + ";\n");
				$$.traducao = "\t" +  tempAux + " = " + $1.traducao + ";\n";
				$$.variavel_temporaria = tempAux;
				$$.tipo = 0;
			}
			| TK_FLOAT {
				string tempAux = cria_variavel_temporaria("", 2);
				declaracoes.append("double " + tempAux + ";\n");
				$$.traducao = "\t" +  tempAux + " = " + $1.traducao + ";\n";
				$$.variavel_temporaria = tempAux;
				$$.tipo = 2;
			}
			| '(' ATRIBUICAO ')' {
				$$.traducao = $2.traducao;
				$$.variavel_temporaria = $2.variavel_temporaria;
				$$.tipo = $2.tipo;
			}
			| CAST_NUM '(' TK_NOME_VARIAVEL ')'{
				Variavel retornada  = retorna_variavel_temporaria($3.traducao);
				string temp = "tmp";
				temp.append(to_string(retornada.id));

				if(retornada.tipo <= 2){
					string tempAux;

					if($1.traducao.compare("Int") == 0){
						tempAux = cria_variavel_temporaria("", 0);
						declaracoes.append("int " + tempAux + ";\n");
						$$.traducao = "\t" + tempAux + " = (int) " + temp + ";\n";
						$$.tipo = 0;
					} else if ($1.traducao.compare("Float") == 0) {
						tempAux = cria_variavel_temporaria("", 1);
						declaracoes.append("float " + tempAux + ";\n");
						$$.traducao = "\t" + tempAux + " = (float) " + temp + ";\n";
						$$.tipo = 1;
					} else {
						tempAux = cria_variavel_temporaria("", 2);
						declaracoes.append("double " + tempAux + ";\n");
						$$.traducao = "\t" + tempAux + " = (double) " + temp + ";\n";
						$$.tipo = 2;
					}

					$$.variavel_temporaria = tempAux;
				}
				else
					yyerror("não é possivel fazer cast ");
			}
			| VAR {
				$$.variavel_temporaria = $1.variavel_temporaria;
				$$.traducao = $1.traducao;
				$$.tipo = $1.tipo;
			}
			| CHAMA_FUNCAO {
				$$.traducao = $1.traducao;
				$$.variavel_temporaria = $1.variavel_temporaria;
				$$.tipo = $1.tipo;

				if($1.variavel_temporaria == "")
					yyerror("Não há como receber valor de uma função que não tem retorno!");
			}
			;
VAR_MAT		: TK_NUM {
				string tempAux = cria_variavel_temporaria("", 0);
				declaracoes.append("int " + tempAux + ";\n");
				$$.traducao = "\t" +  tempAux + " = " + $1.traducao + ";\n";
				$$.variavel_temporaria = tempAux;
				$$.tipo = 0;
			}
			| TK_FLOAT {
				string tempAux = cria_variavel_temporaria("", 2);
				declaracoes.append("double " + tempAux + ";\n");
				$$.traducao = "\t" +  tempAux + " = " + $1.traducao + ";\n";
				$$.variavel_temporaria = tempAux;
				$$.tipo = 2;
			}
			| TK_NOME_VARIAVEL{
				Variavel retornada  = retorna_variavel_temporaria($1.traducao);
				string temp = "tmp";
				temp.append(to_string(retornada.id));

				if((retornada.tipo <= 5) && (retornada.tipo != 3)){
					$$.traducao = "";
					$$.variavel_temporaria = temp;
					$$.tipo = retornada.tipo;
				} else
					yyerror("Atribuição inválida 3 ");
			}
			|'(' ATRIBUICAO ')' {
				$$.traducao = $2.traducao;
				$$.variavel_temporaria = $2.variavel_temporaria;
			}
			;

VAR			: TK_NOME_VARIAVEL {
				Variavel retornada  = retorna_variavel_temporaria($1.traducao);
				string temp = "tmp";
				temp.append(to_string(retornada.id));

				$$.traducao = "";
				$$.variavel_temporaria = temp;
				$$.tipo = retornada.tipo;
			}
			;

IMPRIME		: IMPRIME '+' IMPRIME {
				$$.traducao = $1.traducao + " << " + $3.traducao;
			}
			| TK_NOME_VARIAVEL {
				Variavel retornada  = retorna_variavel_temporaria($1.traducao);
				string temp = "tmp";
				temp.append(to_string(retornada.id));

				$$.traducao = temp;
			}
			| TK_STRING {
				$$.traducao = $1.traducao;
			}
			;


CAST_NUM	: TK_TIPO_INT {
				$$.traducao = "Int";
			}
			| TK_TIPO_FLOAT {
				$$.traducao = "Float";
			}
			| TK_TIPO_DOUBLE {
				$$.traducao = "Double";
			}
			;
OP_MAT		: '+' {
				$$.traducao = "+";
			}
			| '-' {
				$$.traducao = "-";
			}
			| '*' {
				$$.traducao = "*";
			}
			| '/' {
				$$.traducao = "/";
			}
			| '%' {
				$$.traducao = "%";
			}
			;

OP_REL		: '=' '=' {
				$$.traducao = "==";
			}
			| TK_DIF {
				$$.traducao = "!=";
			}
			| '<' {
				$$.traducao = "<";
			}
			| '>' {
				$$.traducao = ">";
			}
			| '<' '=' {
				$$.traducao = "<=";
			}
			| '>' '=' {
				$$.traducao = ">=";
			}
			;

OP_LOG		: '&&' {
				$$.traducao = "&&";
			}
			| '||' {
				$$.traducao = "||";
			}
			;
OP_EXP		: '^' {
				$$.traducao = "^";
			}
			| 'ˆ' {
				$$.traducao = "^";
			}
			;

TIPO_NUM 	: TK_TIPO_INT {
				$$.traducao = "int";
				$$.tipo = 0;
				tipo_variavel_esquerda = 0;
			}
			| TK_TIPO_FLOAT {
				$$.traducao = "float";
				$$.tipo = 1;
				tipo_variavel_esquerda = 1;
			}
			| TK_TIPO_DOUBLE {
				$$.traducao = "double";
				$$.tipo = 2;
				tipo_variavel_esquerda = 2;
			}
			;

TIPO_CHAR	: TK_TIPO_CHAR {
				$$.traducao = "char";
				$$.tipo = 3;
				tipo_variavel_esquerda = 3;
			}
			;

TIPO_BOOL	: TK_TIPO_BOOL {
				$$.traducao = "bool";
				$$.tipo = 4;
				tipo_variavel_esquerda = 4;
			}
			;

TIPO_STRING	: TK_TIPO_STRING {
				$$.traducao = "string";
				$$.tipo = 5;
				tipo_variavel_esquerda = 5;
			}
			;

TIPO 		: TIPO_NUM
			| TIPO_CHAR
			| TIPO_BOOL
			| TIPO_STRING
			;

%%

#include "lex.yy.c"

int yyparse();

int main( int argc, char* argv[] ){
	yyparse();

	return 0;
}

void yyerror( string MSG ){
	cout << "\n" << "ERRO NA LINHA LINHA: " << new_line << " -> " << MSG << "\n" << endl;
	exit (0);
}

void yyerror2( string MSG, int line ){
	cout << "\n" << "ERRO NA LINHA LINHA: " << line << " -> " << MSG << "\n" << endl;
	exit (0);
}
