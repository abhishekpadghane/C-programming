/*

This program calculates factorial of given number n

*/


#include<stdio.h>


// factorial calculates n! using normal for loop method

int factorial(int n) {

	// initializing fact as 1
	int fact=1;
	
	// running loop upto n iteration
	for(int i=1; i<=n; ++i)
		// updating fact by multiplying with i
		fact=fact*i;
		
	// returing fact which is n!
	return fact;
}


// factorial calculates n! using normal for recursive method

int factorial_recursive(int n){
	// defining base condition where 0! is 1
	if(n==0)
		return 1;
		
	// recursively calling function where recursive function for factorial is:
	/*
		When we say n! it means that
		f(n) = f(n-1) * n
		because n! = n-1 * n-2 * n-3 * ........... n-n ~ 0
		nothing but f(n) = f(n-1) * f(n-2) * f(n-3) ........... f(n-n) ~ f(0) ~ 0! which is 1
		
	*/
	return factorial_recursive(n-1) * n;
}


// main function (driver function)

int main(){
	// initializing n
	int n;
	
	// assingning n a value taken from console
	scanf("%d", &n);
	
	// calling factorial_recursive and printing n!
	printf("%d\n", factorial_recursive(n));
	
	// default return
	return 0;
}

