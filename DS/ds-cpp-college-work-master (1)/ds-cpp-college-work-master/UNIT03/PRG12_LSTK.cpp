/*Name:Harsh Singh
Roll no:1262
unit:3
Program:List-based stack
*/
#include<iostream>
#include<conio.h>
using namespace std;
/*1.Node Template*/
class SNode{
	public:int data;
	SNode *next;
};
/*2. Stack Template*/
class LStack{
	SNode *tos;
	public:
		LStack(){
			tos=NULL;
		}
		void Push(int x);
		void Pop();
		void Peek();
		void Display();
		int Empty();
};
/*3.FUNCTIONS*/
int LStack :: Empty()
{
	if(tos == NULL)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
void LStack :: Push(int x)
{
	//create node
	
	SNode *t = new SNode();
	
	t->data = x;
	t->next = NULL;
	
	//check if it is first node in stack
	if(tos == NULL)
	{
		tos = t;
	}
	else
	{
		t->next = tos;
		tos = t;
	}
	cout << "Entered number is " << x;
}//end of push

void LStack :: Pop()
{
	if(Empty())
	{
		cout << "Stack underflow";
		return;
	}
	SNode *tmp = tos;
	
	tos = tos->next;
	
	cout << "Popped Element is:  " << tmp -> data;
	delete tmp;
}//end of pop

void LStack :: Peek()
{
	if(Empty())
	{
		cout << "Stack Underflow";
		return;
	}
	cout << "Element at TOS is : " << tos->data;
}//end of Peek

void LStack :: Display()
{
	if(Empty())
	{
		cout << "Stack is empty";
		return;
	}
	cout << "Stack : \n";
	SNode *tmp = tos;
	while(tmp)
	{
		cout << tmp -> data << endl;
		tmp=tmp->next;
	}
}
/* 4. Menu*/

int main()
{
	LStack l;
	int num,ch;
	
	while(1)
	{
		system("cls");
		cout << "******************** List Based Stack ********************";
		cout << endl;
		cout << "1. Push";
		cout << endl;
		cout << "2. Pop";
		cout << endl;
		cout << "3. Peek";
		cout << endl;
		cout << "4. Display";
		cout << endl;
		cout << "5. Exit";
		cout << endl;
		cout << "Enter your choice : ";
		cin >> ch;
		
		switch(ch)
		{
			case 1:
				cout << "Enter a Number : ";
				cin >> num;
				l.Push(num);
				
				getch();
				break;
				
			case 2:
				//l.Pop();
	
				getch();
				break;
				
			case 3:
				//l.Peek();
				
				getch();
				break;
				
			case 4:
				//l.Display();
				
				getch();
				break;
				
			case 5:
				exit(1);
				
			default:
				cout << "Invalid Choice";
				getch();
				break;	
		}
	}
}
