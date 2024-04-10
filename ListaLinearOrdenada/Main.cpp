#include <iostream>

const int TAM = 10;
int lista[TAM];
int tamanho = 0;

void insereLista(int valor);
void recuperaLista(int posicao);
void removeValor(int valor); //fazer por valor, considerar a ordenação
void buscaLista(int valor);
void imprime();

int main() {
    insereLista(500);
    insereLista(33);
    insereLista(80);
    insereLista(55);
    insereLista(90);

    imprime();

    //recuperaLista(3);
    removeValor(80);
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
    for (i=tamanho; i>0 && valor<lista[i-1] ; i--) //ordenação
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
 
    for (i = 0; i < tamanho && valor >= lista[i]; i++) 
    {
        if (valor == lista[i])
        {
            for (int j = i; j < tamanho - 1; j++)
            {
                lista[j] = lista[j + 1];
            }
            std::cout << "Elemento removido" << std::endl;
            tamanho--;
            return;
        }
    }
}

void recuperaLista(int posicao) {
    // imprime o valor inserido em uma determinada posição
    if (tamanho == 0) 
    {
        std::cout << "Lista Vazia";
        return;
    }
    if (posicao < 0 || posicao >= tamanho) {
        std::cout << "Posicao invalida" << std::endl;
        return;
    }
    std::cout << "O valor na posicao " << posicao << " é " << lista[posicao] << std::endl;
}

void buscaLista(int valor) {
    // informa em que posição da lista está determinado valor.
    int i;
    if (tamanho == 0) {
        std::cout << "Lista vazia" << std::endl;
        return;
    }
    for (i = 0; i < tamanho && valor >= lista[i]; i++) {
        if (valor == lista[i]) {
            std::cout << "O valor esta na posicao: " << i << std::endl;
            return;
        }
    }
    std::cout << "O valor nao esta na lista" << std::endl;
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

