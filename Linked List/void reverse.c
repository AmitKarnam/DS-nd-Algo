void reverse()
{
    struct node *current,*prev,*next;

    prev = NULL;
    current = head;

    while(current != NULL)
    {
        next=current->link;
        current->link = prev;
        prev = current;
        current = next;
    }
         if(current == NULL)
            head = prev;
}
