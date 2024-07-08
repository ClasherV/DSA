#include <stdio.h>
int main()
{
    int size,n,LS;
    printf("Enter the Size of Array: ");
    scanf("%d",&size);
    int arr[size];
    printf("\n");
    do
    {
        printf("Enter how much Element You want to Enter in the Array: ");
        scanf("%d",&n);
        if(n<1)
        {
            printf("\nYou have to Enter Minimum of 1 Element in the Array\n\n");
        }
        else if(n>size)
        {
            printf("\nYou can only Enter Maximum of %d Elements in the Array\n\n",size);
        }
    }while(n<1||n>size);
    printf("\nEnter the Array Elements: \n\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter the Array Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nThe Array Elements are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n\n");
    do
    {
        printf("Enter how much Elements You want to Search in the Array: ");
        scanf("%d",&LS);
        if(LS<1)
        {
            printf("\nYou have to Search Minimum of 1 Element in the Array\n\n");
        }
        else if(LS>n)
        {
            printf("\nYou can only Search Minimum of %d Elements in the Array\n\n",n);
        }
    }while(LS<1||LS>n);
    int num[LS];
    printf("\nEnter the Elements You want to Search in the Array: \n\n");
    for(int i=0;i<LS;i++)
    {
        printf("Enter the Element %d: ",i+1);
        scanf("%d",&num[i]);
    }
    printf("\n");
    for(int i=0;i<LS;i++)
    {
        int Found=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==num[i])
            {
                printf("Element = %d Found at Array Index %d\n",num[i],j);
                Found++;
            }
            else if(arr[j]!=num[i]&&j<n-1)
            {
                continue;
            }
            else if(Found==0)
            {
                printf("Element = %d not Found in the Array\n",num[i]);
            }
        }
        printf("\n");
    }
    return 0;
}