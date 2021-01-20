#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node* head=NULL;
int n=0;

struct node* getNode(int data)
{
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->link = temp;
    return newnode;
    n++;
}

void Insertion(int position,int data)
{   
    struct node* temp;
    temp = getNode(data)
    
    if(position == 1)
    {
        if( head==NULL)
            head = temp;
    
        else
        {
            temp->link = head;
            head = temp;
        }
        
    }
    
    if(position == (n+1))
    {
        struct node* temp;
        temp1 = head;
        
        while(temp1->link != head)
            temp1 = temp->link;
            
     
        temp1->link = temp;
        temp->link = head;
    }
    
    
    {
        temp = head;
        while()
    }
}
