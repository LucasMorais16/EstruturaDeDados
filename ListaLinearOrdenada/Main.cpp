#include <iostream>

const int TAM = 10;
int lista[TAM];
int tamanho = 0;

void insereLista(int valor);
void recuperaLista(int posicao);
void removeValor(int valor); //fazer por valor, considerar a ordena��o
void buscaPrimeiroNLista(int valor);
void buscaRepetidosLista(int valor);
void imprime();

int main() {
    insereLista(500);
    insereLista(33);
   
    imprime();
    //buscaPrimeiroNLista(2);
    //buscaPrimeiroNLista(20);
    //buscaRepetidosLista(2);
    //buscaRepetidosLista(15);
    //recuperaLista(3);
    removeValor(4);
    imprime();
    removeValor(0);
    imprime();

    return 0;
}

void insereLista(int valor)
{    
    int i;
    if (tamanho==TAM)
    {
        std::cout << "Lista cheia \n";
        return;
    }
    for (i=tamanho; i>0 && valor<lista[i-1] ; i--) //ordena��o
    {  
        lista[i]=lista[i-1];
    }
    lista[i] = valor;
    tamanho++;
    std::cout << "Elemento inserido\n";
}
 

void removeValor(int valor) 
{
    int i;
    if (tamanho == 0) 
    {
        std::cout << "Lista Vazia";
        return;
    }
 
    for (i = 0; i < tamanho - 1; i++) 
    {
        if (valor == lista[i])
        {
            for (int j = i; j < tamanho - 1; j++)
            {
                lista[j] = lista[j + 1];
            }         
        }       
    }
    tamanho--;
}

void recuperaLista(int posicao) {
    // imprime o valor inserido em uma determinada posi��o
    if (tamanho == 0) 
    {
        std::cout << "Lista Vazia";
        return;
    }
    if (posicao < 0 || posicao >= tamanho) {
        std::cout << "Posicao invalida" << std::endl;
        return;
    }
    std::cout << "O valor na posicao " << posicao << " � " << lista[posicao] << std::endl;
}

void buscaPrimeiroNLista(int valor) {
    // informa em que posi��o da lista est� determinado valor.
    int i;
    if (tamanho == 0) {
        std::cout << "Lista vazia" << std::endl;
        return;
    }
    for (i = 0; i < tamanho; i++) {
        if (valor == lista[i]) {
            std::cout << "O valor esta na posicao: " << i << std::endl;
            return;
        }
    }
    std::cout << "O valor nao esta na lista" << std::endl;
}

void buscaRepetidosLista(int valor) {
    // informa em que posi��o da lista est� determinado valor.
    int i;
    int encontrado = 0;
    if (tamanho == 0) {
        std::cout << "Lista vazia" << std::endl;
        return;
    }
    for (i = 0; i < tamanho; i++) {
        if (valor == lista[i]) {
            encontrado++;
            std::cout << "O valor esta na posicao: " << i << std::endl;
        }
    }

    if (encontrado == 0) {
        std::cout << "O valor nao esta na lista" << std::endl;
    }
    else {
        std::cout << "O valor foi encontrado " << encontrado << " vezes" << std::endl;
    }
}

void imprime() {
    int i;
    if (tamanho == 0) {
        std::cout << "Lista Vazia";
        return;
    }
    std::cout << "A sua lista eh: ";
    for (i = 0; i < tamanho; i++) {
        std::cout << lista[i] << " ";
    }
    std::cout << "\n";
}

