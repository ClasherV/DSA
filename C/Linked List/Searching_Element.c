#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node *head=0,*temp,*newnode;
int choice,count;
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
int Display(struct node* head)
{
    if(head==0)
    {
        printf("\n\nLinked List does not Exist");
    }
    else
    {
        temp=head;
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
    printf("\n\n");
}
struct node* Searching(struct node *head,int Key)
{
    temp=head;
    while(temp!=0)
    {
        if(temp->data==Key)
        {
            return temp;
        }
        temp=temp->next;
    }
    return NULL;
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

    printf("Linked List: ");
    Display(head);

    Nodes();
    struct node* arr[count];
    int Key;
    printf("Enter the Element You want to Search in the Linked List: ");
    scanf("%d",&Key);
    struct node* result=Searching(head,Key);
    if(result!=0)
    {
        printf("Element found: %d",result->data);
    }
    else
    {
        printf("\nElement not found");
    }
    return 0;
}