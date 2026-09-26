#include<stdio.h>
#include<stdbool.h>

int main(){

    bool isPrime = true;
    int num;
    printf("Enter a number : \n");
    scanf("%d", &num);

    if(num == 0 || num == 1){
        printf("The number %d is not a prime number ", num);
        return 0;
    }
    for (int i = 2; i*i < num; i++)
    {
        if(num % i == 0){
            isPrime = false;
            break;
        }

    }
    
    if (isPrime)
    {
        printf("The number %d is a prime Number ", num);
    }
    else{
        printf("The number %d is not a prime number", num);
    }

    return 0;

}