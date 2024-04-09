#include <iostream>

struct no {
    int dado;
    no* prox;
};

no* lista = NULL;

void insereLista(int valor);
void recuperaLista(int posicao);
void removeValor(int valor); //fazer por valor, considerar a ordenação
void buscaLista(int valor);
void imprime();

int main() 
{
    insereLista(20);
    insereLista(3);
    insereLista(15);

    imprime();

    buscaLista(20);

    removeValor(3);
    imprime();

    return 0;
}

void insereLista(int valor)
{
    no* temp = lista;
    no* anterior = NULL;
    no* novo = new(struct no);

    novo->dado = valor;

    while (temp != NULL && valor > temp->dado)
    {
        anterior = temp;
        temp = temp->prox;
    }

    if (temp == lista)
    {
        lista = novo;
        
    }
    else
    {
        anterior->prox = novo;
    }
    novo->prox = temp;
}


void removeValor(int valor) 
{
    no* temp = lista;
    no* anterior = NULL;

    // Busca pelo valor na lista
    while (temp != NULL && temp->dado < valor) { //considerar a ordenação (maior ou menor)
        anterior = temp;
        temp = temp->prox;
    }

    // Se o valor não estiver presente, não há o que remover
    if (temp == NULL || temp->dado != valor) {
        std::cout << "Valor " << valor << " nao encontrado na lista." << std::endl;
        return;
    }

    // Se o valor for o primeiro elemento da lista
    if (anterior == NULL) {
        lista = temp->prox;
        delete temp;
    }
    else {
        anterior->prox = temp->prox;
        delete temp;
    }

    std::cout << "\n";
    std::cout << "Valor " << valor << " removido da lista." << std::endl;
    std::cout << "\n";
}

void recuperaLista(int posicao) 
{
   
}

void buscaLista(int valor)
{
    no* temp;
    int posicao = 0;

    if (lista == NULL)
    {
        std::cout << "Lista vazia" << std::endl;
        return;
    }

    for (temp = lista; temp != NULL; temp = temp->prox)
    {
        if (temp->dado == valor)
        {
            std::cout << "Numero " << valor << " encontrado na posicao " << posicao << std::endl;
            return;
        }
        posicao++;
    }

    std::cout << "Numero " << valor << " nao encontrado" << std::endl;
}

void imprime() 
{
    if (lista == NULL)
    {
        std::cout << "Erro: a lista esta vazia." << std::endl;
        return;
    }
    no* temp = lista;

    std::cout << "Elementos da Lista Ordenada:" << std::endl;

    while (temp != NULL) {
        std::cout << temp->dado << " ";
        temp = temp->prox;
    }
    std::cout << "\n";

    delete temp;
}

