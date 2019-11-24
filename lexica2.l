%{
#include <string>

%}

ESPACO [ \t]
DIGITO [0-9]
LETRA [A-Za-z_]

DELIM {ESPACO}+
NUM {DIGITO}+
REAL {NUM}+("."{NUM}+)?
CHAR \'({LETRA}|{NUM})\'
BOOL ("true"|"false")

NOME_DE_VARIAVEL ({LETRA}|{DIGITO})*

%%

"\n"                    {}

{DELIM}                 {}


"Main"                  {return TK_MAIN;}

"Int"                   {return TK_TIPO_INT;}
"Float"                 {return TK_TIPO_FLOAT;}
"Double"                {return TK_TIPO_DOUBLE;}
"Bool"                  {return TK_TIPO_BOOL;}
"Char"                  {return TK_TIPO_CHAR;}

[(){}[\];,:=]           { return *yytext; }

"function"              { return *yytext; }
"var"                   { return *yytext; }
"const"                 { return *yytext; }

"&&"					{ return *yytext; }
"||"					{ return *yytext; }
"!"						{ return *yytext; }
"<"						{ return *yytext; }
">"						{ return *yytext; }

[+\-*%/]                 { return *yytext; }

{NUM}                   { yylval.traducao = yytext; return TK_NUM; }
{REAL}                   { yylval.traducao = yytext; return TK_FLOAT; }
{CHAR}                   { yylval.traducao = yytext; return TK_CHAR; }
{BOOL}                   { yylval.traducao = yytext; return TK_BOOL; }
{NOME_DE_VARIAVEL}      { yylval.traducao = yytext; return TK_NOME_VARIAVEL; }

.                       { *yytext; }

%%
