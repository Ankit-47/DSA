#include <stdio.h>
#include <stdlib.h>

struct Sll
{
    int data;
    struct Sll *link;
};

int main() {
    struct Sll *head = malloc(sizeof(struct Sll));
    head->data = 10;
    head->link = NULL;

    struct Sll *current = malloc(sizeof(struct Sll));
    current->data = 40;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct Sll));
    current->data = 4;
    current->link = NULL;
    head->link->link = current; //head->link=current ma xa again current->link garesi 3rd node ko current data dekhauxa 

    // Printing the data of each node
    struct Sll *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }

    return 0;
}
