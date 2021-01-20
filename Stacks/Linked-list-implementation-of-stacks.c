#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* newnode;
struct node* head = NULL;
struct node* top = NULL;

void Push(int element)
{
    newnode = malloc(sizeof(struct node));
    newnode->data = element;
    newnode->next = NULL;
    
    if(head != NULL & top != NULL)
    {
        top->next = newnode;
        top = newnode;
    }
    
    else
    {
        head = newnode;
        top = newnode;
    }
}

void Pop()
{
    struct node* temp = head;
    while(temp->next != top)
        temp = temp->next;
        
    temp->next = NULL;
    top = temp;
}

void print_linked_list_stack()
{
    struct node *temp = head;
     int i=1;
     printf("STACK : \n");
    while(temp != NULL)
    {
        printf("Stack Node %d info\n",i);
        printf("Stack Node %d data:%d\n",i,temp->data);
        printf("Address of next node is:%p\n",temp->next);
        temp=temp->next;
        i++;
        printf("\n");
    }

}

void main()
{
    /* Sample Input */
    
    Push(1);
    Push(2);
    Push(3);
    print_linked_list_stack();
    Pop();
    printf("After pop operation \n");
    print_linked_list_stack();
}


/* Sample Output */

/* 

Starting program: /home/a.out                                                                
STACK :                                                                                      
Stack Node 1 info                                                                            
Stack Node 1 data:1                                                                          
Address of next node is:0x602030                                                             
                                                                                             
Stack Node 2 info                                                                            
Stack Node 2 data:2                                                                          
Address of next node is:0x602050                                                             
                                                                                             
Stack Node 3 info                                                                            
Stack Node 3 data:3                                                                          
Address of next node is:(nil)                                                                
                                                                                             
After pop operation                                                                          
STACK :                                                                                      
Stack Node 1 info                                                                            
Stack Node 1 data:1                                                                          
Address of next node is:0x602030                                                             
                                                                                             
Stack Node 2 info                                                                            
Stack Node 2 data:2                                                                          
Address of next node is:(nil) 

*/


