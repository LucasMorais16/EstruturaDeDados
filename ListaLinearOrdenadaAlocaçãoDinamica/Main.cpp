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
    insereLista(40);

    imprime();

    //buscaLista(20);
    recuperaLista(0);

    removeValor(3);
    //imprime();

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

    cout << "Elemento inserido\n" << endl;
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
    }
    else {
        anterior->prox = temp->prox;
    }

    delete temp;

    std::cout << "\n";
    std::cout << "Valor " << valor << " removido da lista." << std::endl;
    std::cout << "\n";
}

void recuperaLista(int posicao) 
{
    if (lista == NULL)
    {
        std::cout << "Lista vazia" << std::endl;
        return;
    }

    no* temp = lista;

    for (int i = 0; temp != NULL; temp = temp->prox, i++)
    {
        if (i == posicao)
        {
            std::cout << "O valor na posicao " << posicao << " eh " << temp->dado;
            return;
        }
    }

    std::cout << "Posicao inexistente." << std::endl;

}

void buscaLista(int valor)
{
    if (lista == NULL)
    {
        std::cout << "Lista vazia" << std::endl;
        return;
    }

    no* temp;
    int posicao = 0;

    for (temp = lista; temp != NULL && valor >= temp->dado; temp = temp->prox)
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

