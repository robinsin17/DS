/* Name: HARSH SINGH
  Roll NO: 1262
  Unit: 02
  Program :Binary Search
  */
#include<iostream>

using namespace std;

int main()
{
	int n,i,flag=0,tmp,j;
	int key,first,last,mid;
	int A[10];
	
	cout<<"* Binary Search **"<<endl;
	
	cout<<"Enter the size of an array: ";
	cin>>n;
	
	cout<<"Enter the elements of an array: ";
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<endl;
	cout<<"Enter the key: ";
	cin>>key;
	
	//sort
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(A[j+1]<A[j])
			{
				tmp=A[j+1];
				A[j+1]=A[j];
				A[j]=tmp;
				
				
			}
		}
	}
	cout<<endl<<endl;
	cout<<" Array: ";
	for(i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
	
	
	
	//Binary search
	first=0;
	last=n-1;
	
	while(first<=last)
	{
		mid= (first+last)/2;
		if(key< A[mid])
		{
			last=mid-1;
			
		}
		else if(key>  A[mid])
		{
			first=mid+1;
		}
		else
		{
			flag=1;
			break;
		}
		
	}//end of  while
	cout<<endl;
	if (flag==1)
	{
		cout<<key<<" is found at  "<<mid;
	}
	else
	{
		cout<<key<<" is not found";
	}
}