#include <iostream>

struct no {
	int dado;
	struct no* prox;
};

struct no* pilha = NULL;

void push(int valor);
void pop();
void topo();
bool vazia();
void imprime();

int main()
{
	int valor;
	std::cout << "Insira os valores que você deseja na pilha. (-1 para encerrar)" << std::endl;

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

	pop();
	imprime();

	pop();
	imprime();
	
	if (vazia() == true) {
		std::cout << "A pilha esta vazia" << std::endl;
	}
	
}

void push(int valor)
{
	struct no* novo;
	novo = new(struct no);
	novo->dado = valor;
	novo->prox = pilha;
	pilha = novo;
}

void pop()
{
	if (pilha == NULL) 
	{
		std::cout << "Erro: a pilha está vazia." << std::endl;
		return;
	}

	struct no* temp = pilha;
	pilha = pilha->prox;
	free(temp);
}

void topo()
{
	if (pilha == NULL)
	{
		std::cout << "Erro: a pilha está vazia." << std::endl;
		return;
	}

	struct no* temp = pilha;

	std::cout << "\n";
	std::cout << "Topo da pilha:" << std::endl;

	std::cout << temp->dado;
	std::cout << "\n";
}

bool vazia()
{
	if (pilha == NULL)
	{
		std::cout << "Erro: a pilha está vazia." << std::endl;
		return true;
	}
	return false;
}

void imprime()
{
	if (pilha == NULL)
	{
		std::cout << "Erro: a pilha está vazia." << std::endl;
		return;
	}
	struct no* temp = pilha;

	std::cout << "\n";
	std::cout << "Elementos da pilha:" << std::endl;

	while (temp != NULL) {
		std::cout << temp->dado << " ";
		temp = temp->prox;
	}
	std::cout << "\n";
}