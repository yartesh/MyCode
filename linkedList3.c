#include<stdio.h>
#include<stdlib.h>
int main(){

    int length;
    int value;
    printf("Enter the size of linked list you want to create : ");
    scanf("%d", &length);

    struct Node
    {
        int num;
        struct Node *next;
    };
    struct Node *head = NULL;
    struct Node *temp = NULL;

    for (int i = 1; i <= length; i++)
    {
        struct Node *p;
        p = malloc(sizeof(struct Node));
        printf("Enter the element %d ", i);
        scanf("%d", &p->num);
   
        p->next = NULL;

        if (head == NULL)
        {
            head = p;
        }
        else
        {
            temp->next = p;
        }

        temp = temp->next;

    }
    
     printf("\nLinked List: ");

    temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->num);
        temp = temp->next;
    }

    printf("NULL\n");

    return 0;

}