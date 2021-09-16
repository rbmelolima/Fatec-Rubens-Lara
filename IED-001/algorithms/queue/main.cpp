#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
    cout << "Fila (FIFO)" << "\n\n\n";
    unsigned size = 10;

    Queue<int> queue(size);

    cout << "** Inicializando a fila **" << endl << endl;
    for (int i = 0; i < size; i++) {
			queue.push(i);
    }

    cout << "** Mostrando valores da fila **" << endl << endl;
    for (int i = 0; i < size; i++) {
			cout << queue.getValue(i) << " | ";
    }

		cout << "\n\n** Informações da fila **" << endl << endl;
		cout << "Primeiro valor da fila: " << queue.getFirstValue() << endl;
		cout << "Último valor da fila: " << queue.getLastValue() << endl;
		cout << "Quantidade de elementos da fila: " << queue.getQuantity() << endl;
		cout << "Está cheia?: " << queue.isFull() << endl;
		cout << "Está vazia?: " << queue.isEmpty() << endl;
}
