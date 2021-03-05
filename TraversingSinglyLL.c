//Traverse A singly linked list

void traverse()
{
     node *ref=head;
     while(ref != NULL)
     {
           printf("%d\n" , ref->data);
           ref=ref->next;
      }
}