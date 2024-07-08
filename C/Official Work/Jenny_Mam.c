/*
#include <stdio.h>
int main()
{
    int a=5;
    printf("%d",a);
    return 0;
}

// O/p: 5
*/

/*
#include <stdio.h>
int main()
{
    int n;
    printf("ENter the Size of Array 1: ");
    scanf("%d",&n);
    int a[n],b[50],c[5]={1,2,3,4,5},d[]={1,2,3,4,5},e[5];
    char f[10]={'a','b','c','d','e'};
    printf("\nEnter Elements of Array 5: \n\n");
    for(int i=0;i<5;i++)
    {
        printf("Enter 5th Array Element %d: ",i+1);
        scanf("%d",&e[i]);
    }
    printf("\nThe Array Elements are:  ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",e[i]);
    }
    return 0;
}

// O/p: ENter the Size of Array 1: 
//
//      Enter Elements of Array 5: 
//      
//      Enter 5th Array Element 1: 1
//      Enter 5th Array Element 2: 2
//      Enter 5th Array Element 3: 3
//      Enter 5th Array Element 4: 4
//      Enter 5th Array Element 5: 5
//      
//      The Array Elements are:  1 2 3 4 5
*/

/*
//Q Traversing of Array

#include <stdio.h>
int main()
{
    int a[50],size;
    printf("Enter how much Elements You want to Enter in the Array: ");
    scanf("%d",&size);
    printf("\nEnter the Array Elements: \n\n");
    for(int i=0;i<=size-1;i++)
    {
        printf("Enter the Array Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nThe Array Elements are: ");
    for(int i=0;i<=size-1;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

// O/p: Enter how much Elements You want to Enter in the Array: 5
//      
//      Enter the Array Elements:
//      
//      Enter the Array Element 1: 1
//      Enter the Array Element 2: 2
//      Enter the Array Element 3: 3
//      Enter the Array Element 4: 4
//      Enter the Array Element 5: 5
//      
//      The Array Elements are: 1 2 3 4 5
*/

/*
//Q Insertion of an Element in an Unsorted Array at any Position

//C Algorithm 1:

#include <stdio.h>
int main()
{
    int a[50],size,pos,num;
    printf("Enter how much Elements You want to Enter in the Array: ");
    scanf("%d",&size);
    printf("\nEnter the Array Elements: \n\n");
    for(int i=0;i<=size-1;i++)
    {
        printf("Enter the Array Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the New Element You want to Insert in the Array: ");
    scanf("%d",&num);
    do
    {
        printf("\nEnter the Position at which You want to Insert a New Element in the Array: ");
        scanf("%d",&pos);
        if(pos<0||pos>size+1)
        {
            printf("\nInvalid Position\n");
        }
    }while(pos<0||pos>size+1);
    for(int i=size-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    size++;
    printf("\nThe New Array Elements are: ");
    for(int i=0;i<=size-1;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

// O/p: Enter how much Elements You want to Enter in the Array: 5
//      
//      Enter the Array Elements:
//      
//      Enter the Array Element 1: 5
//      Enter the Array Element 2: 2
//      Enter the Array Element 3: 1
//      Enter the Array Element 4: 4
//      Enter the Array Element 5: 3
//      
//      Enter the New Element You want to Insert in the Array: 10
//      
//      Enter the Position at which You want to Insert a New Element in the Array: 3
//      
//      The New Array Elements are: 5 2 10 1 4 3

//                        Or

//C Algorithm 2

#include <stdio.h>
int main()
{
    int a[50],size,pos,num;
    printf("Enter how much Elements You want to Enter in the Array: ");
    scanf("%d",&size);
    printf("\nEnter the Array Elements: \n\n");
    for(int i=0;i<=size-1;i++)
    {
        printf("Enter the Array Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the New Element You want to Insert in the Array: ");
    scanf("%d",&num);
    do
    {
        printf("\nEnter the Position at which You want to Insert a New Element in the Array: ");
        scanf("%d",&pos);
        if(pos<0||pos>size+1)
        {
            printf("\nInvalid Position\n");
        }
    }while(pos<0||pos>size+1);
    a[size]=a[pos-1];
    a[pos-1]=num;
    size++;
    printf("\nThe New Array Elements are: \n\n");
    for(int i=0;i<=size-1;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
    
}

// O/p: Enter how much Elements You want to Enter in the Array: 5
//
//      Enter how much Elements You want to Enter in the Array: 5
//      
//      Enter the Array Elements:
//      
//      Enter the Array Element 1: 5
//      Enter the Array Element 2: 3
//      Enter the Array Element 3: 2
//      Enter the Array Element 4: 1
//      Enter the Array Element 5: 4
//      
//      Enter the New Element You want to Insert in the Array: 10
//      
//      Enter the Position at which You want to Insert a New Element in the Array: 3
//      
//      The New Array Elements are:
//      
//      5 3 10 1 4 2
*/

