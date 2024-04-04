#include <iostream>
#include "Push.h"
#include "Consts.h"

void push(int valor, int pilha[], int& topoP)
{
	if (topoP == TAM - 1)
	{
		std::cout << "Pilha Cheia" << std::endl;
		return;
	}

	topoP = topoP + 1;
	pilha[topoP] = valor;
	std::cout << "Elemento inserido" << std::endl;
}