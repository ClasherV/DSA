#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=0,*temp,*newnode;
int choice,count;
void Nodes()
{
    count=0;
    temp=head;
    while(temp!=0)
    {
        count++;
        temp=temp->next;
    }
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
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice!=0);
    temp=head;
    printf("Linked List: ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    Nodes();
    printf("\n\nNumber of Nodes is: %d",count);
    return 0;
}