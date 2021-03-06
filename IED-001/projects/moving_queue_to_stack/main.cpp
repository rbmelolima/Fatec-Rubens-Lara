#include <iostream>
#include "time.h"
#include "stack.h"
#include "queue.h"

using namespace std;

int main() {
    Stack<int> my_stack(20);
    Queue<int> my_queue(20);
    srand(time(NULL));

    cout << "Itens da fila: \n[" ;
    for (int i = 0; i < 20; i++) {
        int random = (rand() % 40) + 35;
        my_queue.push(random);

        if(i != 19)
            cout << random << " | ";
        else
            cout << random << "]";
    }

    cout << "\n\n\n";

    cout << "Fila //// Pilha: \n[" ;
    int queue_last_index = my_queue.lastIndex();
    for(int i = queue_last_index; i >= 0; i--) {
      my_stack.push(my_queue.getValue(i));
      my_queue.pop();

      if(i != 0)
            cout << my_queue.getValue(i) << " | ";
        else
            cout << my_queue.getValue(i) << "]";
    }

    cout << "\n\nFila vazia? " << my_queue.isEmpty();
    cout << "\n\n\n";
}
