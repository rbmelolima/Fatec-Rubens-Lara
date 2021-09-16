#include <iostream>
#include "linked_stack.h"

using namespace std;

int main()
{
    cout << "Pilha ligada" << endl << endl << endl;
    LinkedStack<int> linkedStack;

    cout << "Pilha vazia? " << linkedStack.isEmpty() << endl << endl;

    for(int i = 0; i < 5; i++) {
      if(linkedStack.push(i + 1)) {
        cout << "Sucesso ao alocar" << endl;
      } else {
        cout << "Erro de alocação" << endl;
      }
    }

    cout << "\n\nElemento do topo: " << linkedStack.last() << endl;

    linkedStack.pop();
    linkedStack.pop();
    linkedStack.pop();

    cout << "\n\nElemento do topo: " << linkedStack.last() << endl;

    return 0;
}
