void dequeue()
{
    if(head == rear)
        {
            printf("Queue at its full capacity can't dequeue.");
            exit;
        } 
            
    head = head->link;      
       

    
}
