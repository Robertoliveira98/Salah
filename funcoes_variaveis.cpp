Variavel procura_se_existe(string nome);

string cria_variavel_temporaria(string nome_variavel, int tipo){
	if (nome_variavel != "") {
		Variavel var_verifica_exist = procura_se_existe(nome_variavel);
		if (!var_verifica_exist.nome.empty()) {
			yyerror("Variável já foi declarada!");
		}
	}

	static int id_variavel = 0;

	Variavel nova_temporaria;
	nova_temporaria.id = id_variavel;
	nova_temporaria.nome = nome_variavel;
	nova_temporaria.tipo = tipo;

	bloco_variaveis()->push_back(nova_temporaria);

	string variavel_temporaria = "tmp";
	variavel_temporaria.append(to_string(id_variavel));
	id_variavel++;

	if(tipo == 5){
		free_strings.append("\n\tfree(" + variavel_temporaria + ");");
	}

	return variavel_temporaria;
}

Variavel retorna_variavel_temporaria(string nome){
	stack<Contexto> copia_pilha = pilha_de_escopo;
	Variavel aux, vazio;
	while(!copia_pilha.empty()){
		vector<Variavel> variaveis = copia_pilha.top().vector_variaveis;

		for (vector<Variavel>::iterator it = variaveis.begin(); it != variaveis.end(); it++) {
			aux = *it;
			if(nome.compare(aux.nome.c_str()) == 0){
				return aux;
				break;
			} else {
				aux = vazio;
			}
		}
		copia_pilha.pop();
	}
	if (aux.nome.empty()) {
		yyerror("Uma variável chamanda não foi declarada!");
	}
	return aux;
}

Variavel procura_se_existe(string nome){
	stack<Contexto> copia_pilha = pilha_de_escopo;
	Variavel aux, vazio;
	while(!copia_pilha.empty()){
		vector<Variavel> variaveis = copia_pilha.top().vector_variaveis;

		for (vector<Variavel>::iterator it = variaveis.begin(); it != variaveis.end(); it++) {
			aux = *it;
			if(nome.compare(aux.nome.c_str()) == 0){
				return aux;
				break;
			} else {
				aux = vazio;
			}
		}
		copia_pilha.pop();
	}
	return aux;
}

Variavel retorna_variavel_temporaria_by_id(string nome){
	stack<Contexto> copia_pilha = pilha_de_escopo;
	Variavel aux;
	while(!copia_pilha.empty()){
		vector<Variavel> variaveis = copia_pilha.top().vector_variaveis;

		for (vector<Variavel>::iterator it = variaveis.begin(); it != variaveis.end(); it++) {
			aux = *it;
			string tempo = "tmp";
			tempo.append(to_string(aux.id));
			if(nome.compare(tempo) == 0){
				return aux;
				break;
			}
		}
		copia_pilha.pop();
	}

	return aux;
}

void nova_linha(){
	new_line++;
	tipo_variavel_esquerda = -1;
}

string retorna_nome_tipo(int tipo){
	switch (tipo) {
		case 0:
			return "int";
			break;
		case 1:
			return "float";
			break;
		case 2:
			return "double";
			break;
		case 3:
			return "char";
			break;
		case 4:
			return "int";
			break;
		case 5:
			return "string";
			break;
	}
	return "";
}
