#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct node 
{
    int Exponent;
    float Coefficient;
    struct node *next;
};
struct node *head=0,*temp,*newnode;
int count,n;
int Exponent;
float Coefficient;
float Eval=0;
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
struct node* Linked_List(struct node*head,int Exponent,float Coefficient)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->Exponent=Exponent;
    newnode->Coefficient=Coefficient;
    newnode->next=0;
    if(head==0||Exponent>head->Exponent)
    {
        newnode->next=head;
        head=newnode;
    }
    else
    {
        temp=head;
        while(temp->next!=0&&temp->next->Exponent>Exponent)
        {
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    return head;
}
struct node* Create(struct node *head)
{
    printf("Enter the Number of Terms: ");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        printf("Enter the Coefficient of the %d Term: ",i);
        scanf("%f",&Coefficient);
        printf("Enter the Exponent of %d Term: ",i);
        scanf("%d",&Exponent);
        head=Linked_List(head,Exponent,Coefficient);
        printf("\n");
    }
    return head;
}
int Display(struct node *head)
{
    if(head==0)
    {
        printf("Polynomial does not Exist");
    }
    else
    {
        temp=head;
        while(temp!=0)
        {
            printf("Polynomial is: (%.1fX^%d) ",temp->Coefficient,temp->Exponent);
            temp=temp->next;
            if(temp!=0)
            {
                printf("+ ");
            }
            else
            {
                printf("\n\n");
            }
        }
    }
}
float Evaluation(int X)
{
    Eval=0;
    temp=head;
    while(temp!=0)
    {
        Eval+=temp->Coefficient*pow(X,temp->Exponent);
        temp=temp->next;
    }
    return Eval;
}
int main()
{
    int X;
    printf("Enter the Polynomial: \n\n");
    head=Create(head);
    Display(head);
    printf("Enter the Value of X: ");
    scanf("%d",&X);
    Evaluation(X);
    printf("\nEvaluation of the above Polynomial when X is = %d is %.2f",X,Eval);
    return 0;
}