#include <stdio.h>
#include <stdlib.h>

struct SLL1
{
    int data;
    struct SLL1 *next;
};

int main()
{
    struct SLL1 *head, *newnode, *temp;
    head = 0;
    int choice = 1;

    while (choice)
    {
        newnode = (struct SLL1 *)malloc(sizeof(struct SLL1));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;

        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue (0, 1)?.IF YES THEN TYPE 1");
        scanf("%d", &choice);
    }

    temp = head; // Reset temp to the beginning of the list

    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n"); // Add a newline for better formatting

    // Free allocated memory
    temp = head;
    while (temp != 0)
    {
        struct SLL1 *nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }
    printf("jfksdfkld");

    return 0;
}
