#include <iostream>
#include "Pop.h"
#include "Consts.h"

void pop(int &topoP)
{
	if (topoP == -1)
	{
		std::cout << "Pilha vazia" << std::endl;
		return;
	}

	topoP = topoP - 1;
	std::cout << "Elemento removido" << std::endl;
}