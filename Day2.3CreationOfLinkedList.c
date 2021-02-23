#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *CreateNode()
{
    node *temp;
    temp = (node*)malloc(sizeof(node));
    return temp;
}

int main()
{
    node *head;
    node *temp=CreateNode();
    
    temp->data=100;
    temp->next=NULL;
    
    if(head==NULL)
    head=temp;
    
    printf("Data:%d\n",temp->data);
    return 0;
}



