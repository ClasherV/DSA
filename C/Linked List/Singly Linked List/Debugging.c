/***********
 Write a Program to construct a Circular (Singly & Doubly) linked list and to perform the following
 operations on it:
 
 a) The insertion operation
 i. At the front of a list
 ii. At the back of the list
 iii. At any position in the list
 
 b) The deletion operation
 i. At the front of a list
 ii. At the back of the list
 iii. At any position in the list
 
 c) Displaying all the nodes in the list


 *****************/
#include<stdio.h>
#include<stdlib.h>

void insert_at_beg()
{
    struct node
    {
int data;
struct node*next;
    };
    struct node*head,*newnode,*tail;
    head=0;
    int choice;
    int count=1;
 do
    {
    newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the data:");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0)
{
    head=tail=newnode;
}
else
{
tail->next=newnode;
tail=newnode;
}
tail->next=head;//last node k next m first node ka address daal do 
printf("Enter your choice(0,1):");
    scanf("%d",&choice);
    }
    while(choice);
//display the list 
printf("\n THE CIRCULR LINKED LIST:\n");
if(head==0)
{
    printf("the list is empty");
}
else{
    tail=head;
    while(tail->next!=head)
    {
        printf("%d\t",tail->data);
    tail=tail->next;
    count++;
    }
    printf("%d",tail->data);
    //1st elements print 
    //check the list is circular (last node connect with the 1st)
    printf("\ncheck the list is circular:");
    printf("%d",tail->next->data);
    printf("\nTotal Nodes:%d",count);
}
count=1;   
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter data which u wants to insert:");
scanf("%d",&newnode->data);
newnode->next=0;
newnode->next=head;
tail->next=newnode;
//PRINT THE INSERTED LIST BEGINNING 
printf(" \nINSERTED CIRCULAR LINKED LIST:\n ");
if(head==0)
{
    printf("the list is empty");
}
else{
    tail=head;
    while(tail->next!=head)
    {
        printf("%d\t",tail->data);
    tail=tail->next;
    count++;
    }
    printf("%d",tail->data);
    printf("\nTotal Nodes after insertion:%d",count);
} 
    
}

void insert_at_end()
{
    struct node
    {
int data;
struct node*next;
    };
    struct node*head,*newnode,*tail;
    head=0;
    int choice;
    int count=1;
 do
    {
    newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the data:");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0)
{
    head=tail=newnode;
}
else
{
tail->next=newnode;
tail=newnode;
}
tail->next=head;//last node k next m first node ka address daal do 
printf("Enter your choice(0,1):");
    scanf("%d",&choice);
    }
    while(choice);
//display the list 
printf("\n THE CIRCULR LINKED LIST:\n");
if(head==0)
{
    printf("the list is empty");
}
else{
    tail=head;
    while(tail->next!=head)
    {
        printf("%d\t",tail->data);
    tail=tail->next;
    count++;
    }
    printf("%d",tail->data);
    //1st elements print 
    //check the list is circular (last node connect with the 1st)
    printf("\ncheck the list is circular:");
    printf("%d",tail->next->data);
    printf("\nTotal Nodes:%d",count);
}
//INSERTION AT LAST  
count=1;
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter data which u wants to insert:");
scanf("%d",&newnode->data);
newnode->next=0;
newnode->next=head;
tail->next=newnode;
//PRINT THE INSERTED LIST 
printf(" \nINSERTED CIRCULAR LINKED LIST:\n ");
if(head==0)
{
    printf("the list is empty");
}
else{
    tail=head;
    while(tail->next!=head)
    {
        printf("%d\t",tail->data);
    tail=tail->next;
    count++;
    }
    printf("%d",tail->data);
    printf("\nTotal Nodes after insertion:%d",count);
}
}

