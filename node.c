#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main() {
    int number;
    countnode(number);//number is send as parameter that will point number of nodes

    struct node *head = malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 40;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 4;
    current->link = NULL;
    head->link->link = current;

    int countnode(struct  node *number);
    {
        int count=0;
        if(number==NULL)
        {
            printf("THE LINKEDLIST IS EMPTY");
        }
        struct node *ptr=NULL;//ptr is a temp pointer that will be shifted count no of nodes


        ptr=number;//initial value of link is assigned in ptr
        while(ptr!=NULL)
        {
            count++; 
            ptr=ptr->link;
        };
        printf("%d",count);
    };
    
}