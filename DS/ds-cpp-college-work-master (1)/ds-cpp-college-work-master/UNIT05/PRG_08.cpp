/*
Name: Harsh Singh
Roll no:1262
unit:5
Program:Singly Linked List
*/
#include<iostream>
#include<conio.h>
using namespace std;
/*Node Template*/
class Node{
	public:
		int data;
		Node *next;		
};
/*List Template*/
class List{
	Node *head;
	public:
		List()
		{
			head=NULL;
		}
		void Insert(int x);
		void Delete(int x);
		void Search(int x);
		void Display();
		void Length();
};
/*Functions**/
/****************************************************************/
void List :: Insert(int x){
	 //create a new node
	 Node *t=new Node();
	 t->data=x;
	 t->next=NULL;
	 
	 //First node in the list
	 if (head==NULL){
	 	head=t;
	 	return;
	 }
	 //traverse to the end of the list
	 Node *tmp=head;
	 Node *prev=NULL;
	 while(tmp != NULL){
	 	prev=tmp;
	 	tmp=tmp->next;
	 }
	 //Link new node t to the last node in the list
	 prev->next=t;
}//End of insert
/****************************************************************/
void List::Display(){
	Node *tmp=head;
	while(tmp!=NULL){
		cout<<tmp->data<<"->";
		tmp=tmp->next;
	}
	cout<<"NULL";
}//end of Display

void List::Length(){
	Node *tmp=head;
	int cnt=0;
	while(tmp!=NULL){
		cnt++;
		tmp=tmp->next;
	}
	cout<<"Length of the list:"<<cnt;
}//end of Length

void List::Search(int x){
	Node *tmp=head;
	int flag=0;
	while(tmp->data==x){
		if(tmp->data==x){
			flag=1;
			break;
		}
		tmp=tmp->next;
	}
	if(flag==1){
		cout<<x<<" is found";
	}
	else{
		cout<<x<<" is not found";
	}
}//end of search

void List::Delete(int x){
	//Step 1: Empty List Return Control
	if (head==NULL){
		cout<<"List is  Empty";
		return;
	}
	//Step 2: Find x in the list
	Node *tmp=head;
	Node *prev=NULL;
	int flag=0;
	while(tmp!=NULL){
		if(tmp->data==x){
			flag=1;
			break;
		}
		prev=tmp;
		tmp=tmp->next;
	}
	//Step 3:x is not found-Return Control
	if(flag==0){
		cout<<x<<" is not found";
		return;
	}
	//Step 4:x is found
	//Step 4a:Single Node deletion
	if(tmp==head && tmp->next==NULL){
		head=NULL;
	}
	else if(tmp==head)//Step4b: Head Node Deletion
	{
		head=head->next;
	}
	else if(tmp->next==NULL)//Step 4c: Tail Node Deletion
	{
		prev->next=NULL;
	}
	else{//Step4d:Any other node in the middle
		prev->next=tmp->next;
	}
	//Step 5
	delete tmp;
}//end of Delete



/*main menu*/
int main(){
	List s;
	int ch,num;
	
	while(1){
		system("cls");
		cout<<"***** Singly Linked List *****"<<endl<<endl;
		cout<<"1. Insert in the node"<<endl;
		cout<<"2. Delete a node "<<endl;
		cout<<"3. Search for a node "<<endl;
		cout<<"4. Display the List"<<endl;
		cout<<"5. Length of list"<<endl;
	
		cout<<"6. Exit\n\n"<<endl<<endl;
		
		cout<<"Enter your choice : ";
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"Enter a number :";
				cin>>num;
				s.Insert(num);
				getch();
				break;
			case 2:
				cout<<"option 2";
				getch();
				break;
			
			case 3:
				cout<<"Enter a number:";
				cin>>num;
				s.Search(num);
				getch();
				break;
			case 4:
				s.Display();
				
				getch();
				break;
			case 5:
				s.Length();
				getch();
				break;
			case 6:
				exit(1);
			default:
				cout<<"Incorrect choice";
				getch();
				break;
		}//end of switch
	}//end of while
}//end of main
