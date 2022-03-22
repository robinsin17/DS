/* 
Name: Harsh Singh
Roll NO:1262
Unit:2
Program: Linear Search
*/
#include<iostream>

using namespace std;

int main()
{
	int n,A[10];
	int i,key,flag=0;
	cout<<"=========Linear Search=========\n\n";
	
	cout<<"Enter the number of elements : ";
	cin>>n;
	cout << endl;
	cout<<"Enter "<<n<<" elements of the array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<"Enter the key : ";
	cin>>key;
	cout<<endl<<endl;
	
	//Linear search
	for(i=0;i<n;i++)
	{
		if(A[i] == key)
		{
			flag=1;
			break;
		}  // end of if
	}
	
	// Checking the status of flag
	cout <<endl <<endl;
	if(flag==1)
	{
		cout<<key << " is found at index " <<i;
	}
	else
	{
		cout<< key <<" is not found ";
	}
}//end of main