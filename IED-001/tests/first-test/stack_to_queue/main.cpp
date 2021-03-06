#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "stack.h"
#include "queue.h"

/*
5.	Considerando uma pilha e uma fila, de números inteiros, construa uma aplicação que permita aos usuários as seguintes opções:
a)	Inserção de dados na pilha.
b)	Exibir a pilha.
c)	Desempilhar todos os elementos da pilha; sendo que a cada remoção, caso o elemento desempilhado seja múltiplo de 3, insere-o na fila.
d)	Exiba a fila


  Este é o enunciado da questão. Como não foi discutido o tamanho da fila e da pilha,
  deixarei de um tamanho limitado e fixo de 10 posições.

  - Se no enunciado dissesse abertamente que o usuário fosse inserir quantos quisessem, eu usaria uma pilha e lista LIGADAS.
  - Se no enunciado dissesse abertamente que o usuário podia escolher o tamanho, eu o faria isso.
*/

using namespace std;

void userKeypress() {
  cout << "\n\nPressione qualquer coisa para voltar ao menu... " << endl;
  getch();
}

int main() {
  Stack<int> my_stack(10);
  Queue<int> my_queue(10);
  unsigned int  option;

  while(true) {
    system("cls");
    cout << "*** A pilha e a fila tem o tamanho 10 ***\n\n" << endl;
    cout << "MENU" << endl;
    cout << "(1) Inserir na pilha" << endl;
    cout << "(2) Exibir pilha" << endl;
    cout << "(3) Desempilhar toda a pilha" << endl;
    cout << "(4) Exibir fila" << endl;
    cout << "Escolha uma opção: ";
    cin >> option;
    cout << "\n\n";

    switch(option) {
    case 1:
      int value;
      cout << "Digite o valor: ";
      cin >> value;

      if(!my_stack.isFull()) {
        my_stack.push(value);
      } else {
        cout << "A pilha está cheia";
      }

      userKeypress();
      break;

    case 2:
      for(int i = 0; i <= my_stack.getLastIndex(); i++) {
        cout << my_stack.getValue(i) << " | ";
      }
      userKeypress();
      break;

    case 3:
      for(int i = 0; i <= my_stack.getLastIndex(); i++) {
        int helper = my_stack.getValue(i);
        my_stack.pop();
        if(helper % 3 == 0) {
          if(!my_queue.isFull()) {
            my_queue.push(helper);
          } else {
            cout << "Não foi possível botar o " << helper << " na fila\n\n";
          }
        }
      }
      userKeypress();
      break;

    case 4:
      if(my_queue.isEmpty()) {
        cout << "A fila está vazia por enquanto \n\n";
      }
      for (int i = my_queue.firstIndex(); i <= my_queue.lastIndex(); i++) {
        cout << my_queue.getValue(i) << " | ";
      }
      userKeypress();
      break;
    }
  }
}