/*
//Q Insertion of an Element in an Unsorted Array at Specific Position

//Q(i) Insertion of an Element at the beginning of an Array

//C Algorithm 1

#include <stdio.h>
int main()
{
    int a[50],size,num;
    printf("Enter how much Elements You want to Enter in the Array: ");
    scanf("%d",&size);
    printf("\nEnter the Array Elements: \n\n");
    for(int i=0;i<=size-1;i++)
    {
        printf("Enter the Array Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the New Element You want to Insert in the Array: ");
    scanf("%d",&num);
    for(int i=size-1;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]=num;
    size++;
    printf("\nThe New Array Elements are: ");
    for(int i=0;i<=size-1;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

// O/p: Enter how much Elements You want to Enter in the Array: 5
//      
//      Enter the Array Elements:
//      
//      Enter the Array Element 1: 5
//      Enter the Array Element 2: 2
//      Enter the Array Element 3: 1
//      Enter the Array Element 4: 4
//      Enter the Array Element 5: 3
//      
//      Enter the New Element You want to Insert in the Array: 10
//      
//      The New Array Elements are: 10 5 2 1 4 3

//                               Or

//C Algorithm 2

#include <stdio.h>
int main()
{
    int a[50],size,num;
    printf("Enter how much Elements You want to Enter in the Array: ");
    scanf("%d",&size);
    printf("\nEnter the Array Elements: \n\n");
    for(int i=0;i<=size-1;i++)
    {
        printf("Enter the Array Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the New Element You want to Insert in the Array: ");
    scanf("%d",&num);
    a[size]=a[0];
    a[0]=num;
    size++;
    printf("\nThe New Array Elements are: ");
    for(int i=0;i<=size-1;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

// O/p: Enter how much Elements You want to Enter in the Array: 5
//      
//      Enter how much Elements You want to Enter in the Array: 5
//      
//      Enter the Array Elements:
//      
//      Enter the Array Element 1: 5
//      Enter the Array Element 2: 2
//      Enter the Array Element 3: 4
//      Enter the Array Element 4: 1
//      Enter the Array Element 5: 3
//      
//      Enter the New Element You want to Insert in the Array: 10
//      
//      The New Array Elements are: 10 2 4 1 3 5

//Q(ii) Insertion of an Element at the ending of an Array

#include <stdio.h>
int main()
{
    int a[50],size,num;
    printf("Enter how much Elements You want to Enter in the Array: ");
    scanf("%d",&size);
    printf("\nEnter the Array Elements: \n\n");
    for(int i=0;i<=size-1;i++)
    {
        printf("Enter the Array Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the New Element You want to Insert in the Array: ");
    scanf("%d",&num);
    a[size]=num;
    size++;
    printf("\nThe New Array Elements are: ");
    for(int i=0;i<=size-1;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

// O/p: Enter how much Elements You want to Enter in the Array: 5
//      
//      Enter the Array Elements:
//      
//      Enter the Array Element 1: 5
//      Enter the Array Element 2: 2
//      Enter the Array Element 3: 1
//      Enter the Array Element 4: 4
//      Enter the Array Element 5: 3
//      
//      Enter the New Element You want to Insert in the Array: 10
//      
//      The New Array Elements are: 5 2 1 4 3 10
*/

/*
//Q Deletion of an Element from an Unsorted Array from any Position

//C Algorithm 1

#include <stdio.h>
int main()
{
    int a[50],size,pos;
    printf("Enter how much Elements You want to Enter in the Array: ");
    scanf("%d",&size);
    printf("\nEnter the Array Elements: \n\n");
    for(int i=0;i<=size-1;i++)
    {
        printf("Enter the Array Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    do
    {
        printf("\nEnter the Position from which You want to Delete an Element from the Array: ");
        scanf("%d",&pos);
        if(pos<0||pos>size+1)
        {
            printf("\nInvalid Position\n");
        }
    }while(pos<0||pos>size+1);
    for(int i=pos-1;i<=size;i++)
    {
        a[i]=a[i+1];
    }
    size--;
    printf("\nThe New Array Elements are: ");
    for(int i=0;i<=size-1;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

// O/p: Enter how much Elements You want to Enter in the Array: 5
//      
//      Enter the Array Elements:
//      
//      Enter the Array Element 1: 5
//      Enter the Array Element 2: 2
//      Enter the Array Element 3: 1
//      Enter the Array Element 4: 4
//      Enter the Array Element 5: 3
//      
//      Enter the Position from which You want to Delete an Element from the Array: 3
//      
//      The New Array Elements are: 5 2 4 3

//                          Or

//C Algorithm 2

#include <stdio.h>
int main()
{
    int a[50],size,pos;
    printf("Enter how much Elements You want to Enter in the Array: ");
    scanf("%d",&size);
    printf("\nEnter the Array Elements: \n\n");
    for(int i=0;i<=size-1;i++)
    {
        printf("Enter the Array Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    do
    {
        printf("\nEnter the Position from which You want to Delete an Element from the Array: ");
        scanf("%d",&pos);
        if(pos<0||pos>size+1)
        {
            printf("\nInvalid Position\n");
        }
    }while(pos<0||pos>size+1);
    a[pos-1]=a[size-1];
    size--;
    printf("\nThe New Array Elements are: ");
    for(int i=0;i<=size-1;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

// O/p: Enter how much Elements You want to Enter in the Array: 5
//      
//      Enter the Array Elements:
//      
//      Enter the Array Element 1: 5
//      Enter the Array Element 2: 2
//      Enter the Array Element 3: 1
//      Enter the Array Element 4: 3 
//      Enter the Array Element 5: 4
//      
//      Enter the Position from which You want to Delete an Element from the Array: 3
//      
//      The New Array Elements are: 5 2 4 3
*/

