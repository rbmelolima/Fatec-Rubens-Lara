#ifndef BINARY_SEARCH_TREE_H_INCLUDED
#define BINARY_SEARCH_TREE_H_INCLUDED

#include <iostream>
using namespace std;

template <typename Type>
struct Node {
  Type value;
  Node<Type> *left;
  Node<Type> *right;
};

template <typename Type>
struct BinarySearchTree {
  Node<Type> *root;

  BinarySearchTree() {
    root = NULL;
  }

  bool treeEmpty() {
    return root == NULL;
  }

  void push(Node<Type>* &tree, Type value) {
    if(tree == NULL) {
      tree = new Node<Type>;
      tree->value = value;
      tree->left = NULL;
      tree->right = NULL;
    } else {
        if(value < tree->value) {
          push(tree->left, value);
        } else {
          push(tree->right, value);
        }
    }
  }

  ///pré-ordem
  void RED(Node<Type> *tree) {
    if(tree != NULL) {
      cout << tree->value << " ";
      RED(tree->left);
      RED(tree->right);
    }
  }

  ///em ordem
  void ERD(Node<Type> *tree) {
    if(tree != NULL) {
      ERD(tree->left);
      cout << tree->value << " ";
      ERD(tree->right);
    }
  }

  ///pós-ordem
  void EDR(Node<Type> *tree) {
    if(tree != NULL) {
      EDR(tree->left);
      EDR(tree->right);
      cout << tree->value << " ";
    }
  }

};


#endif // BINARY_SEARCH_TREE_H_INCLUDED
