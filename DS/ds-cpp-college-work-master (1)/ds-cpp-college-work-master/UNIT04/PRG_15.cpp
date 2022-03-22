/* Name: Harsh Singh
   Roll no: 1262
   Unit:4
   Program: Double ended queue
   
*/
#include<iostream>
#include<conio.h>

using namespace std;

/* 1.Node Template*/
class DQNode
{
	public:
		int data;
		DQNode *right;
		DQNode *left;
		
};
/* Queue Template*/
class DQueue
{
	DQNode *front;
	DQNode *rear;
	
	public:
		DQueue()
		{
			front=NULL;
			rear=NULL;
		}
		void EnqueueFront(int x);
		void EnqueueRear(int x);
		void DequeueFront();
		void DequeueRear();
		void PeekFront();
		void PeekRear();
		void Display();
		int Empty();
};

/* Functions */
int DQueue :: Empty()
{
	if(front==NULL){
		return 1;
	}
	else{
		return 0;
	}
}

void DQueue :: EnqueueFront(int x)
{
	//Make a new node
	DQNode *t=new DQNode();
	t->data=x;
	t->right=NULL;
	t->left=NULL;
	
	//First node in the DQNode
	if(front==NULL)
	{
		front=t;
		rear=t;
	}
	else
	{
		t->right=front;
		front->left=t;
		front=t;
	}
}

void DQueue :: EnqueueRear(int x)
{
	//Make a new node
	DQNode *t=new DQNode();
	t->data=x;
	t->right=NULL;
	t->left=NULL;
	
	//last node in the DeQueue 
	if(rear==NULL)
	{
		front=t;
		rear=t;
	}
	else
	{
		rear->right=t;
		t->left=rear;
		rear=t;
	}
	
}
void DQueue :: DequeueFront()
{
	if(Empty())
	{
		cout<<"Underflow!!";
		return;
	}
	DQNode *tmp=front;
	if(front==rear)
	{
		front=NULL;
		rear=NULL;
	}
	else
	{
		front=front->right;
		front->left=NULL;
	}
	cout<<"Front element is dequeued!"<<endl;
	delete tmp;
	
	
}
void DQueue :: DequeueRear()
{
	if(Empty())
	{
		cout<<"Underflow!!";
		return;
	}
	DQNode *tmp=rear;
	if(front==rear)
	{
		front=NULL;
		rear=NULL;
	}
	else
	{
		rear=rear->left;
		rear->right=NULL;
	}
	cout<<"Rear element is dequeued!"<<endl;
	delete tmp;
}
void DQueue :: PeekFront()
{
	if(Empty())
	{
		cout << "Empty Queue.\n";
		return;
	}
	
	cout << "Element in the Front is : " << front->data;
	
} //end of peekfront

void DQueue :: PeekRear()
{
	if(Empty())
	{
		cout << "Empty Queue\n";
		return;
	}
		
	cout << "Element at rear is : " << rear->data;
}//end of peekrear
void DQueue :: Display(){
	if(Empty()){
		cout<<"Underflow";
		return;
	}
	DQNode *tmp=front;
	while(tmp!=NULL){
		cout<<tmp->data<<"->";
		tmp=tmp->right;
	}
	cout<<"Null";
}
/* Menu */
int main()
{
	DQueue d;
	int num,ch;
	
	while(1)
	{
		system("cls");
		
		cout<<"------------Double Ended Queue------------"<<endl;
		
		cout<<"1. Enqueue in front\n";
		cout<<"2. Enqueue in rear\n";
		cout<<"3. Dequeue in front\n";
		cout<<"4. Dequeue in rear\n";
		cout<<"5. Peek in front\n";
		cout<<"6. Peek in rear\n";
		cout<<"7.Display\n";
		cout<<"8.Exit\n";
		
		cout<<"Enter your choice: \n";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"Enter element to enqueue in front: ";
				cin>>num;
				d.EnqueueFront(num);
				getch();
				break;
				
			case 2:
				cout<<"Enter element to enqueue in rear: ";
				cin>>num;
				d.EnqueueRear(num);
				getch();
				break;
				
			case 3:
				d.DequeueFront();
				getch();
				break;
				
			case 4:
				d.DequeueRear();
				getch();
				break;
				
			case 5:
				d.PeekFront();
				getch();
				break;
				
			case 6:
				d.PeekRear();
				getch();
				break;
				
			case 7:
				d.Display();
				getch();
				break;
				
			case 8:
				exit(1);
				
			
		}//end of switch
		
	}//end of while
}//end of main
