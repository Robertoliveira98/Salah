all:
		clear
		clear
		lex lexica.l
		yacc -d sintatica.y
		g++ -o glf y.tab.c -ll

		./glf < exemplo8.salah
