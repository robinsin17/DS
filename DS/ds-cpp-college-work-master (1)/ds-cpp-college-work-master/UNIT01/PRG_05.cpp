/* 
Name: Harsh Singh
Roll NO:1262
Unit:1
Program: Radix Sort 
*/
#include <iostream>
using namespace std;

int main()
{
	int n, i,j,k,r;
	int A[10];
	int max,no_of_passes=0;
	int bin[10][20], count[10];
	int pass,divisor=1;
	cout << "***Radix Sort***";
	cout << endl << endl;
	cout <<"Enter size of array:";
	cin>> n;
	cout << "Enter the elements: "<< endl;
	for (i=0 ; i<n ; i++)
	{
		cin>>A[i];
	}     //end of for i loop
	cout<< endl << endl;
	cout << "Before Sorting:";
	for(i=0 ; i<n ; i++)
	{
		cout << A[i] << " ";
	}       // end of for i loop
	//Largest number in the array
	max =A[0];
	for(i=1 ; i<n ; i++)
	{
		if(A[i] > max)
		{
			max = A[i];
		}
	}
	// Number of digits  in max
	while(max>0)
	{
		no_of_passes++;
		max=max/10;
	}		//end of while
	// Radix Sort
	for(pass=1 ; pass<=no_of_passes ; pass++)
	{
		//Intialize count array to 0
		for(k=0;k<10;k++)
		{
			count[k] =0;
		}
		// Put numbers in their respective bins
		for(i=0 ; i<n ; i++)
		{
			r= (A[i]/divisor)%10;
			bin[r][count[r]] = A[i];
			count[r]++;
		}  // end of for i loop
		
		// Collect the bins
		i=0;
		
		for(k=0 ; k<10 ; k++)
		{
			for( j=0 ; j<count[k] ; j++)
			{
				A[i] = bin[k][j];
				i++;
			} //end of j loop
			
		}    //end of for k loop
		
		divisor = divisor *10;
		
	}	//end of for pass loop
	cout<< endl << endl;
	cout << "After Sorting: ";
	for(i=0 ; i<n ; i++)
	{
		cout << A[i] << " ";
	}
}