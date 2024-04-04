#include <iostream>
#include "Imprime.h"
#include "Consts.h"

void imprime(int pilha[], int topoP)
{
	if (topoP == -1)
	{
		std::cout << "Pilha vazia" << std::endl;
		return;
	}

	for (int i = 0; i <= topoP; i++)
	{	
		std::cout << pilha[i] << std::endl;
	}
}