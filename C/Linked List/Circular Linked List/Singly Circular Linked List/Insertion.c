//..................................Insertion at Beginning......................................

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head=0,*tail=0,*temp,*newnode;
    int choice,count;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=tail=temp=newnode;
            tail->next=newnode;
        }
        else
        {
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);
    temp=head,count=0;
    printf("\nLinked List: ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=tail->next);
    printf("\n\nNumber of Nodes is: %d\n\n",count);
    printf("First Node: %d\n\n",tail->next->data);

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->next=head;
    head=newnode;
    tail->next=newnode;
    temp=head,count=0;
    printf("\nLinked List: ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=tail->next);
    printf("\n\nNumber of Nodes is: %d\n\n",count);
    printf("First Node: %d\n\n",tail->next->data);
    return 0;
}
*/

//.................................Insertion at End......................................

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head=0,*tail=0,*temp,*newnode;
    int choice,count;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=tail=temp=newnode;
            tail->next=newnode;
        }
        else
        {
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);
    temp=head,count=0;
    printf("\nLinked List: ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=tail->next);
    printf("\n\nNumber of Nodes is: %d\n\n",count);
    printf("First Node: %d\n\n",tail->next->data);

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    tail->next=newnode;
    tail=newnode;
    newnode->next=head;
    temp=head,count=0;
    printf("\nLinked List: ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=tail->next);
    printf("\n\nNumber of Nodes is: %d\n\n",count);
    printf("First Node: %d\n\n",tail->next->data);
    return 0;
}
*/

//.......................................Insertion at Specific Position...................

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head=0,*tail=0,*temp,*newnode;
    int choice,count;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=tail=temp=newnode;
            tail->next=newnode;
        }
        else
        {
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);
    temp=head,count=0;
    printf("\nLinked List: ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=tail->next);
    printf("\n\nNumber of Nodes is: %d\n\n",count);
    printf("First Node: %d\n\n",tail->next->data);

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    int pos,i=1;
    printf("Enter the Position: ");
    scanf("%d",&pos);
    if(pos>count||pos<1)
    {
        printf("Invalid Position");
    }
    else
    {
        temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        temp=head,count=0;
        printf("\nLinked List: ");
        do
        {
            printf("%d ",temp->data);
            temp=temp->next;
            count++;
        }while(temp!=tail->next);
        printf("\n\nNumber of Nodes is: %d\n\n",count);
        printf("First Node: %d\n\n",tail->next->data);
    }
    return 0;
}
*/