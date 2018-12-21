#include<stdio.h>

void PUSH_1(int *top, int stack[], int data){
	
	int top_1 = *top;
	top_1 = top_1 + 1;
	stack[top_1] = data;
	*top = top_1;
	
}


void display_1(int top, int stack[]){
	
	int i;
	for(i=(top);i>=0;i--){
		if(i==7)
			printf(" ");
		printf("%d",stack[i]);
	}
}

void dec_2_bin(int n){
	if(n>65535){
		printf("Enter number given in above range");
	}
	else{
		int ss[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, top = -1, quo = 1;
		while(quo!=0){
			quo = n / 2;
			PUSH_1(&top,ss,n%2);
			n = n / 2;
		}
	display_1(top,ss);
	}
}


int main(){
	
	int n;	printf("Enter the decimal number from range 0 to 65535: ");	scanf("%d",&n);
	
	dec_2_bin(n);
	
	return(0);
}
