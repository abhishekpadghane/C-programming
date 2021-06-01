/*
	This programs conatins code for printing different types of '*' patterns.
	Author: Abhishek Padghane
*/



// including stdio for standard input output

#include<stdio.h>

// including stdlib for standand library

#include<stdlib.h>



/*
	Prints half triangle for n lines

	n = 4

	*
	**
	***
	****
*/

void half_traingle(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++)
			printf("*");
	printf("\n");
	}
}



/*
	Prints reversed half triangle for n lines

	n = 5

	*****
	****
	***
	**
	*
*/

void half_traingle_reverse(int n){
	for(int i=n; i>0; i--){
		for(int j=0; j<i; j++)
			printf("*");
	printf("\n");
	}
}



/*
	Prints mirror imaged half triangle for n lines

	n = 6

	     *
	    **
	   ***
	  ****
	 *****
	******
*/

void half_traingle_mirror(int n){
	for(int i=n; i>0; i--){
		for(int j=0; j<=n; j++){
			if(j>=i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}



/*
	Prints mirror imageed reversed half triangle for n lines

	n = 5

	*****
	 ****
	  ***
	   **
	    *
*/

void half_traingle_reverse_mirror(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i<=j)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}



/*
	Prints triangle for n lines

	n = 5

	        *
	       * *
	      * * *
	     * * * *
	    * * * * *
*/

void traingle(int n){
	int print_start_range = n, print_end_range = n;
	int even_odd = n%2;
	for(int i=0; i<n; i++){
		for(int j=1; j<=(n*2)-1; j++){
			if(j>=print_start_range && j<=print_end_range && j%2==even_odd)
				printf("*");
			else
				printf(" ");
		}
		if(even_odd==1)
			even_odd=0;
		else
			even_odd=1;
		print_start_range--;
		print_end_range++;
		printf("\n");
	}
}




/*
	Prints reversed triangle for n lines

	n = 5

	      * * * * *
	       * * * *
	        * * *
	         * *
		  *
*/

void reverse_traingle(int n){
	int print_start_range = 1, print_end_range = (n*2)-1;
	int even_odd = 1;
	for(int i=0; i<n; i++){
		for(int j=1; j<=(n*2)-1; j++){
			if(j>=print_start_range && j<=print_end_range && j%2==even_odd)
				printf("*");
			else
				printf(" ");
		}
		print_start_range++;
		print_end_range--;
		if(even_odd==1)
			even_odd=0;
		else
			even_odd=1;
		printf("\n");
	}
}



/*
	Prints kite for n lines

	n = 5
	        *
	       * *
	      * * *
	     * * * *
	    * * * * *
	     * * * *
	      * * *
	       * *
		*
*/

void kite(int n){
	int print_start_range = n, print_end_range = n;
	int even_odd = n%2;
	int traingle = 1;
	for(int i=0; i<(n*2)-1; i++){
		for(int j=1; j<=(n*2)-1; j++){
			if(j>=print_start_range && j<=print_end_range && j%2==even_odd)
				printf("*");
			else
				printf(" ");
		}
		if(i==n-1){
			traingle = 0;
		}

		if(traingle==0){
			print_start_range++;
			print_end_range--;
		}
		else {
			print_start_range--;
			print_end_range++;
		}

		if(even_odd==1)
			even_odd=0;
		else
			even_odd=1;
		printf("\n");
	}
}



int main(){
	int option, choice, lines;

	do {

		printf("1: HT\n2: HRT\n3: HMT\n4: HRMT\n5: T\n6: RT\n7: K\n8: EXIT\n");
		scanf("%d", &option);

		if (option==8)
			break;

		printf("Enter number of lines: ");
		scanf("%d", &lines);


		// making a choice

		switch(option) {

			case 1:  half_traingle(lines);
				break;

			case 2:  half_traingle_reverse(lines);
				break;

			case 3:  half_traingle_mirror(lines);
				break;

			case 4:  half_traingle_reverse_mirror(lines);
				break;

			case 5:  traingle(lines);
				break;

			case 6:  reverse_traingle(lines);
				break;

			case 7:  kite(lines);
				break;

			case 8: exit(0);

			default: printf("Invalid choice\n");

		}


		// asking user for continuing app
		printf("Do you want to continue?: (Y/n)");
		scanf("%d", &choice);

	} while(choice == 1);

	return 0;
}
