#include <iostream>

struct no {
	int dado;
	no* prox;
};

no* pilha = NULL;

void push(int valor);
void pop();
void topo();
bool vazia();
void imprime();

int main()
{
	int valor;
	std::cout << "Insira os valores que voce deseja na pilha. (-1 para encerrar)" << std::endl;

	do
	{
		std::cin >> valor;
		if (valor != -1)
		{
			push(valor);
		}		

	} while (valor != -1);

	imprime();
	topo();

	pop();
	imprime();
	topo();

	pop();
	imprime();
	topo();

	pop();
	imprime();
	topo();
	
	if (vazia() == true) {
		std::cout << "A pilha esta vazia" << std::endl;
	}
	
}

void push(int valor)
{
	no* novo;
	novo = new(struct no);
	novo->dado = valor;
	novo->prox = pilha;
	pilha = novo;
}

void pop()
{
	if (pilha == NULL) 
	{
		std::cout << "Erro: a pilha esta vazia." << std::endl;
		return;
	}

	pilha = pilha->prox;
	std::cout << "\nElemento removido" << std::endl;
}

void topo()
{
	if (pilha == NULL)
	{
		std::cout << "Erro: a pilha esta vazia." << std::endl;
		return;
	}

	std::cout << "\n";
	std::cout << "Topo da pilha:" << std::endl;

	std::cout << pilha->dado;
	std::cout << "\n";
}

bool vazia()
{
	if (pilha == NULL)
	{
		std::cout << "Erro: a pilha esta vazia." << std::endl;
		return true;
	}
	return false;
}

void imprime()
{
	if (pilha == NULL)
	{
		std::cout << "Erro: a pilha esta vazia." << std::endl;
		return;
	}
	no* temp = pilha;

	std::cout << "\n";
	std::cout << "Elementos da pilha:" << std::endl;

	while (temp != NULL) {
		std::cout << temp->dado << " ";
		temp = temp->prox;
	}
	std::cout << "\n";
	delete temp;
}