//inserting a node at end

#include<stdio.h>

#include<stdlib.h>

struct atend
{
   int data;
   struct atend *link;
};

int main(){
   
    struct atend *head = malloc(sizeof(struct atend));
    head->data = 10;
    head->link = NULL;

    struct atend *current = malloc(sizeof(struct atend));
    current->data = 40;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct atend));
    current->data = 4;
    current->link = NULL;

    last(head,67);
    
    return 0;
    
}

void last(struct atend *head,int data){
    struct atend *ptr,*temp;//temp will store value that willbe inserted at last
    ptr=head;//ptr get initialied with value of 1st node
    temp=(struct atend*)malloc(sizeof(struct atend));

    temp->data=data;//value of temp and link are initialized
    temp->link=NULL;

    while(ptr->link!=NULL){
        ptr=ptr->link;//keep increasing ptr value until it gett link=NULL
    }
    ptr->link=temp;//after above loop get executed the value of temp will be set
}