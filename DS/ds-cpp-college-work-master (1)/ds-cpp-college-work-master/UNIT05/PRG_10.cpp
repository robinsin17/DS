/*Hashing Techniques -modulo division*/
#include<iostream>
#include<conio.h>
using namespace std;
#define SIZE 10
#define EMPTY -1
#define TRUE 1
#define FALSE -1
class Hash
{
	int h[SIZE];
	int n;
	public:
		void Intialize();
		int Insert(int);
		void Display();
		int HSearch(int k);
		void Search(int);
};
void Hash :: Intialize(){
	int i,k,res;
	for(i=0;i<SIZE;i++) 
	h[i]=EMPTY;
	cout<<"Enter the number of elements :";
	cin>>n;
	cout<<"Enter the elements :";
	for(i=0;i<n;i++){
		cin>>k;
		res=Insert(k);
		if(res==FALSE) cout<<"cannot insert!";
	}
}
int Hash::Insert(int k){
	int j=HSearch(k);
	if(h[j]==EMPTY)//INSERT
	{
		h[j]=k;
		return TRUE;
	}
	if(h[j]==k || j== FALSE) return FALSE;//DUPLICATE
	
}
void Hash::Display(){
	int i;
	for (i=0;i<SIZE;i++){
		cout<<"h["<<i<<"]=";
		if(h[i]==EMPTY) cout<<EMPTY<<endl;
		else cout<<h[i]<<endl;
	}
}
int Hash::HSearch(int k){
	int i,j;
	i=k%SIZE;//hash function
	j=i;
	do{
		if (h[j]==EMPTY || h[j]==k) return j;
		j=(j+1)%SIZE;//rehash function
		
	}
	while(j!=i);
	return FALSE;
}
void Hash::Search(int k){
	/*Search for k in hash table h
	Return true if k is found
	Otherwise return false*/
	int j=HSearch(k);
	if(j==FALSE||h[j]!=k) cout<<"Element "<<k<<" not found";//no match
	else cout<<"Element "<<k<<" found at index"<<j;
	
}
int main(){
	Hash H;
	int i,k,e,res,ch;
	while(1){
		system("cls");
		cout<<"****Hashing -Modulo Division Technique****";
		cout<<"1.Populate an array using modulo division hashing\n";
		cout<<"2.Display the array\n";
		cout<<"3.Search for an element using modulo division hashing\n";
		cout<<"4.Exit\n\n";
		cout<<"Enter your choice:";
		cin>>ch;
		switch(ch){
			case 1:
				H.Intialize();
				getch();
				break;
			case 2:
				cout<<"The Hash Table \n";
				H.Display();
				getch();
				break;
			case 3:
				cout<<"Enter the element to be searched for :";
				cin>>k;
				H.Search(k);
				getch();
				break;
			case 4:
				exit(1);
			default:
				cout<<"Incorrect choice";
				getch();
				break;
	    }//end of switch
		
	}//end of while
}//end of main
