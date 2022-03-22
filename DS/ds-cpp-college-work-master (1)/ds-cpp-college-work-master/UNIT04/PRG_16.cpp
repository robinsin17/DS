/* Name: Harsh Singh
   Roll no: 1262
   Unit:4
   Program: Priority queue
   
*/
#include<iostream>
#include<conio.h>

using namespace std;

class PQNode
{
	public:
		int data;
		int priority;
		PQNode *next;
};

class PQueue
{
	PQNode *front;
	PQNode *rear;
	
	public:
		PQueue()
		{
			front = NULL;
			rear = NULL;
		}
		void Enqueue(int x, int p);
		void Dequeue();
		void Display();
		int Empty();
};

void PQueue :: Enqueue(int x,int p)
{
	//make new node
	PQNode * t =new PQNode();
	t->data=x;
	t->priority=p;
	t->next=NULL;
	
	//first node in pqueue
	if(front == NULL)
	{
		front = t;
		return;
	}
	
	PQNode *tmp=front;
	PQNode *prev=NULL;
	while(tmp && tmp->priority<t->priority)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	if(tmp==NULL)//insert at the rear
	{
		prev->next=t;
	}
	else if(prev==NULL)//t inserted at the  front
	{
		t->next=front;
		front=t;
	 } 
	 else//t inserted in the middle
	 {
	 	prev->next=t;
	 	t->next=tmp;
	 }
 } 

void PQueue :: Dequeue()
{
	if(front==NULL)
	{
		cout<<"Underflow....";
		return;
	}
	PQNode *tmp=front;
	if(front==rear)
	{
		front=NULL;
		rear=NULL;
	}
	else
	{
		front=front->next;
	}
	cout<<"Dequeue Front element is "<<tmp->data<<" with priority : "<<tmp->priority;
	delete tmp;
}

void PQueue :: Display()
{
	if(front==NULL)
	{
		cout<<"Underflow....";
		return;
	}
	else
	{
		PQNode * tmp = front;
		while(tmp)
		{
			cout<< tmp->data<<","<<tmp->priority<<"->";
			tmp = tmp -> next;
		}
	}
}

int main()
{
	PQueue p1;
	int num,ch,p;
	
	while(1)
	{
		system("cls");
		
		cout<<"1. Enqueue "<<endl;
		cout<<"2. Dequeue "<<endl;
		cout<<"3. Display "<<endl;
		cout<<"Enter th choice : "<<endl;
		cin>>ch;
		switch(ch)
		{
				case 1:
				cout<<"Enter a number :\n";
				cin>>num;
				cout<<"Enter priority : ";
				cin>>p;
				p1.Enqueue(num,p);
				getch();
				break;
				
				case 2:
				//cout<<"option 2";
				p1.Dequeue();
				getch();
				break;
				
				case 3:
				//cout<<"option 3";
				p1.Display();
				getch();
				break;
				
				case 4:
				exit(1);
			
				default:
				cout<<"Invalid ";
		}
	}
}
