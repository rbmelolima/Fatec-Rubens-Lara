#ifndef LINKED_QUEUE_H_INCLUDED
#define LINKED_QUEUE_H_INCLUDED

template <typename Type>
struct Node {
  Type information;
  Node<Type> *next;
};

template <typename Type>
class LinkedQueue {
private:
  Node<Type> *start;
  Node<Type> *end;

public:
  LinkedQueue() {
    start = NULL;
    end = NULL;
  }

  bool push(Type x) {
    Node<Type> *helper = new Node<Type>;

    if(helper == NULL) {
      return false;
    }

    helper->information = x;
    helper->next = NULL;

    if (start == NULL) {
      start = helper;
    } else {
      end->next=helper;
    }

    end = helper;
    return true;
  }

  void pop() {
    Node<Type> *aux = start;
    start = start->next;
    if (start == NULL) {
      end = NULL;
    }
    delete aux;
  }

  Type first() {
    return start->information;
  }

  bool isEmpty() {
    return start == NULL;
  }

  Node<Type> *getFirst() {
    return start;
  }
};


#endif // LINKED_QUEUE_H_INCLUDED
