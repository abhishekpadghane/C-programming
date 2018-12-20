#include<stdio.h>

int isEmpty(int top){
	if((top)==-1)
		return(1);
	return(0);
}

int isFull(int n, int top){
	if(top == n-1)
		return(1);
	return(0);
}

void PUSH(int *top, int stack[], int n){
	
	int top_1 = *top;
	
	if(isFull(n,(top_1)) == 1)
		printf("Stack is Full\n");
	else{
		printf("Enter data: "); int data;	scanf("%d",&data);
		top_1 = top_1 + 1;
		stack[top_1] = data;
		*top = top_1;
	}
}

void POP(int *top, int stack[]){
	
	int top_1 = *top;
	
	if(isEmpty(top_1) == 1)
		printf("Stack is Empty\n");
	else{
		top_1 = top_1 - 1;
		*top = top_1;
	}
}

void display(int top, int stack[]){
	
	int i;
	
	if(isEmpty(top) == 1)
		printf("Stack is Empty\n");
	else
		printf("--");
		for(i=(top);i>=0;i--)
			printf("\n%d\n",stack[i]);
		printf("--\n");
}


int main(){
	int n, top = -1, option;
	
	printf("Enter size of Stack: ");	scanf("%d",&n);
	
	int stack[n];
	
	do{
		printf("1: PUSH	2: POP	3: DISPLAY	4: EXIT\n");	scanf("%d",&option);	printf("\n");
		
		switch(option){
			case 1:	PUSH(&top,stack,n);
					break;
			case 2: POP(&top,stack);
					break;
			case 3:	display(top,stack);
					break;
		}
		
	}while(option!=4);
	
	return(0);
}
