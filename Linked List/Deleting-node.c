#include<stdio.h>
#include<stdlib.h>
void insert(int);
void delete(int);
void print_linked_list();

    struct node
{
    int data;
    struct node*link;
};
 
 struct node *head;


int main()
{

insert(1);
insert(2);
insert(3);
print_linked_list();
printf("\n");
printf("After deletion: ");
delete(2);
printf("\n");
print_linked_list();

}





 void insert(int position)
{
    struct node *newnode,*temp;
    
   
   newnode = (struct node*)malloc(sizeof(struct node*));
   
   newnode->data = 2;
   newnode->link = NULL;
    
    
    if(position == 1)
    { 
        
         newnode->link = head;
         head = newnode;
        
 
    }

    else
    {            
             temp = head;
           
             for(int i=0;i<(position-2);i++)
                    temp = temp->link;
                    
        
             newnode->link = temp->link;
             temp->link = newnode;
            
           

        
            
    }


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
        printf("Address of next node is:%d\n",temp1->link);
        temp1 = temp1->link;
        i++;
    }

}         



void delete(int pos)
{
    struct node *temp2=head,*temp3;

    if(pos == 1)
    {
        temp2 = head;
        head = temp2->link;
        free(temp2);
        return;

    }   
    else
    {
        for(int i=0;i<(pos-2);i++)
            temp2 = temp2->link;

    temp3 = temp2->link;
    temp2->link = temp3->link;
    free(temp3);   
    }
    

                                                                                            
}