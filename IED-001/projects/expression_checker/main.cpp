#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "linked_stack.h"

using namespace std;

void userKeypress() {
    cout << "\n\nPressione qualquer coisa para voltar ao menu... " << endl;
    getch();
}

int main() {
    LinkedStack<char> expression_stack;
    string expression;
    bool isValid = true;
    char symbol;

    do {
        system("cls");
        cout << "Análise de expressões \n" << endl;
        cout << "Digite a expressão: ";
        cin >> expression;

        unsigned int expression_size = expression.size();

        for(int i = 0; i < expression_size; i++) {
            symbol = expression.at(i);

            if (symbol == '{' || symbol =='[' || symbol =='(') {
                expression_stack.push(symbol);
                continue;
            }

            if (symbol == '}' || symbol ==']' || symbol ==')') {
                if(expression_stack.isEmpty()) {
                    isValid = false;
                    break;
                }

                if(symbol == '}' && expression_stack.last() == '{') {
                    expression_stack.pop();
                    continue;
                }

                if(symbol == ')' && expression_stack.last() == '(') {
                    expression_stack.pop();
                    continue;
                }

                if(symbol == ']' && expression_stack.last() == '[') {
                    expression_stack.pop();
                    continue;
                }
            }
        }

        if(expression_stack.isEmpty() && isValid) {
          cout << "A expressão: " << expression << " está correta.";
        } else {
          cout << "A expressão: " << expression << " está incorreta.";
        }

        isValid = true;
        expression = "";

        while(!expression_stack.isEmpty()) {
          expression_stack.pop();
        }

        userKeypress();

    } while(true);

}
