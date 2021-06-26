#pragma once
struct Node
{
	Node() :data(0), next(nullptr) {}
	int data;
	Node* next;
};
class stack
{
public:
	stack() : top(0) {}
	void Push(int);
	void Pop();
	bool IsEmpty();
	int Top();
	void print();
private:
	Node* top;
	
};
void stack::Push(int data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->next = top;
	top = temp;
}
void stack::Pop()
{
	Node* temp = top;
	if (top == nullptr) return;
	top = top->next;
	delete temp;
}
bool stack::IsEmpty()
{
	return top == nullptr;
}
int stack::Top()
{
	return top->data;
}
void stack::print()
{
	Node* temp = top;
	while (temp)
	{
		std::cout << temp->data << " ";
		temp = temp->next;
	}
	std::cout << std::endl;
}