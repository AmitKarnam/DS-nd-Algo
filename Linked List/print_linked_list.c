void print_linked_list()
{
    struct node *temp = head;
     int i=1;
    while(temp != NULL)
    {
       

        printf("Node %d info",i);
        pritnf("Node %d data:%d",i,temp->data);
        printf("Address of next node is:%d",temp->link);
        temp = temp->link;
        i++;
    }

}