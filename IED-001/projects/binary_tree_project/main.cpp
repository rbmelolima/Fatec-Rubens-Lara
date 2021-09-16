#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "binary_search_tree.h"

using namespace std;

void keypress() {
  cout << "\n\nPressione qualquer coisa para voltar ao menu... " << endl;
  getch();
}

int main() {
  unsigned int option = 0;
  int number = 0;
  BinarySearchTree<int> tree;

  do {
    system("cls");
    number = 0;

    cout << "**** Árvore binária de busca ****" << endl << endl;
    cout << "Escolha uma opção ---------------------------------->\n";
    cout << "[1] Inserir um novo número\n";
    cout << "[2] Exibir a árvore na pré-ordem\n";
    cout << "[3] Exibir a árvore na pós-ordem\n";
    cout << "[4] Exibir a árvore em ordem\n";
    cout << "[5] Exibir o maior número\n";
    cout << "[6] Exibir o menor número\n";
    cout << "[7] Excluir um elemento da árvore\n";
    cout << "[8] Sair\n\n";
    cout << "Escolha uma opção: ";
    cin >> option;

    switch(option) {
    case 1:
      cout << "\nDigite um número: ";
      cin >> number;
      tree.push(tree.root, number);
      keypress();
      break;

    case 2:
      tree.displayTreeInPreOrder(tree.root);
      keypress();
      break;

    case 3:
      tree.displayTreeInPostOrder(tree.root);
      keypress();
      break;

    case 4:
      tree.displayTreeInOrder(tree.root);
      keypress();
      break;

    case 5:
      if(tree.root == NULL) {
        cout << "Árvore vazia";
        break;
      }
      cout << "\n\nMaior valor: " << tree.showHigherTreeValue(tree.root);
      keypress();
      break;

    case 6:
      if(tree.root == NULL) {
        cout << "Árvore vazia";
        break;
      }
      cout << "\n\nMenor valor: " << tree.showLowestTreeValue(tree.root);
      keypress();
      break;

    case 7:
      if(tree.root == NULL) {
        cout << "Árvore vazia";
        break;
      }
      cout << "\n\nDigite o valor para ser excluído: ";
      cin >> number;
      tree.pop(tree.root, number);
      keypress();
      break;
    case 8:
    default:
      break;
    }


  } while(option != 9);
}
