#include <iostream>

const int TAM = 6;

void enqueue(int& fimF, int& contador, int fila[]);
void dequeue(int& inicioF, int& contador, int fila[]);
void imprime(int& inicioF, int& contador, int fila[]);
void inicio(int& contador, int fila[], int& inicioF);
bool vazia(int& contador);

int main()
{
	int fila[TAM];
	int inicioF = 0;
	int fimF = 0;
	int contador = 0; //numero de elementos na fila

	for (int i = 0; i < 7; i++)
	{
		enqueue(fimF, contador, fila); //a cada loop, a função insere 1 valor.
	}
	
	imprime(inicioF, contador, fila);

	dequeue(inicioF, contador, fila); //chamada da função remove 1 elemento

	imprime(inicioF, contador, fila);

	if (vazia(contador) == true) {
		std::cout << "Vazia" << std::endl;
	}
		
}

void enqueue(int &fimF, int &contador, int fila[]) //Inserir elemento na Fila
{
	int valor;
	if (contador == TAM)
	{
		std::cout << "Fila cheia" << std::endl;
		return;
	}
	std::cout << "Insira um valor na fila: ";
	std::cin >> valor;

	contador = contador + 1;
	fila[fimF] = valor;

	if (fimF == TAM - 1)
	{
		fimF = 0;
	}
	else
	{
		fimF = fimF + 1;
	}

}

void dequeue(int& inicioF, int& contador, int fila[]) //Remover elemento da Fila
{
	if (contador == 0)
	{
		std::cout << "Fila vazia" << std::endl;
		return;
	}

	contador = contador - 1;

	if (inicioF == TAM - 1)
	{
		inicioF = 0;
	}
	else
	{
		inicioF = inicioF + 1;
	}
}

void imprime(int& inicioF, int& contador, int fila[])
{
	if (contador == 0)
	{
		std::cout << "Fila vazia" << std::endl;
		return;
	}

	int i, j;
	i = inicioF;

	for (j = 0; j < contador; j++)
	{
		std::cout << fila[i] << " ";
		if (i == TAM - 1)
		{
			i = 0;
		}
		else
		{
			i = i + 1;
		}
	}
	std::cout << std::endl;
}

void inicio(int& contador, int fila[], int& inicioF)
{
	if (contador == 0)
	{
		std::cout << "Fila vazia" << std::endl;
		return;
	}

	std::cout << "Inicio da fila: " << fila[inicioF] << std::endl;
}

bool vazia(int &contador)
{
	if (contador == 0)
	{
		return true;
	}
}