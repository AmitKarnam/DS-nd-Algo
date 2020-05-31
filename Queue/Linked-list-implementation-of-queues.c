
#include<stdio.h>
#include<stdlib.h>

/* Queue is a first in first out(fifo) data structure */
/* Queue is a List with the restriction that insertion can be performed at rear end */
/* enqueue or psuh is one of the operation performed at rear end */
/* dequeue or pop is one of the operation performed at front end*/

void  enqueue(float data);
void dequeue();
void print_queue();

struct queue
    {
        float data;
        struct queue *link;      
    };

struct queue *head=0,*rear,*newnode;

void main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    dequeue();
    enqueue(4);
    print_queue();

}

void  enqueue(float data)
{

    newnode = (struct queue*)malloc(sizeof(struct queue));

    newnode->data=data;
    newnode->link=NULL;

    if(head == 0)
        {
            head = newnode;
            rear = head;
        }

    else
        {
            rear->link = newnode;
            rear = newnode;
        }


}


void dequeue()
{
    if(head == rear)
        {
            printf("Queue at its full capacity can't dequeue.");
            exit;
        } 
            
    head = head->link;      
       

    
}


void print_queue()
{
    struct queue* temp1;
    temp1 = head;
    int i=1;
    printf("QUEUE INFO : \n");
    printf("\n");
    while(temp1 != NULL)
    {
        

        printf("Node %d info\n",i);
        printf("Node %d data:%f\n",i,temp1->data);
        printf("Address of next node is:%p\n",temp1->link);
        printf("\n");
        temp1 = temp1->link;
        i++;
    }

}         




