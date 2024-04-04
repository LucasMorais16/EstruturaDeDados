#include <iostream>
#include "Push.h"
#include "Pop.h"
#include "Topo.h"
#include "Vazia.h"
#include "Imprime.h"
#include "Consts.h"

int pilha[TAM];
int topoP = -1;

int main()
{
	push(20, pilha, topoP);
	push(10, pilha, topoP);
	push(5, pilha, topoP);

	pop(topoP);
	topo(pilha, topoP);
	//vazia(topoP);
	imprime(pilha, topoP);
}

