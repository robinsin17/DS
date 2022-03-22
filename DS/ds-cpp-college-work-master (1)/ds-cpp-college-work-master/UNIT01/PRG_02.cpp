/*
Name:Harsh Singh
ROll No:1262
Unit:1
Program:Selection Sort
*/
#include<iostream>

using namespace std;

int main(){
	int n,i,j,loc,min,tmp;
	int A[10];
	
	cout << "*** Selection Sort ***" << endl << endl;
	
	cout << "Enter the size of the array: ";
	cin >> n;
	
	cout << "Enter the Elements of the Array:\n";
	for(i=0 ; i<n ; i++){
		cin >> A[i];
	}
	
	cout << endl << endl;
	cout << "Original Array: ";
	for(i=0 ; i<n ; i++){
		cout << A[i] << " ";
	}
	
	//Selection Sort
	for(i=0 ; i<n ; i++){
		//Assume the first of unsorted region is minimum
		min = A[i];
		loc = i;
		
		for(j=i+1 ; j<n ; j++){
			if(A[j] < min){
				min = A[j];
				loc = j;
			}//end of if
		}//end of j loop
		//Exchange minimum with first position
		tmp = A[i];
		A[i] = A[loc];
		A[loc] = tmp;
		
	}//end of i loop
	cout << endl << endl;
	cout << "Sorted Array:";
	for(i=0 ; i<n ; i++){
		cout << A[i] << " ";
    }
}//end of main
