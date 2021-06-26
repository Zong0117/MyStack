#include <iostream>
#include "Stack.h"
#include "AStack.h"
using namespace std;
int main()
{
	stack s;
	s.Push(1);
	s.Push(2);
	s.Push(3);
	s.Push(4);
	s.print();
	s.Pop();
	s.print();
	cout << s.IsEmpty() << endl;
	cout << s.Top(); 
	
}