#include <iostream>

struct no {
	int dado;
	no* prox;
};

no* inicioF = NULL;
no* fimF = NULL;

void enqueue(int valor);
void dequeue();

int main()
{
	

}

void enqueue(int valor)
{
	no* novo;
	novo = new (struct no);

	novo->dado = valor;
	novo->prox = NULL;

	if (fimF == NULL)
	{
		inicioF = novo;
	}
	else
	{
		fimF->prox = novo;
	}
	fimF = novo;
}

void dequeue()
{
	no* apaga;

	if (inicioF == NULL)
	{
		std::cout << "Lista vazia" << std::endl;
		return;
	}
	
	apaga = inicioF;
	inicioF = inicioF->prox;
	delete apaga;

	if (inicioF == NULL)
	{
		fimF = NULL;
	}
}

void topo()
{
	
}

bool vazia()
{
	if (fila == NULL)
	{
		std::cout << "Erro: a fila esta vazia." << std::endl;
		return true;
	}
	return false;
}

void imprime()
{
	if (fila == NULL)
	{
		std::cout << "Erro: a fila esta vazia." << std::endl;
		return;
	}
	no* temp = fila;

	std::cout << "\n";
	std::cout << "Elementos da pilha:" << std::endl;

	while (temp != NULL) {
		std::cout << temp->dado << " ";
		temp = temp->prox;
	}
	std::cout << "\n";
	delete temp;
}