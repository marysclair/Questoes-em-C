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

int somaPar(Pilha * pilha){
	Nodo * aux = pilha -> topo;
	int posicao=0;
	int soma=0;
	int num;
	while(aux->proximo!=NULL){
		num = aux->numero;
		if(posicao%2==0){
			
			soma += num;
		}
		posicao++;
		aux = aux->proximo;
	}
	if(posicao%2==0){
		num = aux->numero;
		soma+=num;
	}
	return soma;
}

void main(){
	Pilha * pilha = criarPilha();
	int n;
	scanf("%d",&n);
	while(n!=0){
		push(pilha, n);
		scanf("%d",&n);
	}
	int soma = somaPar(pilha);
	printf("soma: %d",soma);
}
