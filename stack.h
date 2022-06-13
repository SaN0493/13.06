#pragma once

template <typename T>
class Stack
{
private:
	T* stack = nullptr;
	int sizeSteck=0;
	int countElements = 0;
public:
	Stack(int size) {
		this->sizeSteck = size;
		stack = new T[size];
	}
	~Stack() {
		delete[]stack;
	}
	Stack& operator = (const Stack& st2) {
		delete[]stack;

		this->sizeSteck = st2.sizeSteck;
		this->countElements = st2.countElements;
		stack = new Stack[sizeStack];
		for (int i = 0; i < sizeStack; i++) {
			stack[i] = st2.sizeSteck[i];
		}
		return *this;
	}
	T& top() {
		return stack[countElements - 1];
	}
	bool empty() {
		return !countElements;
	}
	int size() {
		return countElements;
	}
	void push(const T& value) {
		stack[countElements++] = value;
	}
	void push(T&& value) {
		stack[countElements++] = value;
	}
	void emplace(const T& value) {
		stack[countElements++] = value;
	}
	void pop() {
		if(countElements>0)countElements--;
	}
	void swap(Stack& t) {
		swap(this, &st2);
	}
};

