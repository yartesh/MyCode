#include<stdio.h>
int n = 7;
int calsum(int x, int y, int z);
int main(){
    int a, b, c, sum;
    printf("Enter the numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    printf("The addition of numbers : %d", calsum(a, b, c));
    printf("The  : %d", n);
   
    return 0;

}

int calsum(int x, int y, int z){
        printf("I am %d", n);
        return x + y + z;
    }
