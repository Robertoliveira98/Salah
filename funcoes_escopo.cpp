void empilhar_pilha(){
	int posicao = 0;
	if(!pilha_de_escopo.empty()){
		posicao = pilha_de_escopo.top().posicao + 1;
	}

	vector<Variavel> vector_variaveis;
	Contexto novoContexto;
	novoContexto.vector_variaveis = vector_variaveis;
	novoContexto.posicao = posicao;
	pilha_de_escopo.push(novoContexto);
}

void desempilhar_pilha(){
	pilha_de_escopo.pop();
}

vector<Variavel> *bloco_variaveis(){
	return &pilha_de_escopo.top().vector_variaveis;
}
