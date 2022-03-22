/* 
Name: Harsh Singh
Roll NO:1262
Unit:1
Program: Insertion Sort 
*/
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	int A[10];
	int tmp,loc;
	cout<<"***Insertion Sort***"<<endl<<endl;
	cout<<"Enter the size of array:";
	cin>>n;
	cout<<"Enter the elements of array:";
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<endl<<endl;
	cout<<"Orignal Array is:";
	for(i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
	//Insertion Sort
	for (i=1;i<n;i++)//iteration loop
	{
		tmp=A[i];
		loc=i-1;	
		while(tmp<A[loc] && loc>=0){
			A[loc+1]=A[loc];
			loc=loc-1;
		}//end of while
		//At this stage a space is available for tmp
		A[loc+1]=tmp;
		
	}//end of for i loop
	cout<<endl<<"Sorted Array:";
	for (i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	
}
