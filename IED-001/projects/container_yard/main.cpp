#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "container.h"
#include "stack.h"

using namespace std;

void userKeypress() {
    cout << "\n\nPressione qualquer coisa para voltar ao menu... " << endl;
    getch();
}

int main() {
    cout << "** Patio de contêineres **" << endl << endl;

    unsigned short int container_yard_size;
    unsigned short int container_yard_position;

    cout << "Qual o tamanho da quadra dos contêineres?\n";
    cout << "-> Sua resposta: ";
    cin >> container_yard_size;

    Stack<Container> *pointer[container_yard_size];
    for (unsigned i = 0; i < container_yard_size; i++) {
        pointer[i] = new Stack<Container>(5);
    }

    unsigned short int option = 0;

    Container container;

    do {
        system("cls");
        cout << "** Patio de contêineres ** \n\n";
        cout << "MENU" << endl;
        cout << "(1) Empilhar container" << endl;
        cout << "(2) Desempilhar container" << endl;
        cout << "(3) Exibir informações do pátio" << endl;
        cout << "(4) Sair" << endl << endl;
        cout << "Escolha uma opção: ";
        cin >> option;

        cout << "\n\n" << "Quadras disponíveis: " << container_yard_size << endl;
        switch(option) {
        case 1:
            do {
              cout << "Onde o container deve ser empilhado?\n";
              cout << "-> Quadra: ";
              cin >> container_yard_position;
            } while(container_yard_position < 0 || container_yard_position > container_yard_size);

            cout << "\n\n" << "Digite o código do container: ";
            cin >> container.code;
            cout << "\n" << "Digite as dimensões do container (m²): ";
            cin >> container.dimension;
            cout << "\n" << "Digite o peso do container: ";
            cin >> container.height;

            pointer[container_yard_position - 1]->push(container);
            break;

        case 2:
            do {
              cout << "Onde o container deve ser empilhado?\n";
              cout << "-> Quadra: ";
              cin >> container_yard_position;
            } while(container_yard_position < 0 || container_yard_position > container_yard_size);

            pointer[container_yard_position - 1 ]->pop();
            break;

        case 3:
            cout << "Mostrando informações das quadras:\n\n";

            for(int i = 0; i < container_yard_size; i++) {
                cout << "Qtd de contêineres na quadra " << i + 1 << ": " << pointer[i]->getLastIndex() + 1 << endl;
            }
            cout << "\n\n\n";
            for (int i = 0; i < container_yard_size; i++) {
                if( pointer[i]->isEmpty()) {
                    cout <<"Quadra " << i << " está vazia." << endl;
                } else {
                    cout <<"Quadra: " << i << endl;
                    for(unsigned j = 0; j <= pointer[i]->getLastIndex(); j++) {
                        container = pointer[j]->getValue(j);
                        cout << "Info: Container \n";
                        cout << "Código   : " << container.code << endl;
                        cout << "Dimensão : " << container.dimension << endl;
                        cout << "Peso     : " << container.height << endl;
                        cout << "\n";
                    }
                }
            }
            userKeypress();
            break;

        case 4:
        default:
            option = 4;
            break;
        }
        container_yard_position = 0;
        container.clean();
    } while(option != 4);

    return 0;
}

