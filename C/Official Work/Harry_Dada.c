/*
#include <stdio.h>
int main()
{
    int a=0,count=0,n;
    printf("Enter the Value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        a+=5;
        count++;
    }
    printf("a=%d\nNumber of Times Loop ran=%d",a,count);
    return 0;
}

// O/p: Enter the Value of n: 5
//      a=25
//      Number of Times Loop ran=5
*/

/*
#include <stdio.h>
int main()
{
    int a=0,count=0,n;
    printf("Enter the Value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            a+=5;
            count++;
        }
    }
    printf("a=%d\nNumber of Times Loop ran=%d",a,count);
    return 0;
}

// O/p: Enter the Value of n: 5
//      a=125
//      Number of Times Loop ran=25
*/

/*
#include <stdio.h>
void func(int arr[],int length)
{
    int sum=0,product=1,count1=0,count2=0;
    for(int i=0;i<length;i++)
    {
        sum+=arr[i];
        count1++;
    }
    for(int i=0;i<length;i++)
    {
        product*=arr[i];
        count2++;
    }
    printf("Sum=%d, Product=%d\n",sum,product);
    printf("n=%d",(count1+count2)/2);
}
int main()
{
    int arr[]={1,2,3,4,5};
    func(arr,4);
    return 0;
}

// O/p: Sum=10, Product=24
//      n=4
*/

/*
#include <stdio.h>
void func(int n)
{
    int count=0;
    int sum=0;
    int product=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d, %d\n",i,j);
            count++;
        }
    }
    printf("n=%d",count);
}
int main()
{
    func(4);
    return 0;
}

// O/p: 0, 0
//      0, 1
//      0, 2
//      0, 3
//      1, 0
//      1, 1
//      1, 2
//      1, 3
//      2, 0
//      2, 1
//      2, 2
//      2, 3
//      3, 0
//      3, 1
//      3, 2
//      3, 3
//      n=16
*/

/*
#include <stdio.h>
#include <stdlib.h>
struct myArray
{
    int total_size;
    int used_size;
    int* ptr;
};
void createArray(struct myArray* a,int tSize,int uSize)
{
    (*a).total_size=tSize;
    (*a).used_size=uSize;
    (*a).ptr=(int*) malloc(tSize*sizeof(int));
}
void show(struct myArray *a)
{
    for(int i=0;i<(*a).used_size;i++)
    {
        printf("%d\n",(*a).ptr[i]);
    }
}
void setVal(struct myArray *a)
{
    for(int i=0;i<(*a).used_size;i++)
    {
        int n;
        printf("Enter the Element %d:",i);
        scanf("%d",&n);
        (*a).ptr[i]=n;
    }
}
int main()
{
    struct myArray marks;
    createArray(&marks,10,2);
    printf("We are running setVal now\n");
    setVal(&marks);
    printf("We are running show now\n");
    show(&marks);
    return 0;
}

// O/p: We are running setVal now
//      Enter the Element 0:3
//      Enter the Element 1:4
//      We are running show now
//      3
//      4
*/

/*
#include <stdio.h>
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\n");
}
int indInsertion(int arr[],int size,int element,int capacity,int index)
{
    if(size>=capacity)
    {
        return -1;
    }
    for(int i=size-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
int main()
{
    int arr[100]={7,8,12,7,88};
    int size=5,element=45,index=3,capacity=100;
    display(arr,5);
    indInsertion(arr,size,element,100,index);
    size+=1;
    if(size>=capacity)
    {
        printf("Insertion failed\n");
    }
    else
    {
        display(arr,size);
    }
    return 0;
}

// O/p 1: 7 8 12 7 88 
//
//        7 8 12 45 7 88
//
// O/p 2: 7 8 12 7 88 
//
//        Insertion failed
*/

/*
#include <stdio.h>
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\n");
}
void indDeletion(int arr[],int size,int index)
{
    for(int i=index;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
}
int main()
{
    int arr[100]={7,8,12,7,88};
    int size=5,index=1;
    display(arr,5);
    indDeletion(arr,size,index);
    size-=1;
    display(arr,size);
    return 0;
}

// O/p: 7 8 12 7 88 
//      
//      7 12 7 88
//      
*/

/*
#include <stdio.h>
int linearSearch(int arr[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[]={1,3,5,56,4,3,23,5,4,54634,56,34};
    int size=sizeof(arr)/sizeof(int);
    int element=4;
    int searchIndex=linearSearch(arr,size,element);
    printf("The Element %d was found at Index %d\n",element,searchIndex);
    return 0;
}

// O/p: The Element 4 was found at Index 4
*/

/*
#include <stdio.h>
int binarySearch(int arr[],int size,int element)
{
    int low,mid,high;
    low=0;
    high=size-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==element)
        {
            return mid;
        }
        if(arr[mid]<element)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[]={1,3,5,56,64,73,123,225,444};
    int size=sizeof(arr)/sizeof(int);
    int element=56;
    int searchIndex=binarySearch(arr,size,element);
    printf("The Element %d was found at Index %d\n",element,searchIndex);
    return 0;
}

// O/p: The Element 56 was found at Index 3
*/

/*
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void linkedListTraversal(struct node* ptr)
{
    while(ptr!=0)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    struct node *head,*second,*third,*fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->data=15;
    head->next=second;
    second->data=30;
    second->next=third;
    third->data=45;
    third->next=fourth;
    fourth->data=60;
    fourth->next=NULL;
    linkedListTraversal(head);
    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void linkedListTraversal(struct node* ptr)
{
    while(ptr!=0)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
struct node* Insert_at_Beginning(struct node* head,int data)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
struct node* Insert_at_Index(struct node* head,int data,int index)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p=head;
    int i=0;
    while(i!=index)
    {
        p=p->next;
        i++;   
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct node* Insert_at_End(struct node* head,int data)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node* p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
struct node* Insert_after_Node(struct node* head,struct node* prevnode,int data)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=prevnode->next;
    prevnode->next=ptr;
    return head;
}
int main()
{
    struct node *head,*second,*third,*fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->data=15;
    head->next=second;
    second->data=30;
    second->next=third;
    third->data=45;
    third->next=fourth;
    fourth->data=60;
    fourth->next=NULL;
    linkedListTraversal(head);
    head=Insert_at_Beginning(head,0);
    printf("\n\n");
    linkedListTraversal(head);
    head=Insert_at_Index(head,35,2);
    printf("\n\n");
    linkedListTraversal(head);
    head=Insert_at_End(head,65);
    printf("\n\n");
    linkedListTraversal(head);
    head=Insert_after_Node(head,second,32);
    printf("\n\n");
    linkedListTraversal(head);
    return 0;
}
*/

