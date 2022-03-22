/*Name:Harsh Singh
ROll No:1262
Unit:1
Program:Bubble Sort*/
#include <iostream>
using namespace std;
int main(){
	int tmp;
	int j;
	int i;//index of the loop
	int n;//size of the array
	int A[10];//integer array
	cout<<"***Bubble sort***\n\n";
	cout<<"Enter the size of the array: ";
	cin>>n;
	cout<<"Enter the elements of the array ";
	for (i=0;i<n;i++){
		cin>>A[i]; 
	}
	cout<<"Elements of the array are ";
	for (i=0;i<n;i++){
		cout <<A[i]<<" "; 
	}
	//Bubble Sort
	//Outerloop to control iterations
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)//compare adjacent elements
		{
			if(A[j]>A[j+1]){
				tmp=A[j];
				A[j]=A[j+1];
				A[j+1]=tmp;
			}
		}	
	}//end of for i
	cout<< endl<<endl;
	cout<<"Sorted array are:";
	for (i=0;i<n;i++){
		cout <<A[i]<<" "; 
	}
	
}
