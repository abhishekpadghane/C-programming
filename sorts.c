/*
	This program demostrates varies sorting method
*/

// importing stdio for standard input and output
#include<stdio.h>

// import stdbool for boolean functionalities
#include<stdbool.h>

// import math for maths
#include<math.h>



// function to display elements of array

void display_elememts(int *A, int n){
	for(int i=0; i<n; ++i)
		printf("%d ", A[i]);
	printf("\n");
}


/*
	BUBBLE SORT
	
	:- Inmemory (Internel) sort
	:- Comparison based sort
	:- Runtime (Time complexity) ->	O(n^2) -> Best, Average, Worst
						O(n) (Modified/Optimized) -> Best
	
	:- Memory (Space complexity) ->	O(n) -> All (Best, Average, Worst)
*/



// function for sorting items in array using modified bubble sort algo

int *bubble_sort_modified(int *A, int n){
	for(int i=0; i<n-1; ++i){
		bool sorted=true;
		for(int j=0; j<n-1; ++j)
			if(A[j] > A[j+1]){
				sorted=false;
				int temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		if(sorted)
			break;
	}
	return A;
}



// function for sorting items in array using bubble sort algo

int *bubble_sort(int *A, int n){
	for(int i=0; i<n-1; ++i)
		for(int j=0; j<n-1; ++j)
			if(A[j] > A[j+1]){
				int temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
	return A;
}


/*
	SELECTION SORT
	
	:- Inmemory (Internel) sort
	:- Comparison based sort
	:- Runtime (Time complexity) ->	O(n^2) -> All (Best, Average, Worst)
	
	:- Memory (Space complexity) ->	O(n) -> All (Best, Average, Worst)
*/



// function for sorting items in array using selection sort algo

int *selection_sort(int *A, int n){
	for(int i=0; i<n-1; ++i)
		for(int j=i+1; j<n; ++j)
			if(A[i]>A[j]){
				int temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
	return A;
}



/*
	INSERTION SORT
	
	:- Inmemory (Internel) sort
	:- Comparison based sort
	:- Runtime (Time complexity) ->	O(n^2) -> Average, Worst
						O(n) -> Best
	
	:- Memory (Space complexity) ->	O(n) -> All (Best, Average, Worst)
*/



// function for sorting items in array using insertion sort algo

int *insertion_sort(int *A, int n){
	for(int i=0; i<n-1; i++)
		if(A[i] > A[i+1])
			for(int j=i+1; j>0; j--){
				if(A[j] > A[j-1])
					break;
				int temp = A[j];
				A[j] = A[j-1];
				A[j-1] = temp;
			}
	return A;
}



/*
	MERGE SORT
	
	:- Inmemory (Internel) / Outmemory (Externel) sort
	:- Comparison based sort
*/


// function to perform split phase of merge sort

void split(int *A, int lower, int upper){
	if(lower < upper){
		int mid = (int) floor( (lower+upper) / 2 );
		split(A, lower, mid);
		split(A, mid+1, upper);
	}
}





// driver function

int main(){
	int A[] = {8, 7, 4, 2, 1, 7, 3, 7, 2};
	int n = sizeof(A) / sizeof(A[0]);
	
	/*
	printf("Elements before sort: ");
	display_elememts(A, n);

	
	printf("Elements After applying insertion sort: ");
	display_elememts( insertion_sort(A, n), n );
	*/
	
	split(A, 0, n-1);
	
	return 0;
}

