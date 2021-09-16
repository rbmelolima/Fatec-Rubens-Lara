#include <iostream>
#include "binary_search_tree.h"

using namespace std;

int main()
{
    cout << "Árvore Binária de Busca" << endl;
    BinarySearchTree<int> tree;

    tree.push(tree.root, 7);
    tree.push(tree.root, 5);
    tree.push(tree.root, 2);
    tree.push(tree.root, 9);
    tree.push(tree.root, 8);
    tree.push(tree.root, 6);
    tree.push(tree.root, 10);
    tree.push(tree.root, 15);

    cout << "\n\nPré ordem" << endl;
    tree.RED(tree.root);

    cout << "\n\nEm ordem" << endl;
    tree.ERD(tree.root);

    cout << "\n\nPós ordem" << endl;
    tree.EDR(tree.root);

    return 0;
}