void insert_at_pos()
{
    struct node
    {
int data;
struct node*next;
    };
    struct node*head,*newnode,*tail;
    head=0;
    int choice;
    int count=1;
 do
    {
    newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the data:");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0)
{
    head=tail=newnode;
}
else
{
tail->next=newnode;
tail=newnode;
}
tail->next=head;//last node k next m first node ka address daal do 
printf("Enter your choice(0,1):");
    scanf("%d",&choice);
    }
    while(choice);
//display the list 
printf("\n THE CIRCULR LINKED LIST:\n");
if(head==0)
{
    printf("the list is empty");
}
else{
    tail=head;
    while(tail->next!=head)
    {
        printf("%d\t",tail->data);
    tail=tail->next;
    count++;
    }
    printf("%d",tail->data);
    //1st elements print 
    //check the list is circular (last node connect with the 1st)
    printf("\ncheck the list is circular:");
    printf("%d",tail->next->data);
    printf("\nTotal Nodes:%d",count);
}
//INSERTION AT SPECIFIC POSITION 
int i=1,pos;
printf("\nEnter the position of insertion :");
scanf("%d",&pos);
if(pos>count)
{
    printf("\ninvalid position");
}
else{
    tail=head;
    while(i<pos-1)
    {
     tail=tail->next;
     i++;
    }
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter data which u wants to insert:");
scanf("%d",&newnode->data);
newnode->next=tail->next;
tail->next=newnode;
}
//PRINT THE INSERTED LIST 
printf(" \nINSERTED CIRCULAR LINKED LIST:\n ");
if(head==0)
{
    printf("the list is empty");
}
else{
    tail=head;
    while(tail->next!=head)
    {
        printf("%d\t",tail->data);
    tail=tail->next;
    count++;
    }
    printf("%d",tail->data);
    printf("\nTotal Nodes after insertion:%d",count+1);
}
}

void delete_at_beg()
{
    struct node
    {
int data;
struct node*next;
    };
    struct node*head,*newnode,*tail,*temp;
    head=0;
    int choice;
    int count=1;
 do
    {
    newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the data:");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0)
{
    head=tail=newnode;
}
else
{
tail->next=newnode;
tail=newnode;
}
tail->next=head;//last node k next m first node ka address daal do 
printf("Enter your choice(0,1):");
    scanf("%d",&choice);
    }
    while(choice);
//display the list 
printf("\n THE CIRCULR LINKED LIST:\n");
if(head==0)
{
    printf("the list is empty");
}
else{
    tail=head;
    while(tail->next!=head)
    {
        printf("%d\t",tail ->data);
    tail=tail->next;
    count++;
    }
    printf("%d",tail->data);
    //1st elements print 
    //check the list is circular (last node connect with the 1st)
    printf("\ncheck the list is circular:");
    printf("%d",tail->next->data);
    printf("\nTotal Nodes:%d",count);
}
//DELETION  AT BEGINNING  
count=1;
temp=head;
head=head->next;
temp->next=0;
free(temp);
tail->next=head;


//PRINT THE DELETED LIST
printf(" \nDELETED CIRCULAR LINKED LIST:\n ");
if(head==0)
{
    printf("the list is empty");
}
else{
    tail=head;
    while(tail->next!=head)
    {
        printf("%d\t",tail->data);
    tail=tail->next;
    count++;
    }
    printf("%d",tail->data);
    printf("\nTotal Nodes after insertion:%d",count);
}
}
void delete_at_end()
{
    struct node
    {
int data;
struct node*next;
    };
    struct node*head,*newnode,*tail,*temp;
    head=0;
    int choice;
    int count=1;
 do
    {
    newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the data:");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0)
{
    head=tail=newnode;
}
else
{
tail->next=newnode;
tail=newnode;
}
tail->next=head;//last node k next m first node ka address daal do 
printf("Enter your choice(0,1):");
    scanf("%d",&choice);
    }
    while(choice);
//display the list 
printf("\n THE CIRCULR LINKED LIST:\n");
if(head==0)
{
    printf("the list is empty");
}
else{
    tail=head;
    while(tail->next!=head)
    {
        printf("%d\t",tail ->data);
    tail=tail->next;
    count++;
    }
    printf("%d",tail->data);
    //1st elements print 
    //check the list is circular (last node connect with the 1st)
    printf("\ncheck the list is circular:");
    printf("%d",tail->next->data);
    printf("\nTotal Nodes:%d",count);
}
//DELETION  AT ENDING  
count=1;
temp=head;
while(temp->next!=tail)
{
    temp=temp->next;
}
temp->next=head;
tail->next=0;
free(tail);
tail=temp;
//PRINT THE DELETED LIST
printf(" \nDELETED CIRCULAR LINKED LIST:\n ");
if(head==0)
{
    printf("the list is empty");
}
else{
    tail=head;
    while(tail->next!=head)
    {
        printf("%d\t",tail->data);
    tail=tail->next;
    count++;
    }  
    printf("%d",tail->data);
    printf("\nTotal Nodes after insertion:%d",count);
}
}

