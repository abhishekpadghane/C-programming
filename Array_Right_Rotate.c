#include<stdio.h>

void Right_Rotate_n_k_(int *A, int len_A, int n){
    n = n % len_A;
	int p, i, j;
    
    if(n>0){
    	int CA[n];
        for(i=0; i<n; i++)
            CA[i] = A[i];
            
        for(i=n; i<len_A; i++){
            A[i-n] = A[i];
            p = i-n;
        }
        
        for(i=p+1,j=0; i<len_A; i++,j++)
            A[i] = CA[j];
        
        for(i=0;i<len_A;i++)
            printf("%d ",A[i]);
        
    }else{
        for(i=0;i<len_A;i++)
            printf("%d ",A[i]);
    }
}

void Rotate_Right_nk_1_(int *A, int len_A, int n){
	n = n % len_A;
	int i,j,E;
	if(n>0){
		for(i=0;i<n;i++){
			E = A[0];
			for(j=1;j<len_A;j++){
				A[j-1] = A[j];
			}
			A[len_A-1] = E;
		}
		
		for(i=0;i<len_A;i++)
			printf("%d ",A[i]);
		
	}else{
		for(i=0;i<len_A;i++)
			printf("%d ",A[i]);
	}
}

int main()
{
    int A[] = {1,2,3,4,5,6}, n = 3, len_A = sizeof(A)/sizeof(A[0]);

    Right_Rotate_n_k_(A,len_A,n);
    //Rotate_Right_nk_1_(A,len_A,n);
    
    return 0;
}
