//..................................Insertion at Beginning..................................

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
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data)
        temp=temp->next;
        count++;
    }

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->next=head;
    head=newnode;
    printf("\nLinked List after Insertion at Beginning: ");
    temp=head,count=0;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNumber of Nodes is: %d",count);
    return 0;
}
*/

//...........................................Insertion at End...........................................

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
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNUmber of Nodes is: %d\n\n",count);

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    printf("\nLinked List after Insertion at Ending: ");
    temp=head,count=0;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNumber of Nodes is: %d",count);
    return 0;
}
*/

//......................................Insertion at Specific Position......................

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
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNUmber of Nodes is: %d\n\n",count);

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    int pos,i=1;
    printf("Enter the Position: ");
    scanf("%d",&pos);
    temp=head;
    if(pos>count||pos<1)
    {
        printf("Invalid Position");
    }
    else
    {
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        printf("\nLinked List after Insertion at Specific Position: ");
        temp=head,count=0;
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->next;
            count++;
        }
        printf("\n\nNumber of Nodes is: %d",count);
    }
    return 0;
}
*/