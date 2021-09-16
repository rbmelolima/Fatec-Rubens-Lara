#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "diamond.h"
#include "linked_queue.h"

using namespace std;

void userKeypress() {
  cout << "\n\nPressione qualquer coisa para voltar ao menu... " << endl;
  getch();
}

int main() {
  LinkedQueue<Diamond> diamonds;
  unsigned short int option;

  while(true) {
    system("cls");
    cout << "** Fábrica de losangos ** \n\n";
    cout << "MENU" << endl;
    cout << "(1) Inserir losango" << endl;
    cout << "(2) Remover losango" << endl;
    cout << "(3) Exibir informações" << endl;
    cout << "Escolha uma opção: ";
    cin >> option;

    switch(option) {
    case 1: {
      cout << "\n\n";

      float d, D;
      cout << "Digite a diagonal maior: ";
      cin >> D;
      cout << "\nDigite a diagonal menor: ";
      cin >> d;
      Diamond temp = Diamond();
      temp.init(D, d);

      diamonds.push(temp);
      userKeypress();
    }
    break;

    case 2:
      diamonds.pop();
      cout << "\n\nRemovido";
      userKeypress();
      break;

    case 3: {
      if(diamonds.isEmpty()) {
        cout << "\nNão há nada a exibir!";
        userKeypress();
        break;
      }

      cout << "\nLosangos:\n\n";
      Node<Diamond> *aux = diamonds.getFirst();

      int i = 1;

      while (aux != NULL){
        cout << "Losango ";
        cout << i << endl;
        cout << "Lado: " << aux->information.side() << endl;
        cout << "Área: " << aux->information.area() << endl;
        cout << "Perímetro: " << aux->information.perimeter() << endl;
        aux = aux->next;
        i++;
        cout << "\n\n";
      }

      userKeypress();
    }
    break;

    default:
      userKeypress();
      break;
    }
  }
}
