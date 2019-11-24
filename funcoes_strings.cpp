void cria_conf_string(string nome, string var_tam, int valor_tam){
	Configuracao_String nova_conf;
	nova_conf.nome = nome;
	nova_conf.var_tam = var_tam;
	nova_conf.valor_tam = valor_tam;

	lista_conf_strings.push_back(nova_conf);
}

void compara_tamanho_string_conf(string nome, int valor_tam){
	Configuracao_String aux;
	for (vector<Configuracao_String>::iterator it = lista_conf_strings.begin(); it != lista_conf_strings.end(); it++) {
		aux = *it;
		if(nome.compare(aux.nome.c_str()) == 0){
			if(aux.valor_tam < valor_tam){
				it->valor_tam = valor_tam;
			}
			break;
		}
	}
}
