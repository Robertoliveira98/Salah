#define YYSTYPE atributos
using namespace std;

int yylex(void);
void yyerror(string);
void yyerror2(string,int);

int id_func = 0;
int new_line = 1;
int conta_if = 0;
int conta_for = 0;
int conta_case = 0;
int conta_while = 0;
int conta_switch = 0;
int conta_rel_string = 0;
int conta_for_operacao = 0;
int tipo_retorna_funcao = -1;
int tipo_variavel_esquerda = -1;

string funcoes = "";
string declaracoes = "";
string free_strings = "";
