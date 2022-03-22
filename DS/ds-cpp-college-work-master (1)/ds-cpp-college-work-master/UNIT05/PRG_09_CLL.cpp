/*
Name: Harsh Singh
Roll no:1262
unit:5
Program:Circular Linked List
*/
#include<iostream>
#include<conio.h>
using namespace std;
/* 1. Node Template*/
class CNode{
	public:
		int data;
		CNode *next;
};
/* 2.List Template*/
class CList{
	CNode *first;
	CNode *last;
	public:
		CList()
		{
			first=NULL;
			last=NULL;
		}
		void Insert(int x);
		void Delete(int x);
		void Search(int x);
		void Display();
		void Length();
};
/* 3.Functions*/
void CList::Insert(int x){
	//create a new node
	CNode *t=new CNode();
	t->data=x;
	t->next=NULL;
	//first Node in the cll
	if(first==NULL){
		first=t;
		last=t;
		last->next=first;
		
	}
	else{
		last->next=t;
		last=t;
		last->next=first;
	}
}//end of Insert
void CList::Display(){
	//Empty List
	if(first==NULL){
		cout<<"Empty List";
		return;
	}
	CNode *tmp=first;
	
	do{
		cout<<tmp->data<<"->";
		tmp=tmp->next;
	}
	while(tmp!=first);
	cout<<"Back to first node";
	
}//end of display
void CList::Length(){
	
	//Empty List
	if(first==NULL){
		cout<<"Empty List";
		return;
	}
	CNode *tmp=first;
	int cnt=0;
	do{
		cnt ++;
		tmp=tmp->next;
	}
	while(tmp!=first);
	cout<<cnt;
}//end of length
void CList::Search(int x){
	//Empty List
	if(first==NULL){
		cout<<"Empty List";
		return;
	}
	CNode *tmp=first;
	int flag=0;
	do{
		if(tmp->data==x){
			flag=1;
			break;
		}
		tmp=tmp->next;
	}
	while(tmp!=first);
	if(flag ==1){
		cout<<x<<"is found";
	}
	else{
		cout<<x<<"is not found";
	}
}//end of search
/*4.Menu*/
int main(){
	CList c;
	int ch,num;
	while(1){
		system("cls");
		cout<<"****Circular Linked List****\n\n\n";
		cout<<"1.Insert a node\n";
		cout<<"2.Delete a node\n";
		cout<<"3.Search for a node\n";
		cout<<"4.Display the list\n";
		cout<<"5.length of the list\n";
		cout<<"6.Exit\n\n";
		cout<<"Enter your choice:";
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"Enter a number :";
				cin>>num;
				c.Insert(num);
				getch();
				break;
			case 2:
				//s.Delete(num);
				getch();
				break;
			
			case 3:
				cout<<"Enter a number:";
				cin>>num;
				c.Search(num);
				getch();
				break;
			case 4:
				c.Display();
				
				getch();
				break;
			case 5:
				c.Length();
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
