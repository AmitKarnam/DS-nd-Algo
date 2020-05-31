#include<stdio.h>
#include<stdlib.h>
void push(int x);
void pop();
void print();

struct node
{
    int data;
    struct node *link;
};
struct node *top=NULL;

void push(int x)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}

void pop()
{
    struct node *temp;
    if(top==NULL)
    {
        printf("ERROR! Stack empty");
        return;
    }
    temp=top;
    top=top->link;
    free(temp);
}

void print()
{
    struct node *temp;
    temp=top;
    printf("STACK:\n");
    while(temp!=NULL)
    {
    printf("Stack data: %d\n",temp->data);
    printf("Next stack address:%d\n",temp->link);
    temp=temp->link;
    }
    
}

void main()
{
    push(2);
    push(4);
    pop();
    push(10);
    
    print();
}