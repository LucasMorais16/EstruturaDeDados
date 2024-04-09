#include <iostream>
using namespace std;

const int TAM = 10;
int lista[TAM];
int tamanho = 0;

void insereLista(int valor, int posicao);
void recuperaLista(int posicao);
void removeLista(int posicao);
void buscaPrimeiroNLista(int valor);
void buscaRepetidosLista(int valor);
void imprime();

int main() {
    insereLista(0, 0);
    insereLista(1, 1);
    insereLista(2, 2);
    //insereLista(3, 3);
    //insereLista(4, 4);
    //insereLista(2, 5);

    //buscaPrimeiroNLista(2);
    //buscaPrimeiroNLista(20);

    //buscaRepetidosLista(2);
    //buscaRepetidosLista(15);
    //recuperaLista(3);
    imprime();

    removeLista(2);

    imprime();

    return 0;
}

void insereLista(int valor, int posicao) {
    int i;
    if (tamanho == TAM) 
    {
        cout << "Lista Cheia" << endl;
        return;
    }
    if (posicao < 0 || posicao > tamanho) 
    {
        cout << "Posicao invalida" << endl;
        return;
    }

    for (i = tamanho; i > posicao; i--) //Insire o elemento no meio da lista
    {
        lista[i] = lista[i - 1];
    }

    lista[posicao] = valor;
    tamanho++;
}

void removeLista(int posicao) {
    int i;
    if (tamanho == 0) 
    {
        cout << "Lista Vazia" << endl;
        return;
    }
    if (posicao < 0 || posicao >= tamanho) 
    {
        cout << "Posicao Invalida" << endl;
        return;
    }
    for (i = posicao; i < tamanho; i++) 
    {
        lista[i] = lista[i + 1];
    }
    tamanho--;
}

void recuperaLista(int posicao) {
    // imprime o valor inserido em uma determinada posição
    if (tamanho == 0) {
        cout << "Lista Vazia";
        return;
    }
    if (posicao < 0 || posicao >= tamanho) {
        cout << "Posicao invalida" << endl;
        return;
    }
    cout << "O valor na posicao " << posicao << " eh " << lista[posicao] << endl;;
}

void buscaPrimeiroNLista(int valor) {
    // informa em que posição da lista está determinado valor.
    int i;
    if (tamanho == 0) {
        cout << "Lista vazia" << endl;
        return;
    }
    for (i = 0; i < tamanho; i++) {
        if (valor == lista[i]) {
            cout << "O valor esta na posicao: " << i << endl;
            return;
        }
    }
    cout << "O valor nao esta na lista" << endl;
}

void buscaRepetidosLista(int valor) {
    // informa em que posição da lista está determinado valor.
    int i;
    int encontrado = 0;
    if (tamanho == 0) {
        cout << "Lista vazia" << endl;
        return;
    }
    for (i = 0; i < tamanho; i++) {
        if (valor == lista[i]) {
            encontrado++;
            cout << "O valor esta na posicao: " << i << endl;
        }
    }

    if (encontrado == 0) {
        cout << "O valor nao esta na lista" << endl;
    }
    else {
        cout << "O valor foi encontrado " << encontrado << " vezes" << endl;
    }
}

void imprime() {
    int i;
    if (tamanho == 0) {
        cout << "Lista Vazia";
        return;
    }
    cout << "A sua lista eh: ";
    for (i = 0; i < tamanho; i++) {
        cout << lista[i] << " ";
    }
    cout << "\n";
}