/*
//Q Deleteion of an Element from an Unsorted Array from Specific Position

//Q(i) Deletion of an Element from an Array from beginning

//C Algortihm 1

#include <stdio.h>
int main()
{
    int a[50],size;
    printf("Enter how much Elements You want to Enter in the Array: ");
    scanf("%d",&size);
    printf("\nEnter the Array Elements: \n\n");
    for(int i=0;i<=size-1;i++)
    {
        printf("Enter the Array Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=size;i++)
    {
        a[i]=a[i+1];
    }
    size--;
    printf("\nThe New Array Elements are: ");
    for(int i=0;i<=size-1;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

// O/p: Enter how much Elements You want to Enter in the Array: 5
//      
//      Enter the Array Elements:
//      
//      Enter the Array Element 1: 5
//      Enter the Array Element 2: 2
//      Enter the Array Element 3: 1
//      Enter the Array Element 4: 3
//      Enter the Array Element 5: 4
//      
//      The New Array Elements are: 2 1 3 4

//                          Or

//C Algorithm 2

#include <stdio.h>
int main()
{
    int a[50],size;
    printf("Enter how much Elements You want to Enter in the Array: ");
    scanf("%d",&size);
    printf("\nEnter the Array Elements: \n\n");
    for(int i=0;i<=size-1;i++)
    {
        printf("Enter the Array Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    a[0]=a[size-1];
    size--;
    printf("\nThe New Array Elements are: ");
    for(int i=0;i<=size-1;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

// O/p; Enter how much Elements You want to Enter in the Array: 5
//      
//      Enter the Array Elements:  
//      
//      Enter the Array Element 1: 5
//      Enter the Array Element 2: 2
//      Enter the Array Element 3: 1
//      Enter the Array Element 4: 3
//      Enter the Array Element 5: 4
//      
//      The New Array Elements are: 4 2 1 3

//Q(ii) Deletion of an Element from an Unsorted Array from the end

//C Algorithm 1

//O/p: 

//C Algorithm 2

// O/p:
*/

/*
#include <stdio.h>
int main()
{
    int b=10;
    int* p;
    p=&b;
    printf("%d %d\n",b,*p);
    printf("%p %p",&b,p);
    return 0;
}

// O/p: 10 10
//      0061FF18 0061FF18
*/

/*
#include <stdio.h>
int main()
{
    int a[]={6,2,1,5,3};
    int*q;
    q=a;
    printf("%p %p %d\n",a,q,q);
    q++;
    printf("%d %p %p\n",q,&a,&q);
    printf("%d %d %d\n",a[2],*(a+2),*(q+1));
    return 0;
}

// O/p: 0061FF0C 0061FF0C 6422284
//      6422288 0061FF0C 0061FF08
//      1 1 1
*/

/*
#include <stdio.h>
int main()
{

    int a[]={6,2,1,5,3};
    int*q;
    q=a;
    printf("%d %d %d %d %d %d %d\n",a[2],*(a+2),*(q+2),*(2+a),2[a],*(2+q),2[q]);
    printf("%p %p %p\n",a+1,&a+1,&a[0]+1);
    printf("%d %d %d\n",*a,*(a+1),*a+1);
    return 0;
}

// O/p: 1 1 1 1 1 1 1
//      0061FEFC 0061FF0C 0061FEFC
//      6 2 7
*/

/*
#include <stdio.h>
int main()
{
    int a[5];
    int*q=a;
    for(int i=0;i<5;i++)
    {
        printf("Enter Elements:");
        scanf("%d",&q[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",*(q+i));
    }
    return 0;
}

// O/p: Enter Elements:1
//      Enter Elements:2
//      Enter Elements:3
//      Enter Elements:4
//      Enter Elements:5
//      1 2 3 4 5
*/

/*
#include <stdio.h>
int main()
{
    int a[2][3]={1,2,3,4,5,6};
    int b[2][3]={{1,2,3},{4,5,6}};
    int c[][3]={{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
    }
    return 0;
}

// O/p: 1 2 3 4 5 6 
//      1 2 3 4 5 6
//      1 2 3 4 5 6
*/

/*
#include <stdio.h>
int main()
{
    int a[2][3];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter the Array Element %d: ",i+1);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n\n\n");
    }
    return 0;
}

// O/p: 1       2       3
//
//
//      4       5       6
*/

/*
#include <stdio.h>
int main()
{
    int a[3][3]={{6,2,5},{0,1,3},{4,9,8}};
    int *p,*q;
    p=&a[0][0];
    q=a[0];
    printf("%d %d %d %d %d %d\n",p,a,&a[0][0],&a,*a,a[0]);
    printf("%d %d %d\n",a+1,&a[1],*(a+1),a[1],&a[1][0]);
    printf("%d %d %d %d %d %d\n",*(a+1)+2,*(*(a+1)+2),a[1][2],*(*(a+2)+0),a[2][0],*(a[1]+2));
    printf("%d %d\n",*(*a+1),**a);
    printf("%d %d\n",a[1]+1,&a[1]+1);
    printf("%d %d\n",a+1,&a+1);
    return 0;
}

// O/p: 6422244 6422244 6422244 6422244 6422244 6422244
//      6422256 6422256 6422256
//      6422264 3 3 4 4 3
//      2 6
//      6422260 6422268
//      6422256 6422280
*/

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node* next;
    };
    struct node *head,*newnode,*temp;
    head=0;
    int choice,count=0;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Data: ");
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
    }while(choice);
    temp=head;
    printf("Linked List = [ ");
    while(temp!=0)
    {
        printf("|%d| ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("]\n\nNodes=%d",count);
    return 0;
}

