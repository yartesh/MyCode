#include<stdio.h>
int main(){

    char ch1;
    printf("Enter Your name first letter\n1. A\n2. B\n3. C\n");
    scanf("%c", &ch1);
    
    switch (ch1)
    {
    case 'A':
        printf("Your name is Aaauuuu");
        break;
    
    case 'B':
        printf("Your Name is Bbbbbiiiii");
        break;
   
    case 'C':
        printf("Your name is Cccccc");
        break;

    default:
        printf("Enter A, B, C only");  

 }
    return 0;
}