#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

template <typename Type>

class Stack {
	int top;
	Type *pointer;
	unsigned size_stack;

public:
	Stack (unsigned new_size) {
		size_stack = new_size;
		top = -1;
		pointer = new Type[size_stack];
	}

	~Stack() {
		delete []pointer;
	}	

	void push(Type value) {
		if(isFull() == false) {
			pointer[++top] = value;
		}
	}

	void pop() {
		if(isEmpty() == false) {
			top--;
		}
	}

	bool isFull() {
		return top == size_stack - 1 ?  true : false;
	}

	bool isEmpty() {
		return top == -1 ?  true : false;
	}

	int getLastIndex() {
		return top;
	}

	Type getValue(int index) {
		return pointer[index];
	}

	Type last() {
		return pointer[top];
	}
};


#endif // STACK_H_INCLUDED
