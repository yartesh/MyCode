#include<stdio.h>
#include <stdlib.h>


int main(){

struct Node
{
    char *name;
    int age;
    struct Node *next;
    
    
};

struct Node n1;
struct Node n2;

n1.name = "Madhyika";
n1.age = 102;

n2.name = "Lambu Devi";
n2.age = 123;

n1.next = &n2;
n2.next = NULL;

printf("%p\n", (void *)n1.next);
printf("%s\n", n1.name);
printf("%p\n", (void *)n2.next);
return 0;

}