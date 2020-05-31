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