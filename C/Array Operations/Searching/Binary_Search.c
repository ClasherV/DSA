#include <stdio.h>
int main()
{
    int size,n,BSearch;
    printf("Enter the Size of Array: ");
    scanf("%d",&size);
    printf("\n");
    int arr[size];
    do
    {
        printf("Enter how much Elements You want to Enter in the Array: ");
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
    printf("\nEnter the Array Elements (In a Sorted Order): \n\n");
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
        scanf("%d",&BSearch);
        if(BSearch<1)
        {
            printf("\nYou have to Search Minimum of 1 Element in the Array\n\n");
        }
        else if(BSearch>n)
        {
            printf("\nYou can only Search Maximum of %d Elements in the Array\n\n",n);
        }
    }while(BSearch<1||BSearch>n);
    int num[BSearch];
    printf("\nEnter the Elements You want to Search: \n\n");
    for(int i=0;i<BSearch;i++)
    {
        printf("Enter the Element %d: ",i+1);
        scanf("%d",&num[i]);
    }
    printf("\n");
    for(int i=0;i<BSearch;i++)
    {
        int left=0;
        int right=n-1;
        int mid=(left+right)/2;
        int Found=0;
        while(left<=right)
        {
            if(num[i]==arr[mid])
            {
                printf("Element = %d found at Array Index %d\n",num[i],mid);
                Found++;
                break;
            }
            else if(num[i]<arr[mid])
            {
                right=mid-1;
                mid=(left+right)/2;
            }
            else if(num[i]>arr[mid])
            {
                left=mid+1;
                mid=(left+right)/2;
            }
            else if(left>right&&Found==0)
            {
                printf("Element = %d not Found in the Array\n",num[i]);
            }
        }
    }
    return 0;   
}