// O/p: Enter Data: 5
//      
//      Do You want to Continue? (0,1): 1
//      
//      Enter Data: 10
//      
//      Do You want to Continue? (0,1): 1
//      
//      Enter Data: 15
//      
//      Do You want to Continue? (0,1): 0
//      
//      Linked List = [ |5| |10| |15| ]
//      
//      Nodes=3
*/

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node* next;
    };
    struct node *head,*temp,*newnode;
    head=0;
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
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);
    temp=head;
    printf("Linked List= ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNodes=%d\n\n",count);

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data You want to Insert at Beginning: ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    temp=head;
    count=0;
    printf("\nLinked List= ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNodes=%d\n\n",count);
}

// O/p: Enter the Data: 2
//      
//      Do You want to Continue? (0,1): 1
//      
//      Enter the Data: 3
//      
//      Do You want to Continue? (0,1): 1
//      
//      Enter the Data: 4
//      
//      Do You want to Continue? (0,1): 0
//      
//      Linked List= 2 3 4
//      
//      Nodes=3
//      
//      Enter the Data You want to Insert at Beginning: 1
//
//      Linked List= 1 2 3 4 
//      
//      Nodes=4
//      
*/

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node* next;
    };
    struct node *head,*temp,*newnode;
    head=0;
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
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);
    temp=head;
    printf("Linked List= ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNodes=%d\n\n",count);

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data You want to Insert at End: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp=head;
    count=0;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    temp=head;
    printf("\nLinked List= ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNodes=%d\n\n",count);
}

// O/p: Enter the Data: 1
//      
//      Do You want to Continue? (0,1): 1
//      
//      Enter the Data: 2
//      
//      Do You want to Continue? (0,1): 1
//      
//      Enter the Data: 3
//      
//      Do You want to Continue? (0,1): 0
//      
//      Linked List= 1 2 3
//      
//      Nodes=3
//      
//      Enter the Data You want to Insert at End: 4
//      
//      Linked List= 1 2 3 4
//      
//      Nodes=4
//      
*/

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node* next;
    };
    struct node *head,*temp,*newnode;
    head=0;
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
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);
    temp=head;
    printf("Linked List= ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNodes=%d\n\n",count);

    int pos,i=1;
    count=0,temp=head;
    printf("Enter the Postion: ");
    scanf("%d",&pos);
    while(temp!=0)
    {
        temp=temp->next;
        count++;
    }
    if(pos>count)
    {
        printf("Invalid Position");
    }
    else
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
    }
    printf("Enter the Data You want to Insert after Position %d: ",pos);
    scanf("%d",&newnode->data);
    newnode->next=temp->next;
    temp->next=newnode;
    temp=head;
    count=0;
    printf("\nLinked List= ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNodes=%d\n\n",count);
}

// O/p: Enter the Data: 1
//      
//      Do You want to Continue? (0,1): 1
//      
//      Enter the Data: 2
//      
//      Do You want to Continue? (0,1): 1
//      
//      Enter the Data: 4
//      
//      Do You want to Continue? (0,1): 1
//      
//      Enter the Data: 5
//      
//      Do You want to Continue? (0,1): 0
//      
//      Linked List= 1 2 4 5
//      
//      Nodes=4
//      
//      Enter the Postion: 3
//      Enter the Data You want to Insert after Position 3: 3
//      
//      Linked List= 1 2 3 4 5
//      
//      Nodes=5
//      
*/  

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
    struct node *head,*temp,*newnode;
    head=0;
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
        printf("\nDo You want to continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);
    temp=head;
    printf("\nLinked List= ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNodes=%d\n\n",count);

    temp=head;
    head=head->next;
    free(temp);
    temp=head,count=0;
    printf("\nLinked List= ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNodes=%d\n\n",count);
}

