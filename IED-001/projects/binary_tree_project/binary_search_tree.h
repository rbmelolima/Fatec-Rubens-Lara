#ifndef BINARY_SEARCH_TREE_H_INCLUDED
#define BINARY_SEARCH_TREE_H_INCLUDED

#include <iostream>
using namespace std;

template <typename Type>
struct Node {
  Type value;
  Node<Type> *left;
  Node<Type> *right;

  Node(Type newValue) {
    value = newValue;
    left = NULL;
    right = NULL;
  }
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
      tree = new Node<Type>(value);
    } else {
      if(value < tree->value) {
        push(tree->left, value);
      } else {
        push(tree->right, value);
      }
    }
  }

  Node<Type>* pop(Node<Type> *tree, Type value) {
    if(tree == NULL) {
      return tree;
    }

    if (value < tree->value) {
      tree->left = pop(tree->left, value);
    }

    else if (value > tree->value) {
      tree->right = pop(tree->right, value);
    }

    // Remoção acontece aqui
    else {
      if (tree->left == NULL) {
        return tree->right;
      }

      else if (tree->right == NULL) {
        return tree->left;
      }

      else {
        Type substitute = showLowestTreeValue(tree->right);
        tree->value = substitute;
        tree->right = pop(tree->right, substitute);
      }
    }
    return tree;
  }

  void displayTreeInPreOrder(Node<Type> *tree) {
    if(tree != NULL) {
      cout << tree->value << " ";
      displayTreeInPreOrder(tree->left);
      displayTreeInPreOrder(tree->right);
    }
  }

  void displayTreeInOrder(Node<Type> *tree) {
    if(tree != NULL) {
      displayTreeInOrder(tree->left);
      cout << tree->value << " ";
      displayTreeInOrder(tree->right);
    }
  }

  void displayTreeInPostOrder(Node<Type> *tree) {
    if(tree != NULL) {
      displayTreeInPostOrder(tree->left);
      displayTreeInPostOrder(tree->right);
      cout << tree->value << " ";
    }
  }

  Type showHigherTreeValue(Node<Type> *tree) {
    if(tree->right != NULL) {
      return showHigherTreeValue(tree->right);
    } else {
      return tree->value;
    }
  }

  Type showLowestTreeValue(Node<Type> *tree) {
    if(tree->left != NULL) {
      return showLowestTreeValue(tree->left);
    } else {
      return tree->value;
    }
  }
};


#endif // BINARY_SEARCH_TREE_H_INCLUDED
