#include<stdio.h>


void half_traingle(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++)
			printf("*");
	printf("\n");
	}
}


void half_traingle_reverse(int n){
	for(int i=n; i>0; i--){
		for(int j=0; j<i; j++)
			printf("*");
	printf("\n");
	}
}


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
	int n;

	printf("Enter no. of lines: ");
	scanf("%d", &n);

	kite(n);

	return 0;
}
