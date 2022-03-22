/*Name:Harsh Singh
Roll no:1262
unit:3
Program:Array-based stack
*/
#include<iostream>
#include<conio.h>
#define MAX 4
using namespace std;
/*2.Stack template*/
class AStack{
	int A[MAX];
	int tos;
	public:
		AStack(){
			tos=-1;
		}	
		void Push(int x);
		void Pop();
		void Peek();
		void Display();
		int Full();
		int Empty();
};
/*3.function*/
int AStack::Full(){
	if(tos==MAX-1){
		return 1;
	}
	else{
		return 0;
	}
}//end of full
int AStack::Empty(){
	if(tos==-1){
		return 1;
	}
	else{
		return 0;
	}
}//end of Empty
void AStack::Push(int x){
	if(Full()){
		cout<<"\nStack overflow!";
	}
	else{
		tos++;
		A[tos]=x;
	}
}//end of push
void AStack::Pop(){
	if(Empty())
	{
		cout << "Stack Underflow";
	}
	else
	{
		int tmp = A[tos];
		tos--;
		cout<<"Element popped is :"<<tmp;
	}	
}//end of pop
void AStack :: Peek()
{
	if(Empty())
	{
		cout << "Stack Underflow";
		return;
	}
	cout << "Element as tos is " << A[tos];
}//end of peek
void AStack :: Display()
{
	if(Empty())
	{
		cout << "Stack UnderFlow";
		return;
	}
	int i;
	
	cout << "Stack Contents: \n";
	for(i=tos ; i>=0 ; i--)
	{
		cout << A[i] << endl;
	}
}//end of display
/* 4. Menu*/
int main()
{
	AStack s;
	int num,ch;
	
	while(1)
	{
		system("cls");
		cout << "****** Array Based Stack ******\n";
		cout << "1. Push\n";
		cout << "2. Pop\n";
		cout << "3. Peek\n";
		cout << "4. Display\n";
		cout << "5. Exit\n";
		cout << "Enter your choice : ";
		cin >> ch;
		
		switch(ch)
		{
			case 1:
				cout << "\nEnter the Number : ";
				cin >> num;
				s.Push(num);				
				getch();
				break;
				
			case 2:
				s.Pop();
	
				getch();
				break;
				
			case 3:
				s.Peek();
				
				getch();
				break;
				
			case 4:
				s.Display();
				
				getch();
				break;
				
			case 5:
				exit(1);
				
			default:
				cout << "\nIncorrect Choice";
				getch();
				break;	
		}//end of switch
	}//end of while
}//end of main
