/*Name : Harsh Singh
Roll No. : 1262
unit : 6
program : Binary Search Tree */

#include<iostream>
#include<conio.h>

using namespace std;
//1. node class
class BSTNode
{
	public:
		int data;
		BSTNode *right;
		BSTNode *left;		
};

//2. Binary search tree template
class BST
{
	BSTNode *root;
	int cnt;
	public:
		BST()
		{
			root=NULL;	
			cnt = 0;
		}	
		
		void Insert(int x);
		void Display();
		void FindMax();
		void FindMin();
		void CountNodes();
		void Preorder(BSTNode *t);
		void Postorder(BSTNode *t);
		void Inorder(BSTNode *t);
};

void BST :: Insert(int x)
{
	BSTNode *t=new BSTNode();
	t->data=x;
	t->left=NULL;
	t->right=NULL;
	
	if(root==NULL)
	{
		root=t;
		return ;
	}
	BSTNode *tmp=root;
	BSTNode *prev=NULL;
	
	while(tmp!=NULL)
	{
		prev=tmp;
		if(t->data > tmp->data)
		{
			tmp=tmp->right;
		}
		else if(t->data < tmp->data)
		{
			tmp=tmp->left;
		}
		else//duplicate
		{
			cout<<"Duplicate";
			getch();
			return;
		}
		
		if(t->data > prev->data)
		{
			prev->right=t;
		}
		else
		{
			prev->left=t;
		}
		cnt++;
	}
}

void BST :: CountNodes()
{
	cout << "Number Of the node in the BST : "<<cnt;
}

void BST :: Display()
{
	cout<<"Preorder : ";
	Preorder(root);
	cout<< endl;
	cout<<"Postorder : ";
	Postorder(root);
	cout<< endl;
	cout<<"Inorder : ";
	Inorder(root);
	cout<< endl;
}

void BST :: FindMin()
{
	if(root==NULL)
	{
		cout<<"Empty tree";
		return;
	}
	BSTNode *tmp = root;
	BSTNode *prev = NULL;
	while(tmp!=NULL)
	{
		prev=tmp;
		tmp=tmp->left;
		
	}
	cout<<"Minimum Node is "<<prev->data;
}

void BST :: FindMax()
{
	
	if(root==NULL)
	{
		cout<<"Empty tree";
		return;
	}
	BSTNode *tmp = root;
	BSTNode *prev = NULL;
	while(tmp!=NULL)
	{
		prev=tmp;
		tmp=tmp->right;
		
	}
	cout<<"Maximum Node is "<<prev->data;
}

void Preorder(BSTNode *t)
{
	if(t)
	{
		cout<<t->data<<" ";
		Preorder(t->left);
		Preorder(t->right);
	}
}

void Postorder(BSTNode *t)
{
	if(t)
	{
		Preorder(t->left);
		Preorder(t->right);
		cout<<t->data<<" ";
	}
}

void Inorder(BSTNode *t)
{
	if(t)
	{
		Inorder(t->left);
		cout<<t->data<<" ";
		Inorder(t->right);
	}
}
int main()
{
	BST b1;
	int num,ch;
	
	while(1)
	{
		system("cls");
		
			cout<<"1.Insert Node in the binary search tree : \n";	
			cout<<"2.Display The BST : \n";
			cout<<"3.Find the maximum node : \n";
			cout<<"4.Find the minimum node : \n";
			cout<<"5.Count the node in the BST : \n";
			cout<<"Enter The choice : ";
			cin>>ch;
			
			switch(ch)
			{
				case 1:
					cout<<"Enter a Number : ";
					cin>>num;
					b1.Insert(num);
					getch();
					break;
					
				case 2:
					//cout<<"option 2";
					b1.Display();
					getch();
					break;
					
				case 3:
					//cout<<"option 3";
					b1.FindMax();
					getch();
					break;
					
				case 4:
					//cout<<"option 4";
					b1.FindMin();
					getch();
					break;

				case 5:
					cout<<"option 5";
					
					getch();
					break;
				
				case 6:
					exit(1);
				
				default:
					cout<<"Invalid choice";
					break;
			}	
	}
	
}
