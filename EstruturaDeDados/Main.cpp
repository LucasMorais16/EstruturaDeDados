#include <iostream>

const int TAM = 6;
int vetor[TAM];
double average;

int main()
{
	std::cout << "Digite os valores" << std::endl;

	for (int i = 0; i < TAM; i++)
	{
		std::cin >> vetor[i];
	}

	for (int i = 0; i < TAM; i++)
	{
		std::cout << vetor[i] << " ";
		average = average + vetor[i];
	}
	std::cout << std::endl;

	for (int i = TAM - 1; i >= 0; i--)
	{
		std::cout << vetor[i] << " ";
	}
	std::cout << std::endl;

	int max = vetor[0];
	int min = vetor[TAM-1];
	
	for (int i = 1; i < TAM; i++)
	{
		if (vetor[i] > max)
		{
			max = vetor[i];
		}
	}
	std::cout << "Maior valor: " << max << std::endl;

	for (int i = 0; i < TAM - 1; i++)
	{
		if (vetor[i] < min)
		{
			min = vetor[i];
		}
	}
	std::cout << "Menor valor: " << min << std::endl;
	std::cout << "Soma: " << average << std::endl;
	std::cout << "Media: " << average / TAM << std::endl;

}
