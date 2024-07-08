//....................................Deletion from Beginning................................

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

    temp=head;
    head=head->next;
    tail->next=head;
    free(temp);
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

//.....................................Deletion from End...................................

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

    temp=head;
    while(temp->next!=tail)
    {
        temp=temp->next;
    }
    tail=temp;
    temp=temp->next;
    tail->next=head;
    free(temp);
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

//..................................Deletion from Specific Position..........................

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

    struct node *nextnode;
    int pos,i=1;
    printf("Enter the Position: ");
    scanf("%d",&pos);
    if(pos>count||pos<1)
    {
        printf("Invalidd Position");
    }
    else
    {
        temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        nextnode=temp->next;
        temp->next=nextnode->next;
        free(nextnode);
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