#include<stdio.h>
#include<stdlib.h>


/* Queue is a first in first out(fifo) data structure */ 
/* Queue is a List with the restriction that insertion can be performed at rear end */ 
/* enqueue or psuh is one of the operation performed at rear end */ 
/* dequeue or pop is one of the operation performed at front end*/

struct node
{
    int data;
    struct node* next;
};

struct node *front = NULL;
struct node *rear = NULL;
struct node* newnode;

void Enqueue(int element)
{
    newnode = malloc(sizeof(struct node));
    newnode->data = element;
    newnode->next = NULL;
    
    if(front != NULL && rear != NULL)
    {
        rear->next = newnode;
        rear = newnode;
    }
    
    else
    {
        front = newnode;
        rear = newnode;
    }
}

void Dequeue()
{
    if(front->next != NULL)
        front = front->next;
        
    else
    {
        front = NULL;
        rear = NULL;
    }
}

void print_linked_list_queue()
{
    struct node *temp = front;
     int i=1;
     printf("QUEUE : \n");
    while(temp != NULL)
    {
        printf("Queue Node %d info\n",i);
        printf("Queue Node %d data:%d\n",i,temp->data);
        printf("Address of next node is:%p\n",temp->next);
        temp=temp->next;
        i++;
        printf("\n");
    }

}

void main()
{
    /* Sample Input */
    
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Enqueue(5);
    Enqueue(6);
    print_linked_list_queue();
    printf("\nAfter Dequeue operation : \n");
    Dequeue();
    print_linked_list_queue();
}

/*  Sample Output */

/* 

QUEUE :                                                                
Queue Node 1 info                                                      
Queue Node 1 data:1                                                    
Address of next node is:0xaef030                                       
                                                                       
Queue Node 2 info                                                      
Queue Node 2 data:2                                                    
Address of next node is:0xaef050                                       
                                                                       
Queue Node 3 info                                                      
Queue Node 3 data:3                                                    
Address of next node is:0xaef070                                       
                                                                       
Queue Node 4 info                                                      
Queue Node 4 data:4                                                    
Address of next node is:0xaef090                                       
                                                                       
Queue Node 5 info                                                      
Queue Node 5 data:5                                                    
Address of next node is:0xaef0b0                                       
                                                                       
Queue Node 6 info                                                      
Queue Node 6 data:6                                                    
Address of next node is:(nil) 

After Dequeue operation :                                              
QUEUE :                                                                
Queue Node 1 info                                                      
Queue Node 1 data:2                                                    
Address of next node is:0xaef050                                       
                                                                       
Queue Node 2 info                                                      
Queue Node 2 data:3                                                    
Address of next node is:0xaef070                                       
                                                                       
Queue Node 3 info                                                      
Queue Node 3 data:4                                                    
Address of next node is:0xaef090                                       
                                                                       
Queue Node 4 info                                                      
Queue Node 4 data:5                                                    
Address of next node is:0xaef0b0                                       
                                                                       
Queue Node 5 info                                                      
Queue Node 5 data:6                                                    
Address of next node is:(nil)      

*/
