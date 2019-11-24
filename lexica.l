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
STRING (\"(\\.|[^"\\])*\")
%%

"\n"                    { nova_linha(); }

{DELIM}                 {}


"Main"                  {return TK_MAIN;}

"Int"                   {return TK_TIPO_INT;}
"Float"                 {return TK_TIPO_FLOAT;}
"Double"                {return TK_TIPO_DOUBLE;}
"Bool"                  {return TK_TIPO_BOOL;}
"Char"                  {return TK_TIPO_CHAR;}
"String"                {return TK_TIPO_STRING;}

"Print"                 {return TK_PRINT;}
"Input"                 {return TK_INPUT;}

"if"                    {return TK_IF;}
"else"                  {return TK_ELSE;}

"while"                 {return TK_WHILE;}
"do"                    {return TK_DO;}
"for"                   {return TK_FOR;}
"switch"                {return TK_SWITCH;}
"case"                  {return TK_CASE;}
"default"               {return TK_DEFAULT;}

"break"                 {return TK_BREAK;}
"continue"              {return TK_CONTINUE;}
"all"                   {return TK_ALL;}

"return"                {return TK_RETURN;}



[(){}[\];,:=]           { return *yytext; }

"function"              { return *yytext; }
"var"                   { return *yytext; }
"const"                 { return *yytext; }

"&&"					{ return *yytext; }
"||"					{ return *yytext; }
"!"						{ return TK_EXCL; }
"!="					{ return TK_DIF; }
"<"						{ return *yytext; }
">"						{ return *yytext; }

[+\-*.%/^ˆ$]             { return *yytext; }

{NUM}                   { yylval.traducao = yytext; return TK_NUM; }
{REAL}                  { yylval.traducao = yytext; return TK_FLOAT; }
{CHAR}                  { yylval.traducao = yytext; return TK_CHAR; }
{BOOL}                  { yylval.traducao = yytext; return TK_BOOL; }
{STRING}                { yylval.traducao = yytext; return TK_STRING; }
{NOME_DE_VARIAVEL}      { yylval.traducao = yytext; return TK_NOME_VARIAVEL; }

.                       { *yytext; }

%%
