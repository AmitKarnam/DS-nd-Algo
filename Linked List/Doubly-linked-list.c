#include<stdio.h>
#include<stdlib.h>
void print_linked_list();

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head;

int main()
{
    head = NULL;
    struct node *newnode,*temp;
    
    int n;
    printf("\nEnter the number of nodes required:");
    scanf("%d",&n);     // NUmber of nodes required
    printf("\n");

    for(int i=1;i<=n;i++)
    {
         newnode = (struct node*)malloc(sizeof(struct node));

             if(head == NULL)
            {
                head = newnode;
                head->data = 10;
                temp = head;
            }

            else
            {
                
                temp->next = newnode;
                newnode->data = 10;
                newnode->prev = temp;
                temp = newnode;
            }

            if(i == n)
            {
               
                newnode->next = NULL;
            }
        
    }

print_linked_list();

}

void print_linked_list()
{
    struct node* temp1;
    temp1 = head;
    int i=1;
    while(temp1 != NULL)
    {
        

        printf("Node %d info\n",i);
        printf("Node %d data:%d\n",i,temp1->data);
        printf("Address of previous node is:%d\n",temp1->prev);
        printf("Address of next node is:%d\n",temp1->next);
        printf("\n");
        temp1 = temp1->next;
        i++;
    }

}         
