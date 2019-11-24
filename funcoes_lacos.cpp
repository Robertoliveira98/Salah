void empilhar_laco(int tipo, int posicao_do_tipo){

	int posicao = 0;
	if(!pilha_de_lacos.empty()){
		posicao = pilha_de_lacos.top().posicao + 1;
	}

	Laco novoLaco;
	novoLaco.posicao = posicao;
	novoLaco.tipo = tipo;
	novoLaco.posicao_do_tipo = posicao_do_tipo;
	pilha_de_lacos.push(novoLaco);
}

void desempilhar_laco(){
	pilha_de_lacos.pop();
}

string retorna_goto(){
	string tipo = "while";

	switch (pilha_de_lacos.top().tipo) {
		case 1:
			tipo = "do_while";
			break;
		case 2:
			tipo = "for";
			break;
		case 3:
			tipo = "switch";
			break;
	}

	string retorna_var = "final_" + tipo + "_" + to_string(pilha_de_lacos.top().posicao);;

	return retorna_var;
}

string retorna_inicio_goto(stack<Laco> pilha_aux){
	string tipo = "while";

	switch (pilha_aux.top().tipo) {
		case 1:
			tipo = "do_while";
			break;
		case 2:
			tipo = "for";
			break;
		case 3:
			tipo = "switch";
			break;
	}

	string retorna_var = "inicio_" + tipo + "_" + to_string(pilha_aux.top().posicao);;

	return retorna_var;
}

string retorna_goto_pilha_aux(stack<Laco> pilha_aux){
	string tipo = "while";

	switch (pilha_aux.top().tipo) {
		case 1:
			tipo = "do_while";
			break;
		case 2:
			tipo = "for";
			break;
		case 3:
			tipo = "switch";
			break;
	}

	string retorna_var = "final_" + tipo + "_" + to_string(pilha_aux.top().posicao);

	return retorna_var;
}
