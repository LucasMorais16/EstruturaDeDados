#include <iostream>
#include "Topo.h"
#include "Consts.h"

void topo(int pilha[], int &topoP)
{
	if (topoP == -1)
	{
		std::cout << "Pilha vazia" << std::endl;
		return;
	}

	std::cout << "Topo da pilha: " << pilha[topoP] << std::endl;
}