#include<stdio.h>
#include<stdlib.h>

int main(){

    struct Node
    {
        int rollNumber;
        struct Node *next;
    };
    
    struct Node *p1;
    struct Node *p2;
    struct Node *p3;
    
    p1 = malloc(sizeof(struct Node));
    p2 = malloc(sizeof(struct Node));

    p1->rollNumber = 001;
    p2->rollNumber = 002;

    p1->next = p2;
    p2->next = NULL;

    printf("%d\n", p1->rollNumber);
    printf("%d\n", p2->rollNumber);
    printf("%p\n", (void *)p1->next);

    return 0;

}