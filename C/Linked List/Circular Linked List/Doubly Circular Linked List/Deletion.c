//.............................Deletion from Beginning..............................

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
        struct node *prev;
    };
    struct node *head=0,*tail=0,*temp,*newnode; 
    int choice,count;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;
        if(head==0)
        {
            head=tail=newnode;
            tail->next=newnode;
            tail->prev=newnode;
        }
        else
        {
            newnode->prev=tail;
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }
        head->prev=newnode;
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);
    temp=head,count=0;
    printf("\nLinked List from Head to Tail: ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=head);
    printf("\n\nNumber of Nodes is: %d\n\n",count);
    temp=tail,count=0;
    printf("Linked List from Tail to Head: ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->prev;
        count++;
    }while(temp!=tail);
    printf("\n\nNumber of Nodes is: %d\n\n",count);
    printf("First Node: %d\n",tail->next->data);
    printf("Last Node: %d\n\n",head->prev->data);

    temp=head;
    head=head->next;
    head->prev=tail;
    tail->next=head;
    free(temp);
    temp=head,count=0;
    printf("\nLinked List from Head to Tail: ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=head);
    printf("\n\nNumber of Nodes is: %d\n\n",count);
    temp=tail,count=0;
    printf("Linked List from Tail to Head: ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->prev;
        count++;
    }while(temp!=tail);
    printf("\n\nNumber of Nodes is: %d\n\n",count);
    printf("First Node: %d\n",tail->next->data);
    printf("Last Node: %d\n\n",head->prev->data);
    return 0;
}
*/

//...............................Deletion from End...............................

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
        struct node *prev;
    };
    struct node *head=0,*tail=0,*temp,*newnode; 
    int choice,count;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;
        if(head==0)
        {
            head=tail=newnode;
            tail->next=newnode;
            tail->prev=newnode;
        }
        else
        {
            newnode->prev=tail;
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }
        head->prev=newnode;
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);
    temp=head,count=0;
    printf("\nLinked List from Head to Tail: ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=head);
    printf("\n\nNumber of Nodes is: %d\n\n",count);
    temp=tail,count=0;
    printf("Linked List from Tail to Head: ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->prev;
        count++;
    }while(temp!=tail);
    printf("\n\nNumber of Nodes is: %d\n\n",count);
    printf("First Node: %d\n",tail->next->data);
    printf("Last Node: %d\n\n",head->prev->data);

    temp=tail;
    tail=tail->prev;
    tail->next=head;
    head->prev=tail;
    free(temp);
    temp=head,count=0;
    printf("\nLinked List from Head to Tail: ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=head);
    printf("\n\nNumber of Nodes is: %d\n\n",count);
    temp=tail,count=0;
    printf("Linked List from Tail to Head: ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->prev;
        count++;
    }while(temp!=tail);
    printf("\n\nNumber of Nodes is: %d\n\n",count);
    printf("First Node: %d\n",tail->next->data);
    printf("Last Node: %d\n\n",head->prev->data);
    return 0;
}
*/

//................................Deletion from Specific Position.............................

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
        struct node *prev;
    };
    struct node *head=0,*tail=0,*temp,*newnode; 
    int choice,count;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;
        if(head==0)
        {
            head=tail=newnode;
            tail->next=newnode;
            tail->prev=newnode;
        }
        else
        {
            newnode->prev=tail;
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }
        head->prev=newnode;
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);
    temp=head,count=0;
    printf("\nLinked List from Head to Tail: ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=head);
    printf("\n\nNumber of Nodes is: %d\n\n",count);
    temp=tail,count=0;
    printf("Linked List from Tail to Head: ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->prev;
        count++;
    }while(temp!=tail);
    printf("\n\nNumber of Nodes is: %d\n\n",count);
    printf("First Node: %d\n",tail->next->data);
    printf("Last Node: %d\n\n",head->prev->data);
    
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
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
        temp=head,count=0;
        printf("\nLinked List from Head to Tail: ");
        do
        {
            printf("%d ",temp->data);
            temp=temp->next;
            count++;
        }while(temp!=head);
        printf("\n\nNumber of Nodes is: %d\n\n",count);
        temp=tail,count=0;
        printf("Linked List from Tail to Head: ");
        do
        {
            printf("%d ",temp->data);
            temp=temp->prev;
            count++;
        }while(temp!=tail);
        printf("\n\nNumber of Nodes is: %d\n\n",count);
        printf("First Node: %d\n",tail->next->data);
        printf("Last Node: %d\n\n",head->prev->data);
    }
    return 0;
}
*/