// O/p: Enter the Data: 1
//      
//      Do You want to continue? (0,1): 1
//      
//      Enter the Data: 2
//      
//      Do You want to continue? (0,1): 1
//      
//      Enter the Data: 3
//      
//      Do You want to continue? (0,1): 0
//      
//      
//      Linked List= 1 2 3
//      
//      Nodes=3
//      
//      
//      Linked List= 2 3
//      
//      Nodes=2
//      
*/

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node 
    {
        int data;
        struct node* next;
    };
    struct node *head=0,*temp,*newnode,*prevnode;
    int choice,count=0;
    do
    {
        newnode=((struct node*)malloc(sizeof(struct node)));
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
    }while(choice);
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNodes=%d\n\n",count);

    temp=head,prevnode=temp;
    while(temp->next!=0)
    {
        prevnode=temp;
        temp=temp->next;
    }
    if(temp==head)
    {
        head=0;
    }
    else
    {
        prevnode->next=0;
    }
    free(temp);
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n\nNodes=%d\n\n",count);
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node 
    {
        int data;
        struct node* next;
    };
    struct node *head=0,*temp,*newnode,*prevnode;
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
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNodes=%d\n\n",count);

    struct node *nextnode;
    int pos,i=1;
    temp=head;
    printf("Enter the Position: ");
    scanf("%d",&pos);
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);

    temp=head,count=0;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNodes=%d\n\n",count);

}
*/

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node* next;
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
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
    }while(choice);

    temp=head;
    printf("\nLinked List= ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nLength of List= %d",count);
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
void main()
{
    struct node
    {
        int data;
        struct node* next;
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
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);
    temp=head;
    printf("Linked List= ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNodes=%d\n\n",count);

    struct node *prevnode,*currentnode,*nextnode;
    prevnode=0,currentnode=head,nextnode=currentnode;
    while(currentnode!=0)
    {
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    head=prevnode;

    temp=head,count=0;
    printf("Linked List= ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNodes=%d\n\n",count);
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node* next;
        struct node* prev;
    };
    struct node *head=0,*temp,*newnode;
    int choice,count=0;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=temp->next;
        }
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);
    
    temp=head;
    printf("\nLinked List= ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNodes=%d\n",count);
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node* next;
        struct node* prev;
    };
    struct node *head=0,*temp,*newnode,*tail;
    int choice,count=0;
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
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);
    temp=head;
    printf("Linked List= ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNodes=%d\n\n",count);

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    newnode->prev=0;
    head=newnode;
    temp=head,count=0;
    printf("Linked List= ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNodes=%d\n\n",count);

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=tail;
    tail->next=newnode;
    tail=newnode;
    temp=head,count=0;
    printf("Linked List= ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNodes=%d\n\n",count);

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    int pos,i=1;
    temp=head;
    printf("Enter the Position: ");
    scanf("%d",&pos);
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    newnode->prev=temp;
    temp->next=newnode;
    newnode->next->prev=newnode;
    temp=head,count=0;
    printf("Linked List= ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNodes=%d\n\n",count);
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node* next;
        struct node* prev;
    };
    struct node *head=0,*temp,*newnode,*tail;
    int choice,count=0;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;
        if(head==0)
        {
            head=temp=tail=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);

    printf("Linked List= ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNodes=%d\n\n",count);

    temp=head;
    head=head->next;
    head->prev=0;
    free(temp);

    temp=head,count=0;
    printf("Linked List= ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNodes=%d\n\n",count);

    temp=tail;
    tail->prev->next=0;
    tail=tail->prev;
    free(temp);

    temp=head,count=0;
    printf("Linked List= ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNodes=%d\n\n",count);

    temp=head;
    int pos,i=1;
    printf("Enter the Position: ");
    scanf("%d",&pos);
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);

    temp=head,count=0;
    printf("Linked List= ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNodes=%d\n\n",count);
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node* next;
        struct node* prev;
    };
    struct node *head=0,*tail,*temp,*newnode;
    int choice,count=0;
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
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);

    temp=head;
    printf("Linked List= ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNodes=%d\n\n",count);

    struct node *current,*nextnode;
    current=head;
    while(current!=0)
    {
        nextnode=current->next;
        current->next=current->prev;
        current->prev=nextnode;
        current=nextnode;
    }
    temp=head;
    head=tail;
    tail=temp;

    temp=head,count=0;
    printf("Linked List= ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNodes=%d\n\n",count);
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node* next;
        struct node* prev;
    };
    struct node *head=0,*tail,*temp,*newnode;
    int choice,count=1;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        temp->next=head;
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);

    temp=head;
    printf("Linked List= ");
    while(temp->next!=head)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("%d",temp->data);
    printf("\n\nNodes=%d\n\n",count);
}
*/

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
    struct node *head,*tail,*temp,*newnode;
    tail=0;
    int choice,count=0;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(tail==0)
        {
           head=tail=temp=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
        tail->next=head;
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);

    temp=head;
    printf("Linked List= ");
    while(temp!=tail)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }  
    printf("%d ",temp->data);
    printf("\n\nNodes=%d\n\n",count);
}

                OR

#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *tail,*temp,*newnode;
    tail=0;
    int choice,count=0;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(tail==0)
        {
           tail=newnode;
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

    temp=tail->next;
    printf("Linked List= ");
    while(temp->next!=tail->next)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }  
    printf("%d ",temp->data);
    printf("\n\nNodes=%d\n\n",count);
}

                        OR

