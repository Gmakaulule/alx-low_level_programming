#include <stdio.h>
#include <stdlib.h>

struct nodes
{
    int num;
    struct nodes *next;
}*head,*tmp;

struct nodes* crate_node(int  new)
{
    
   struct nodes *result = malloc(sizeof(struct nodes));
   result->num = new;
   result->next = NULL;
   if (head == NULL)
   {
        head = tmp;
        head = result;
   }
   else
   tmp ->next = result;
    return(result);
}


int print_nodes(struct nodes *head)
{
    struct nodes *temp = head;
    while(temp)
    {
        printf("%d\n",temp->num);
        temp=temp->next;
    }
}

int main()
{
    if(head == NULL)
    {
        head = tmp;
    }
    else 
    
   tmp = crate_node(45);
   tmp->next=head;

    print_nodes(head);


}



