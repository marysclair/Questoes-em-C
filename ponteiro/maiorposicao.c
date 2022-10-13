#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
	int numero;
	struct nodo * proximo;
}Nodo;

typedef struct{
	Nodo * topo;
}Pilha;

Pilha * criarPilha(){
	Pilha * pilha = (Pilha *) malloc (sizeof(Pilha));
	pilha -> topo = NULL;
	return pilha;
}

void push(Pilha * pilha, int n){
	Nodo * novo = (Nodo *) malloc (sizeof(Nodo));
	novo -> numero = n;
	novo -> proximo = pilha -> topo;
	pilha -> topo = novo;
}

int pop(Pilha * pilha){
	Nodo * aux = pilha -> topo;
	int resultado = aux -> numero;
	pilha -> topo = aux -> proximo;
	free(aux);
	return resultado;
}

int estaVazia(Pilha * pilha){
	if(pilha -> topo==NULL){
		return 1;
	}
	return 0;
}

int posicaoMaior(Pilha * pilha){
	Nodo * aux = pilha -> topo;
	int posicao=1;
	int menor = aux -> numero;
	aux = aux -> proximo;
	int num;
	while(aux!=NULL){
		num = aux -> numero;
		if(num < menor){
			menor = aux -> numero;
			posicao = posicao + 1;
		}
		aux = aux -> proximo;
	}
	return posicao;
}

void main(){
	Pilha * pilha = criarPilha();
	int n;
	scanf("%d",&n);
	while(n!=0){
		push(pilha, n);
		scanf("%d",&n);
	}
	int posicao = posicaoMaior(pilha);
	printf("posicao: %d",posicao);
}
