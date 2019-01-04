#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InitNIL(int *a, int n){
    int i;
    for(i=0;i<n;i++)
        a[i]=-1;
}

int Fibonacci(int n, int *LT){
    if(n <= 1)
        return 1;
    if(LT[n] != -1)
        return LT[n];
    LT[n] = Fibonacci(n-1, LT) + Fibonacci(n-2, LT);
    return LT[n];
}

int Fibonacci_1(int n){
    if(n <= 1)
        return 1;
    return Fibonacci_1(n-1) + Fibonacci_1(n-2);
}

int Fibonacci_2(int n){
    int i, f0 = 0, f1 = 1, sum = 0;
    for(i=0;i<n;i++){
        sum = f0 + f1;
        f0 = f1;
        f1 = sum;
    }
    return sum;
}

int main()
{
    
    printf("Enter Fibonacci summations till how many numbers: ");
    int n;
    scanf("%d",&n);
    
    int *LT = (int*) calloc(n+1, sizeof(int));
    
    InitNIL(LT, n+1);
    
    int i;
    
    printf("Sum of Fibonacci sequence of %d number is %d", n, Fibonacci(n, LT));
    
    clock_t begin = clock();

        i = Fibonacci(n,LT);

    clock_t end = clock();
    double time_spent_r = (double)(end - begin) / CLOCKS_PER_SEC;
    
    printf("\nTime of processing of Fibonacci using Dynamic Programing is %.10f sec",time_spent_r);
    
    begin = clock();

        i = Fibonacci_1(n);

    end = clock();
    time_spent_r = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("\nTime of processing of Fibonacci using Recursion is %.10f sec",time_spent_r);
    
    begin = clock();

        i = Fibonacci_2(n);

    end = clock();
    time_spent_r = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("\nTime of processing of Fibonacci using Loop is %.10f sec",time_spent_r);
    
    return 0;
}

