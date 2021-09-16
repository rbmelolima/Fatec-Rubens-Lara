#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "double_row.h"

using namespace std;

void userKeypress() {
    cout << "\n\nPressione qualquer coisa para voltar ao menu... " << endl;
    getch();
}

void displayNameProject() {
    cout << "** Implementação de dupla fila **" << endl << endl;
}

int main() {
    displayNameProject();
    unsigned short int row_size;
    unsigned short int option;
    int value;

    cout << "Qual o tamanho da dupla fila de inteiros?\n";
    cout << "-> Sua resposta: ";
    cin >> row_size;

    DoubleRow<int> double_row(row_size);

    do {
        system("cls");
        displayNameProject();
        cout << "MENU" << endl;
        cout << "(1) Inserir no fim" << endl;
        cout << "(2) Inserir no início" << endl;
        cout << "(3) Remover do fim" << endl;
        cout << "(4) Remover do início" << endl;
        cout << "(5) Mostrar primeiro item" << endl;
        cout << "(6) Mostrar último item" << endl;
        cout << "(7) Mostrar todos os itens" << endl;
        cout << "(8) Sair da aplicação" << endl << endl;
        cout << "Escolha uma opção: ";
        cin >> option;

        switch(option) {
        case 1:
            cout << "Digite o valor: ";
            cin >> value ;
            double_row.push(value);
            userKeypress();
            break;

        case 2:
            cout << "Digite o valor: ";
            cin >> value ;
            double_row.unshift(value);
            userKeypress();
            break;

        case 3:
            double_row.pop();
            cout << "Removido" << endl;
            userKeypress();
            break;

        case 4:
            double_row.shift();
            cout << "Removido" << endl;
            userKeypress();
            break;

        case 5:
            cout << "Primeiro item: ";
            cout << double_row.getFirstValue() << endl;
            userKeypress();
            break;

        case 6:
            cout << "Último item: ";
            cout << double_row.getLastValue() << endl;
            userKeypress();
            break;

        case 7:
            int start_index;
            int end_index;

            start_index = double_row.firstIndex();
            end_index = double_row.lastIndex();

            cout << "\t\n Índice inicial: " << start_index << endl;
            cout << "\t\n Índice final: " << end_index << endl;
            cout << "\t\n Quantidade de itens: " << double_row.getQuantity() << endl;

            //Melhorar esse loop, pois o mesmo ainda não está funcionando corretamente.
            for(int i = start_index; i <= end_index; i++) {
              cout << i << ": " << double_row.getValue(i) << " | " ;
            }

            userKeypress();
            break;
        case 8:
        default:
            option = 8;
            break;
        }
    } while(option != 8);

    return 0;
}

