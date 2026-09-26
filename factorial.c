#include<stdio.h>


int main(){
    int n;
    printf("Enter positive integer : ");
    scanf("%d", &n);

    printf("The factorial of the number %d is %d", n, fact(n));

    int fact(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * fact(n-1);
    }

    return 0;
    }
    