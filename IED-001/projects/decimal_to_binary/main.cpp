#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "linked_stack.h"

using namespace std;

int main() {
    unsigned int numberDec;
    unsigned int helper;
    LinkedStack<int> numberBin;

    while (true) {
        system("cls");
        cout << "Digite um número em decimal: ";
        cin >> numberDec;

        if(numberDec == 0) {
          numberBin.push(0);
          break;
        }

        while(numberDec != 0) {
            if(numberDec % 2 == 0)
                numberBin.push(0);
            else
                numberBin.push(1);

            numberDec /= 2;
        }

        while(!numberBin.isEmpty()) {
            cout << numberBin.last();
            numberBin.pop();
        }

        cout << "\n\nPressione qualquer coisa... " << endl;
        getch();
    }
}
