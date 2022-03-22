/* 
Name: Harsh Singh
Roll NO:1262
Unit:1
Program: Shell Sort 
*/
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	int A[10];
	int tmp,j,gap;
	cout<<"***Shell Sort***\n\n";
	cout<<"Enter the number of elements in the array:";
	cin>>n;
	cout<<"Enter the elements"<<endl;
	for(i=0;i<n;i++){
		cin>>A[i];
	}
	cout<<endl<<endl;
	cout<<"Orignal Array: ";
	for(i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	//Shell sort
	for(gap=n/2;gap>0;gap=gap/2)//Iterations for increment sequence
	{
		for(i=gap;i<n;i++){
			tmp=A[i];
			for (j=i;j>=gap && tmp<A[j-gap];j-=gap)
			{
				A[j]=A[j-gap];
			}//end of j loop
			A[j]=tmp;
		}//end of for i loop	
	}//end of loop
	cout<<endl<<endl;
	cout<<"Sorted Array: ";
	for(i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
}//end of main
