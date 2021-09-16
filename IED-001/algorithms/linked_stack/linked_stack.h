#ifndef LINKED_STACK_H_INCLUDED
#define LINKED_STACK_H_INCLUDED

template <typename Type>
struct Node {
  Type information;
  Node<Type> *next;
};

template <typename Type>
class LinkedStack {
  Node<Type> *top;

public:
  LinkedStack() {
    top = NULL;
  }

  bool push(Type value) {
    Node<Type> *helper = new Node<Type>;

    if(helper == NULL) {
      return false;
    }

    helper->information = value;
    helper->next = top;
    top = helper;

    return true;
  }

  void pop() {
    Node<Type> *helper = top;
    top = top->next;
    delete helper;
  }

  bool isEmpty() {
    return top == NULL;
  }

  Type last() {
    return top->information;
  }

  Node<Type> getLastNode() {
    return top;
  }

};


#endif // LINKED_STACK_H_INCLUDED