void delete_at_pos()
{
    struct node
    {
int data;
struct node*next;
    };
    struct node*head,*newnode,*tail,*temp;
    head=0;
    int choice;
    int count=0;
 do
    {
    newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the data:");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0)
{
    head=tail=newnode;
}
else
{
tail->next=newnode;
tail=newnode;
}
tail->next=head;//last node k next m first node ka address daal do 
printf("Enter your choice(0,1):");
    scanf("%d",&choice);
    }
    while(choice);
//display the list 
printf("\n THE CIRCULR LINKED LIST:\n");
if(head==0)
{
    printf("the list is empty");
}
else{
    tail=head;
    while(tail->next!=head)
    {
        printf("%d\t",tail ->data);
    tail=tail->next;
    count++;
    }
    printf("%d",tail->data);
    //1st elements print 
    //check the list is circular (last node connect with the 1st)
    printf("\ncheck the list is circular:");
    printf("%d",tail->next->data);
}
//DELETION  AT SPECIFIC POSITION 
struct node*current;
int pos,i=1;
printf("\nEnter the position of deletion:");
scanf("%d",&pos);
if(pos>count)
{
    printf("invalid data");//current jissko delete krna ha 
}
else{
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    current=temp->next;
    temp->next=current->next;
    current->next=0;
    free(current);
current=temp;
}
//PRINT THE DELETED LIST
printf(" \nDELETED CIRCULAR LINKED LIST:\n ");
if(head==0)
{
    printf("the list is empty");
}
else{
    tail=head;
    while(tail->next!=head)
    {
        printf("%d\t",tail->data);
    tail=tail->next;
    }  
    printf("%d",tail->data);
}
}

int main()
{
    int ch;
    
   printf("      \n OPERATIONS ON CIRCULAR LINKED LIST:\n\n");
   printf(" Enter 1 to insert at beginning\n ");
printf("Enter 2 to insert at ending\n ");
       printf("Enter 3 to insert at position\n");
    printf(" Enter 4 to delete at beginning\n ");
     printf("Enter 5 to delete at ending\n ");
         printf("Enter 6 to delete at ending\n\n ");

       printf("Enter your choice:");
scanf("%d",&ch);
do{
switch (ch)
{
    case 1:
    printf("INSERTION AT BEGINNING \n");
    insert_at_beg();
    case 2:
    printf("INSERTION AT ENDING\n");
    insert_at_end();
    case 3:
    printf("INSERTION AT POSITION  \n");
    insert_at_pos();
    case 4:
    printf("DELETION  AT BEGINNING \n");
    delete_at_beg();
    case 5:
    printf("DELETION  AT ENDING \n");
    delete_at_end();
    case 6:
    printf("DELETION  AT POSITION \n");
    delete_at_pos();
    case 7:
    printf("CODE STOPPED!\n");
}
    
}
while(ch!=7);

}