#include<stdio.h>
#include<stdlib.h>
void print_linked_list();


  struct node
        {
            int data;
            struct node*link;
        };

    struct node *head = 0,*newnode,*temp;
    int n;

int main()
{

       
    printf("Enter the number of nodes to be created:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        
        newnode = (struct node *) malloc(sizeof(struct node));

        


             if(head != 0 )
            { 
                temp->data = 2;
                temp->link = newnode;
                temp = newnode;
            
            }

           

            if(head == 0)
            {
                
                head = newnode;
                temp = newnode;    
                
            }

            
            if(i == n)
            {
                temp->data = 2;
                temp->link = NULL;
            }      

    }

 print_linked_list();

     
}

void print_linked_list()
{
    struct node *temp = head;
     int i=1;
    while(temp != NULL)
    {
        printf("Node %d info\n",i);
        printf("Node %d data:%d\n",i,temp->data);
        printf("Address of next node is:%d\n",temp->link);
        temp=temp->link;
        i++;
    }

}

 