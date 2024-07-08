#include <stdio.h>
int main()
{
    int size,n;
    char Order;
    printf("Enter the Size of Array: ");
    scanf("%d",&size);
    printf("\n");
    int arr[size];
    do
    {
        printf("Enter how much Elements You want to Enter in the Array: ");
        scanf("%d",&n);
        if(n<=0)
        {
            printf("\nYou have to Enter minimum of 1 Element in the Array\n\n");
        }
        else if(n>size)
        {
            printf("\nYou can only Enter maximum of %d Elements in the Array\n\n",size);
        }
    }while(n<=0||n>size);
    printf("\nEnter the Array Elements: \n\n");
    for(int i=0;i<=n-1;i++)
    {
        printf("Enter the Array Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nThe Array Elements are: ");
    for(int i=0;i<=n-1;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    printf("\n\nArray Elements after Sorting are: ");
    for(int i=0;i<=n-1;i++)
    {
        printf("%d     ",arr[i]);
    }
    return 0;
}