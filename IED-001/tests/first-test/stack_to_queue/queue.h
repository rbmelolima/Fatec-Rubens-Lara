#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

template <typename Type>

class Queue {
private:
  Type* pointer;
  int end_index;
  int start_index;
  int quantity;
  unsigned size;

public:
  Queue(unsigned queue_size) {
    size = queue_size;
    end_index = -1;
    start_index = 0;
    quantity = 0;
    pointer = new Type[queue_size];
  }

  ~Queue() {
    delete []pointer;
  }

  void push(Type value) {
    end_index++;
    quantity++;

    if (end_index == size) {
      end_index = 0;
    }

    pointer[end_index] = value;
  }

  void pop() {
    start_index++;
    quantity--;

    if (start_index == size) {
      start_index = 0;
    }
  }

  int lastIndex() {
    return end_index;
  }

  int firstIndex() {
    return start_index;
  }

  int getQuantity() {
    return quantity;
  }

  bool isEmpty() {
    return quantity == 0 ? true : false;
  }

  bool isFull() {
    return quantity == size ? true : false;
  }

  Type getValue(unsigned index) {
    if (index <= end_index && index >= start_index) {
      return pointer[index];
    }
  }

  Type getFirstValue() {
    return pointer[start_index];
  }

  Type getLastValue() {
    return pointer[end_index];
  }
};


#endif // QUEUE_H_INCLUDED
