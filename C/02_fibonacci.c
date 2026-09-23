#include<stdio.h>
#include<conio.h>

int fibonacci(int n){
    int i, a = 0, b = 1, nextTerm = 0;
    
    // Return base values if the user enters 0 or 1
    if(n == 0) return 0;
    if(n == 1) return 1;
    
    // Calculate the Fibonacci sequence up to n
    for(i = 2; i <= n; i++){
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    return nextTerm;
}

void main()
{
    int num;
    printf("Enter your Num : ");
    scanf("%d",&num);
    printf("Num of value : %d",num);
    printf("\nTotal Fibonacci : %d",fibonacci(num));

    getch();
}
