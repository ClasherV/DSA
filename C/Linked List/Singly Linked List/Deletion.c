//..................................Delteion from Beginning................................

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
    temp=head,count=0;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNUmber of Nodes is: %d\n\n",count);

    temp=head;
    head=head->next;
    free(temp);    
    printf("\nLinked List after Deletion from Beginning: ");
    temp=head,count=0;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNUmber of Nodes is: %d\n\n",count);
    return 0;
}
*/

//..................................Deletion from End........................................

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
    temp=head,count=0;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNUmber of Nodes is: %d\n\n",count);
    
    struct node *prevnode=0;
    temp=head;
    while(temp->next!=0)
    {
        prevnode=temp;
        temp=temp->next;
    }
    prevnode->next=0;
    free(temp);    
    printf("\nLinked List after Deletion from End: ");
    temp=head,count=0;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNUmber of Nodes is: %d\n\n",count);
    return 0;
}
*/

//....................................Deetion from Specific Position...........................

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
    temp=head,count=0;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNUmber of Nodes is: %d\n\n",count);
    
    int pos,i=1;
    printf("Enter the Position: ");
    scanf("%d",&pos);
    struct node *prevnode=0;
    temp=head;
    if(pos>count||pos<1)
    {
        printf("Invalid Position");
    }
    else
    {
        while(i<pos)
        {
            prevnode=temp;
            temp=temp->next;
            i++;
        }
        prevnode->next=temp->next;
        free(temp);    
        printf("\nLinked List after Deletion from Specific Position: ");
        temp=head,count=0;
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->next;
            count++;
        }
        printf("\n\nNUmber of Nodes is: %d\n\n",count);
    }
    return 0;
}
*/