#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *tail,*temp,*newnode;
    tail=0;
    int choice,count=0;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(tail==0)
        {
           tail=newnode;
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

    temp=tail->next;
    printf("Linked List= ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=tail->next);  
    printf("\n\nNodes=%d\n\n",count);
}
*/

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
    struct node *tail,*temp,*newnode;
    tail=0;
    int choice,count=0;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(tail==0)
        {
           tail=newnode;
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

    temp=tail->next;
    printf("Linked List= ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=tail->next);  
    printf("\n\nNodes=%d\n\n",count);

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(tail==0)
    {
        tail=newnode;
        tail->next=newnode;
    }
    else
    {
        newnode->next=tail->next;
        tail->next=newnode;
    }

    temp=tail->next,count=0;
    printf("\nLinked List= ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=tail->next);  
    printf("\n\nNodes=%d\n\n",count);

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(tail==0)
    {
        tail=newnode;
        tail->next=newnode;
    }
    else
    {
        newnode->next=tail->next;
        tail->next=newnode;
        tail=newnode;
    }
    
    temp=tail->next,count=0;
    printf("\nLinked List= ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=tail->next);  
    printf("\n\nNodes=%d\n\n",count);

    int pos,i=1;
    temp=tail->next;
    printf("Enter the Position: ");
    scanf("%d",&pos);
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(tail==0)
    {
        tail=newnode;
        tail->next=newnode;
    }
    else
    {
        newnode->next=temp->next;
        temp->next=newnode;
    }
    
    temp=tail->next,count=0;
    printf("\nLinked List= ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=tail->next);  
    printf("\n\nNodes=%d\n\n",count);
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node* next;
    };
    struct node *tail=0,*temp,*newnode;
    int choice,count=0;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(tail==0)
        {
            tail=temp=newnode;
            tail->next=newnode;
        }
        else
        {
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }
        printf("\nDo You wan to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);

    temp=tail->next;
    printf("Linked List= ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=tail->next);
    printf("\n\nNodes=%d\n\n",count);

    temp=tail->next;
    tail->next=temp->next;
    free(temp);

    temp=tail->next,count=0;
    printf("Linked List= ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=tail->next);
    printf("\n\nNodes=%d\n\n",count);

    struct node *prev,*current;
    current=tail->next;
    while(current->next!=tail->next)
    {
        prev=current;
        current=current->next;
    }
    prev->next=tail->next;
    tail=prev;
    free(current);

    temp=tail->next,count=0;
    printf("Linked List= ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=tail->next);
    printf("\n\nNodes=%d\n\n",count);
    
    struct node* nextnode;
    int pos,i=1;
    current=tail->next;
    printf("Enter the Position: ");
    scanf("%d",&pos);
    while(i<pos-1)
    {
        current=current->next;
        i++;
    }
    nextnode=current->next;
    current->next=nextnode->next;
    free(nextnode);

    temp=tail->next,count=0;
    printf("Linked List= ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=tail->next);
    printf("\n\nNodes=%d\n\n",count);
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node* next;
    };
    struct node *tail=0,*newnode;
    int choice,count=0;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(tail==0)
        {
            tail=newnode;
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

    struct node *temp;
    temp=tail->next;
    printf("Linked List= ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=tail->next);
    printf("\n\nNodes=%d\n\n",count);

    struct node *prevnode,*currentnode,*nextnode;
    currentnode=tail->next;
    nextnode=currentnode->next;
    while(currentnode!=tail)
    {
        prevnode=currentnode;
        currentnode=nextnode;
        nextnode=currentnode->next;
        currentnode->next=prevnode;
    }
    nextnode->next=tail;
    tail=nextnode;
    
    temp=tail->next,count=0;
    printf("Linked List= ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=tail->next);
    printf("\n\nNodes=%d\n\n",count);
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node* next;
        struct node* prev;
    };
    struct node *head=0,*tail,*newnode,*temp;
    int choice,count=0;
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
            head->next=head;
            head->prev=head;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            newnode->next=head;
            head->prev=newnode;
            tail=newnode;
        }
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);

    temp=head;
    printf("Linked List= ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=head);
    printf("\n\nNodes=%d\n\n",count);

    printf("%d %d",tail->next->data,head->prev->data);
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node* next;
        struct node* prev;
    };
    struct node *head=0,*tail,*newnode,*temp;
    int choice,count=0;
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
            head->next=head;
            head->prev=head;
        }
        else
        {
            newnode->next=head;
            head->prev=newnode;
            tail->next=newnode;
            newnode->prev=tail;
            tail=tail->next;
        }
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);

    temp=head;
    printf("Linked List= ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=head);
    printf("\n\nNodes=%d\n\n",count);
    printf("%d %d",head->prev->data,tail->next->data);

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n\nEnter the Data: ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
    newnode->prev=tail;
    tail->next=newnode;

    temp=head,count=0;
    printf("\nLinked List= ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=head);
    printf("\n\nNodes=%d\n\n",count);
    printf("%d %d",head->prev->data,tail->next->data);

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n\nEnter the Data: ");
    scanf("%d",&newnode->data);
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
    newnode->next=head;
    head->prev=newnode;

    temp=head,count=0;
    printf("\nLinked List= ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=head);
    printf("\n\nNodes=%d\n\n",count);
    printf("%d %d",head->prev->data,tail->next->data);

    temp=head;
    int pos,i=1;
    printf("\n\nEnter the Position: ");
    scanf("%d",&pos);
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the Data: ");
    scanf("%d",&newnode->data);
    newnode->next=temp->next;
    newnode->prev=temp;
    newnode->next->prev=newnode;
    temp->next=newnode;

    temp=head,count=0;
    printf("\nLinked List= ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=head);
    printf("\n\nNodes=%d\n\n",count);
    printf("%d %d",head->prev->data,tail->next->data);
}
*/

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
    struct node *head=0,*tail,*newnode,*temp;
    int choice,count=0;
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
            head->prev=head;
            head->next=head;
        }
        else
        {
            newnode->next=head;
            head->prev=newnode;
            tail->next=newnode;
            newnode->prev=tail;
            tail=tail->next;
        }
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);

    temp=head;
    printf("Linked List= ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=head);
    printf("\n\nNodes=%d\n\n",count);
    printf("%d %d\n\n",head->prev->data,tail->next->data);

    temp=head;
    head=head->next;
    head->prev=tail;
    tail->next=head;
    free(temp);

    temp=head,count=0;
    printf("Linked List= ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=head);
    printf("\n\nNodes=%d\n\n",count);
    printf("%d %d\n\n",head->prev->data,tail->next->data);

    temp=head;
    int pos,i=1;
    printf("Enter the Position: ");
    scanf("%d",&pos);
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    free(temp);

    temp=head,count=0;
    printf("Linked List= ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=head);
    printf("\n\nNodes=%d\n\n",count);
    printf("%d %d\n\n",head->prev->data,tail->next->data);
}
*/

/*
#include <stdio.h>
#define N 5
int stack[N];
int top=-1; 
int main()
{
    printf("Push: \n\n");
    int x;
    for(int i=0;i<=N-1;i++)
    {
        printf("Enter the Data: ");
        scanf("%d",&x);
        if(top==N-1)
        {
            printf("Overflow\n\n");
        }
        else
        {
            top++;
            stack[top]=x;
        }
    }

    printf("\nDisplay: \n\n");
    for(int i=top;i>=0;i--)
    {
        if(top==-1)
        {
            printf("Underflow\n\n");
        }
        else
        {
            printf("%d ",stack[top]);
            top--;
        }
    }
    
    printf("\n\nPeek: \n\n");
    top=N-1;
    if(top==-1)
    {
        printf("Stack is Empty\n\n");
    }
    else
    {
        printf("%d \n",stack[top]);
    }
    
    printf("\n\nPop: \n\n");
    int item;
    if(top==-1)
    {
        printf("Underflow\n\n");
    }
    else
    {
        item=stack[top];
        top--;
        printf("%d\n",item);
    }

    printf("\nDisplay: \n\n");
    for(int i=top;i>=0;i--)
    {
        if(top==-1)
        {
            printf("Underflow\n\n");
        }
        else
        {
            printf("%d ",stack[top]);
            top--;
        }
    }
}
*/

/*
#include <stdio.h>
#define N 5
int stack[N];
int top=-1; 
void push()
{
    int x;
    printf("Enter the Data: ");
    scanf("%d",&x);
    if(top==N-1)
    {
        printf("Overflow\n");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("Underflow\n");
    }
    else
    {
        item=stack[top];
        top--;
        printf("Popped Item = %d\n",item);
    }
}
void peek()
{
    if(top==-1)
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("%d\n",stack[top]);
    }
}
void display()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
}
int main()
{
    push();
    pop();
    peek();
    display();
    return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
#define N 5
int stack[N];
int top=-1; 
void push()
{
    int x;
    printf("Enter the Data: ");
    scanf("%d",&x);
    if(top==N-1)
    {
        printf("Overflow\n");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("Underflow\n");
    }
    else
    {
        item=stack[top];
        top--;
        printf("Popped Item = %d\n",item);
    }
}
void peek()
{
    if(top==-1)
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("%d\n",stack[top]);
    }
}
void display()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
}
int main()
{
    int ch;
    do
    {
        printf("Enter Choice: 1.Push 2.Pop 3. Peek 4.Display");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: peek();
                    break;
            case 4: display();
                    break;
            default: printf("Invalid Choice"); 
        }
    }while(ch!=0);
    getch();
    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* top=0;
void push(int x)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}
void display()
{
    struct node *temp;
    temp=top;
    if(top==0)
    {
        printf("List is Empty");
    }
    else
    {
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->link;
        }
    }
}
void peek()
{
    if(top==0)
    {
        printf("List is Empty");
    }
    else
    {
        printf("Top Element is %d",top->data);
    }
}
void pop()
{
    struct node *temp;
    temp=top;
    if(top==0)
    {
        printf("List is Empty");
    }
    else
    {
        printf("%d",top->data);
        top=top->link;
        free(temp);
    }
}
void main()
{
    push(2);
    push(1);
    push(10);
    display();
    peek();
    pop();
    peek();
    display();
    return 0;
}
*/

/*
#include <stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int x)
     {
         if(rear==N-1)
         {
             printf("Overflow");
         }
         else if(front==-1&&rear==-1)
         {
             front=rear=0;
             queue[rear]=x;
         }
         else
         {
             rear++;
             queue[rear]=x;
         }
     }
void dequeue()
     {
         if(front==-1&&rear==-1)
         {
             printf("Underflow");
         }
         else if(front==rear)
         {
             front=rear=-1;
         }
         else
         {
             printf("Dequeued Element is %d",queue[front]);
             front++;
         }
     }
void display()
     {
         if(front==-1&&rear==-1)
         {
             printf("Underflow");
         }
         else
         {
             for(int i=front;i<rear+1;i++)
             {
                 printf("%d ",queue[i]);
             }
         }
     }
void peek()
     {
         if(front==-1&&rear==-1)
         {
             printf("Underflow");
         }
         else
         {
             printf("Front Element is %d",queue[front]);
         }
     }
int main()
{
    for(int i=1;i<N;i++)
    {
        enqueue(i);
    }
    display();
    printf("\n");
    peek();
    printf("\n");
    dequeue();
    printf("\n");
    peek();
    printf("\n");
    display();
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front,*rear;
void enqueue(int x)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if(front==0&&rear==0)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void display()
{
    struct node *temp;
    if(front==0&&rear==0)
    {
        printf("Queue is Empty");
    }
    else
    {
        temp=front;
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
void dequeue()
{
    struct node *temp;
    temp=front;
    if(front==0&&rear==0)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("%d",front->data);
        front=front->next;
        free(temp);
    }
}
void peek()
{
    if(front==0&&rear==0)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("%d",front->data);
    }
}
int main()
{
    for(int i=0;i<5;i++)
    {
        enqueue(i);
    }
    printf("\n");
    display();
    printf("\n");
    dequeue();
    printf("\n");
    peek();
}
*/

/*
#include <stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int x)
{
    if(front==-1&&rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else if((rear+1)%N==front)
    {
        printf("Queue is Full\n");
    }
    else
    {
        rear=(rear+1)%N;
        queue[rear]=x;
    }
}
void dequeue()
{
    if(front==-1&&rear==-1)
    {
        printf("Queue is Empty");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        printf("Dequeued Element is %d",queue[front]);
        front=(front+1)%N;
    }
}
void display()
{
    int i=front;
    if(front==-1&&rear==-1)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("Queue is ");
        while(i!=rear)
        {
            printf("%d ",queue[i]);
            i=(i+1)%N;
        }
        printf("%d",queue[rear]);
    }
}
void peek()
{
    if(front==-1&&rear==-1)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("%d",queue[front]);
    }
}
int main()
{
    enqueue(2);
    enqueue(-1);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    display();
    printf("\n");
    dequeue();
    printf("\n");
    dequeue();
    printf("\n");
    enqueue(0);
    enqueue(10);
    display();
    printf("\n");
    enqueue(11);
    peek();
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;
void enqueue(int x)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if(rear==0)
    {
        front=rear=newnode;
        rear->next=front;
    }
    else
    {
        rear->next=newnode;
        rear=rear->next;
        rear->next=front;
    }
}
void dequeue()
{
    struct node *temp;
    temp=front;
    if(front==0&&rear==0)
    {
        printf("Queue is Empty\n");
    }
    else if(front==rear)
    {
        front=rear=0;
        free(temp);
    }
    else
    {
        front=front->next;
        rear->next=front;
        free(temp);
    }
}
void peek()
{
    if(front==0&&rear==0)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("Peeked Element is %d \n",front->data);
    }
}
void display()
{
    struct node *temp;
    temp=front;
    if(front==0&&rear==0)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        while(temp->next!=front)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d\n",temp->data);
    }
}
int main()
{
    enqueue(2);
    enqueue(-1);
    enqueue(5);
    display();
    dequeue();
    peek();
}
*/

/*
#include <stdio.h>
#define N 5
int stack1[N],stack2[N];
int top1=-1,top2=-1;
void push1(int data)
     {
         if(top1==N-1)
         {
             printf("Queue is Full\n");
         }
         else
         {
             top1++;
             stack1[top1]=data;
         }
     }
int pop1()
{
    if(top1==-1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        return stack1[top1--];
    }
}
void push2(int data)
{
    top2++;
    stack2[top2]=data;
}
int pop2()
{
    return stack2[top2--];
}
int count=0;
void enqueue(int x)
{
    push1(x);
    count++;
}
void dequeue()
{
    if(top1==-1&&top2==-1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        int a,b;
        for(int i=0;i<count;i++)
        {
            a=pop1();
            push2(a);
        }
        b=pop2();
        printf("Dequeued Element is %d\n",b);
        count--;
        for(int i=0;i<count;i++)
        {
            a=pop2();
            push1(a);
        }
    }
}
void display()
{
    for(int i=0;i<=top1;i++)
    {
        printf("%d ",stack1[i]);
    }
}
int main()
{
    enqueue(5);
    enqueue(2);
    enqueue(-1);
    dequeue();
    enqueue(7);
    display();
}
*/

/*
#include <stdio.h>
#define N 5
int Deque[N];
int Front=-1,Rear=-1;
void enqueuefront(int x)
{
    if((Front==0&&Rear==N-1)||(Front==Rear+1))
    {
        printf("Queue is Full\n");
    }
    else if(Front==-1&&Rear==-1)
    {
        Front=Rear=0;
        Deque[Front]=x;
    }
    else if(Front==0)
    {
        Front=N-1;
        Deque[Front]=x;
    }
    else
    {
        Front--;
        Deque[Front]=x;
    }
}
void enqueuerear(int x)
{
    if((Front==0&&Rear==N-1)||(Front==Rear+1))
    {
        printf("Queue is Full\n");
    }
    else if(Front==-1&&Rear==-1)
    {
        Front=Rear=0;
        Deque[Rear]=x;
    }
    else if(Rear==N-1)
    {
        Rear=0;
        Deque[Rear]=x;
    }
    else
    {
        Rear++;
        Deque[Rear]=x;
    }
}
void display()
{
    int i=Front;
    if(Front==-1&&Rear==1)
    {
        printf("Queue is Empty\n");
    }
    while(i!=Rear)
    {
        printf("%d ",Deque[i]);
        i=(i+1)%N;
    }
    printf("%d",Deque[Rear]);
}
void getfron()
{
    printf("%d \n",Deque[Front]);
}
void getrear()
{
    printf("%d \n",Deque[Rear]);
}
void dequeuefront()
{
    if(Front==-1&&Rear==-1)
    {
        printf("Queue is Empty\n");
    }
    else if(Front==Rear)
    {
        printf("Dequeued Element is: %d\n",Deque[Front]);
        Front=Rear=-1;
    }
    else if(Front==N-1)
    {
        printf("Dequeued Element is %d\n",Deque[Front]);
        Front=0;
    }
    else
    {
        printf("Dequeued Element is %d\n",Deque[Front]);
        Front++;
    }
}
void dequeuerear()
{
    if(Front==-1&&Rear==-1)
    {
        printf("Queue is Empty\n");
    }
    else if(Front==Rear)
    {
        Front=Rear=-1;
    }
    else if(Rear==0)
    {
        printf("Dequeued Element is %d\n",Deque[Rear]);
        Rear=N-1;
    }
    else
    {
        printf("Dequeued Element is %d\n",Deque[Rear]);
        Rear--;
    }
}
int main()
{
    enqueuefront(2);
    enqueuefront(5);
    enqueuerear(-1);
    enqueuerear(0);
    enqueuefront(7);
    enqueuefront(4);
    display();
    dequeuefront();
    dequeuefront();
}
*/

