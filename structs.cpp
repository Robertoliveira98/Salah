typedef struct var {
	int id; //tmp ID
	string nome; //nome dado pelo usuário
	int tipo; // 0 - int, 1 - float, 2 - double, 3 - char, 4 - boolean, 5 - string, 6 - tamanho string
} Variavel;

typedef struct param_func {
	string nome_tmp; //nome tmp
	int tipo; // 0 - int, 1 - float, 2 - double, 3 - char, 4 - boolean, 5 - string, 6 - tamanho string
} Param;

struct atributos{
	string label;
	string traducao;
	string variavel_temporaria;
	int tamanho;
	vector<Param> params;
	int tipo; // 0 - int, 1 - float, 2 - double, 3 - char, 4 - boolean, 5 - string, 6 - tamanho string
};

typedef struct context {
	vector<Variavel> vector_variaveis;
	int posicao;
} Contexto;

typedef struct laco {
	int posicao;
	int tipo; // 0 - while; 1 - do while, 2 - for; 3 - switch case
	int posicao_do_tipo;
} Laco;

typedef struct conf_str {
	string nome;
	string var_tam;
	int valor_tam;
} Configuracao_String;

typedef struct funcoes {
	int id; //func ID
	int tipo; // -1 - void, 0 - int, 1 - float, 2 - double, 3 - char, 4 - boolean, 5 - string
	string nome;
	vector<Variavel> parametros;
	vector<Param> aux_param;
	int aux_linha;
} Funcao;
