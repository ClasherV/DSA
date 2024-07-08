#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head=0,*temp,*newnode;
    int choice,count=0;
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
        printf("\nDo You want to Contiue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);
    printf("\nLinked List: ");
    temp=head,count=0;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNUmber of Nodes is: %d",count);    
    return 0;
}
