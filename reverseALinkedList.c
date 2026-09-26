#include<stdio.h>
#include<stdlib.h>

 

    struct Node
    {
        int rollNumber;
        struct Node *next;
    };

    int *reverseLL(struct Node *head)
    {
    struct Node *prev = NULL;
    struct Node *next = NULL;
    struct Node *curr = head;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }

    return prev;
    }

int main(){


    struct Node *p1;
    struct Node *p2;
    struct Node *p3;
    
    p1 = malloc(sizeof(struct Node));
    p2 = malloc(sizeof(struct Node));
    p3 = malloc(sizeof(struct Node));

    if (p1 == NULL || p2 == NULL || p3 == NULL)
    {
        printf("Memory Allocation failed");
        return 1;
    }
    
    p1->rollNumber = 1;
    p2->rollNumber = 2;
    p3->rollNumber = 3;

    p1->next = p2;
    p2->next = p3;
    p3->next = NULL;
,
    struct Node *temp;
    struct Node *head;
    head = p1;
    printf("\nLinked List: ");

    temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->rollNumber);
        temp = temp->next;
    }

    printf("NULL\n");

   head = reverseLL(head);

    while (temp != NULL)
    {
        printf("%d -> ", temp->rollNumber);
        temp = temp->next;
    }
}