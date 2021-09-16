#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    cout << "** Pilha em alocação sequencial **" << endl << endl << endl;

    unsigned size_stack;
    cout << "Digite o tamanho da pilha: ";
    cin >> size_stack;

		Stack<int> stack(size_stack);

		for(int i = 0; i <= size_stack - 1; i++) {
			stack.push(i + 1);
		}

		cout << endl << endl;
		cout << "Topo da pilha: " << stack.last() << endl;
		cout << "A pilha está cheia? " << stack.isFull() << endl;
		cout << "A pilha está vazia? " << stack.isEmpty() << endl << endl << endl;;
		cout << "Itens da pilha: [";

		for(int i = 0; i <= stack.getLastIndex(); i++) {
			if(i != stack.getLastIndex()) {
				cout << stack.getValue(i) << ", ";
			} else {
				cout << stack.getValue(i) << "]";
			}
		}

		for(int i = size_stack - 1; i >= 0; i--) {
			stack.pop();
		}

		cout << endl << endl;
		cout << "Depois de esvaziar a pilha..." << endl << endl;
		cout << "A pilha está cheia? " << stack.isFull() << endl;
		cout << "A pilha está vazia? " << stack.isEmpty() << endl;

    return 0;
}
