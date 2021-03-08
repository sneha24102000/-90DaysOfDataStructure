void CountLen()
{
    node *ref=head;
    int count=0;
    while(ref != NULL)
    {
        count++;
        ref=ref->next;
     }
     printf("size of list is:%d",count);
}