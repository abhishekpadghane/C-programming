#include <stdio.h>

void Left_Rotate_n_k_(int *A, int len_A, int n){
	n = n % len_A;
	int i, p, j;
	
	if(n>0){
		int CA[n];
		for(j=0,i=len_A-1;j<n;j++,i--)
			CA[j] = A[i];
			
		for(i=len_A-n;i>=0;i--)
			A[i+n] = A[i];
			
		for(i=0,j=n-1;i<n;i++,j--)
			A[i] = CA[j];
			
		for(i=0;i<len_A;i++)
			printf("%d ",A[i]);
	}else{
		for(i=0;i<len_A;i++)
			printf("%d ",A[i]);
	}
}

void Left_Rotate_nk_1_(int *A, int len_A, int n){
	n = n % len_A;
	int i, j, E;
	if(n>0){
		for(i=0;i<n;i++){
			E = A[len_A-1];
			for(j=len_A-2;j>=0;j--)
				A[j+1] = A[j];
			A[0] = E;
		}
		
		for(i=0;i<len_A;i++)
			printf("%d ",A[i]);
		
	}else{
		for(i=0;i<len_A;i++)
			printf("%d ",A[i]);
	}
}

int main(){
	
	int A[] = {1,2,3,4,5,6}, len_A = sizeof(A)/sizeof(A[0]), n = 3;
	
	Left_Rotate_n_k_(A,len_A,n);
	//Left_Rotate_nk_1_(A,len_A,n);
	
	return 0;
}
