#ifndef DOUBLE_ROW_H_INCLUDED
#define DOUBLE_ROW_H_INCLUDED
template <typename Type>

class DoubleRow {
  private:
    Type* pointer;
    int end_index;
    int start_index;
    int quantity;
    unsigned size;

  public:
    DoubleRow(unsigned queue_size) {
        size = queue_size;
        end_index = -1;
        start_index = 0;
        quantity = 0;
        pointer = new Type[queue_size];
    }

    ~DoubleRow() {
        delete []pointer;
    }

    /// Insere no fim da fila
    void push(Type value) {
        end_index++;
        quantity++;

        if (end_index == size) {
            end_index = 0;
        }

        pointer[end_index] = value;
    }

    /// Remove do fim da fila
    void pop() {
        end_index--;
        quantity--;

        if (end_index == -1) {
            end_index = size - 1;
        }
    }

    /// Insere no começo da fila
    void unshift(Type value) {
        start_index--;
        quantity++;

        if (start_index == -1) {
            start_index = size - 1;
        }

        pointer[start_index] = value;
    }

    /// Remove do começo da fila
    void shift() {
      start_index++;

      if(start_index == size) {
        start_index = 0;
      }

      quantity--;
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
        if (index < end_index && index >= start_index) {
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

#endif // DOUBLE_ROW_H_INCLUDED
