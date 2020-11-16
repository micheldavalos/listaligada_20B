#include <iostream>
#include "listaligada.h"
using namespace std;


int main() {
    ListaLigada<int> lista;

    lista.push_front(10);
    lista.push_front(0);
    lista.push_front(4);

    lista.push_back(7);

    cout << "cantidad: " << lista.size() << endl;
    lista.print();

    lista.pop_back();

    cout << "cantidad: " << lista.size() << endl;
    lista.print();
    // lista.pop_front();


    // Nodo<int> *a = new Nodo<int>(3);
    // Nodo<int> *b = new Nodo<int>(4, a);
    // Nodo<int> *c = new Nodo<int>(1);
    
    // c->sig = b;
    return 0;
}