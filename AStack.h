#pragma once

class Stack
{
public:
	Stack() : arr(new char[10]) {}
	~Stack();
	void Push(char);
	void Pop();
	void Top();
	bool IsEmpty();
	void print();
	int length();
private:
	char* arr;
	int count = -1;
};
void Stack::Push(char str)
{
	arr[++count] = str;
}
void Stack::Pop()
{
	arr[count--];
}
int Stack::length()
{
	return count;
}
