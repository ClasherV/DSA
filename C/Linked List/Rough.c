#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *head=NULL,*temp,*newnode;
int count,choice;
int Nodes()
{
    count=0;
    temp=head;
    while(temp!=0)
    {
        temp=temp->next;
        count++;
    }
    return count;
}
int Display(struct node *head)
{
    if(head==0)
    {
        printf("Linked List does not Exist");
    }
    else
    {
        printf("Linked List: ");
        temp=head;
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
    printf("\n\n");
}
struct node *Sorting(struct node *head) 
{
    Nodes();
    for (int i = 0; i < count - 1; i++)
    {
        temp = head;
        struct node *prevnode = NULL;
        struct node *nextnode = temp->next;

        for (int j = 0; j < count - 1 - i; j++)
        {
            if (temp->data > nextnode->data)
            {
                // Swap nodes
                if (prevnode == NULL)
                {
                    head = nextnode;
                }
                else
                {
                    prevnode->next = nextnode;
                }
                temp->next = nextnode->next;
                nextnode->next = temp;

                // Update pointers for next iteration
                prevnode = nextnode;
                nextnode = temp->next;
            }
            else
            {
                prevnode = temp;
                temp = temp->next;
                nextnode = nextnode->next;
            }
        }
    }
    return head;
}

int main()
{
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("\nEnter the Choice: ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice!=0);
    Display(head);
    head=Sorting(head);
    Display(head);
    return 0;
}