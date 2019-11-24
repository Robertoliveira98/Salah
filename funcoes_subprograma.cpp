Funcao retorna_funcao(string nome);

Funcao retorna_funcao_lista_nao_iniciadas(string nome, int erase){
	int position = 0;
	Funcao aux, vazio;
	vector<Funcao> funcoes = lista_de_funcoes_nao_iniciadas;

	for (vector<Funcao>::iterator it = funcoes.begin(); it != funcoes.end(); it++) {
		aux = *it;
		if(nome.compare(aux.nome.c_str()) == 0){
			if(erase == 1)
				lista_de_funcoes_nao_iniciadas.erase(lista_de_funcoes_nao_iniciadas.begin() + position);
			return aux;
			break;
		} else {
			aux = vazio;
		}
		position++;
	}

	return aux;
}

string cria_funcao(string nome_funcao, int tipo){

	Funcao func_verifica_exist = retorna_funcao(nome_funcao);
	if (!func_verifica_exist.nome.empty()) {
		yyerror("Função já foi declarada!");
	}

	int ja_foi_chamada = 0;

	Funcao nova_funcao = retorna_funcao_lista_nao_iniciadas(nome_funcao, 1);

	if(nova_funcao.nome.empty())
		nova_funcao.id = id_func;
	else{
		ja_foi_chamada = 1;
		if(tipo != nova_funcao.tipo)
			yyerror2("Variáveis de tipo incompatíveis", nova_funcao.aux_linha);
	}
	nova_funcao.tipo = tipo;
	nova_funcao.nome = nome_funcao;
	nova_funcao.parametros = params;

	//VERIFICA PARAMETROS
	if(ja_foi_chamada == 1){
		if (nova_funcao.parametros.size() != nova_funcao.aux_param.size())
			yyerror2("Você chamou uma função com a quantidade de parametros errada!", nova_funcao.aux_linha);
		else {
			int iguais = 0;

			Variavel aux_guardado;
			Param aux_chamado;

			vector<Variavel> params_guardado = nova_funcao.parametros;
			vector<Param> params_chamado = nova_funcao.aux_param;

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
				yyerror2("Chamada de função com tipo diferente da definição!\n", nova_funcao.aux_linha);
		}
	}
	//SE TUDO ESTIVER CORRETO, CONTIUA

	lista_de_funcoes.push_back(nova_funcao);

	string nome_func_tmp = "func";
	nome_func_tmp.append(to_string(nova_funcao.id));

	if(ja_foi_chamada == 0)
		id_func++;

	params.clear();

	return nome_func_tmp;
}

Funcao retorna_funcao(string nome){
	Funcao aux, vazio;
	vector<Funcao> funcoes = lista_de_funcoes;

	for (vector<Funcao>::iterator it = funcoes.begin(); it != funcoes.end(); it++) {
		aux = *it;
		if(nome.compare(aux.nome.c_str()) == 0){
			return aux;
			break;
		} else {
			aux = vazio;
		}
	}

	return aux;
}

int verifica_lista_nao_iniciadas(){
	if(lista_de_funcoes_nao_iniciadas.size() == 0)
		return 0; // vazia
	else
		return 1; // n vazia
}
