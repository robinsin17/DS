/* Name : Harsh Singh	
	Roll No : 1262
	Program : Circular Queues
	Unit : 04
*/
//circular queue
#include<iostream>
#include<conio.h>

#define MAX 4
using namespace std;

//2. Queue template
class CQueue
{
	int A[MAX];
	int front;//first element
	int rear;//last element
	int cnt;//counter element
	public:
		CQueue()
		{
			front=-1;
			rear=-1;
			cnt=0;
		}
		void Enqueue(int x);
		void Dequeue();
		void PeekFront();
		void PeekRear();
		void Dipslay();
		int Full();
		int Empty();
	
};//end of OQueue
int CQueue::Full()
{
	if(cnt==MAX)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}//end of full
int CQueue::Empty()
{
	if(cnt==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}//end of empty
void CQueue::Enqueue(int x)
{
	if(Full())
	{
		cout<<"Overflow";
		return;
	}
	if(Empty())
	{
		front++;
	}
	if(rear==MAX-1)
	{
		rear=0;
	}
	else
	{
		rear++;
	}
	A[rear]=x;
	cnt++;
}
void CQueue::PeekFront()
{
	if(Empty())
	{
		cout<<"Underflow";
		return;
	}
	cout<<"Peek Front: "<<A[front];
	
}//end of peekFront
void CQueue::PeekRear()
{
	if(Empty())
	{
		cout<<"Underflow";
		return;
	}
	cout<<"Peek Rear: "<<A[rear];
	
}
void CQueue::Dequeue()
{
	if(Empty())
	{
		cout<<"Underflow";
		return;
	}
		int tmp=A[front];
		if(front==rear)//single element
		{
			front=-1;//no elements 
			rear=-1;
		}
		else
		{
			if(front==MAX-1)//if front is at last element
			{
				front=0;//set front =0
			}
			else
			{
				front++;//sets next element as front
			}
		}
		cout<<"Dequeue: "<<tmp;
		cnt--;
	
}//end of dequeue
void CQueue::Dipslay()
{
	if(Empty())
	{
		cout<<"underflow";
	}
	int j=front;
	for(int i=1;i<=cnt;i++)
	{
		cout<<A[j]<<" ";
		if(j==MAX-1)
		{
			j=0;
		}
		else
		{
			j++;
		}//end of else
	}//end of for
}
int main()
{
	CQueue c;
	int num;
	int ch;
	while(1)
	{
		system("cls");
		cout<<"* Circular Queue *"<<endl;
		cout<<"1.Enqueue"<<endl;
		cout<<"2.Dequeue"<<endl;
		cout<<"3.Peek Front"<<endl;
		cout<<"4.Peek Rare"<<endl;
		cout<<"5.Display"<<endl;
		cout<<"6.Exit"<<endl;
		
		cout<<"Enter the choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				   cout<<"Enter the number: ";
				   cin>>num;
				   c.Enqueue(num);
				   getch();
				   break;
			case 2:
				   c.Dequeue();
				   getch();
				   break;
			case 3:
				   c.PeekFront();
				   getch();
				   break;
			case 4:
				   c.PeekRear();
				   getch();
				   break;
			case 5:
				   c.Dipslay();
				   getch();
				   break;
			case 6:
				   exit(1);
			default:
				   cout<<"Incorrect choice"<<endl;
				   getch();
				   break;
		}//end of switch
	}//end of while
}//end of main
