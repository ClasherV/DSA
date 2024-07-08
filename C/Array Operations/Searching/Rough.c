// Searching

#include <stdio.h>
int main()
{
    int size,n,LS;
    printf("Enter the Size of Array: ");
    scanf("%d",&size);
    int arr[size];
    do
    {
        printf("Enter how much Elements You want to Enter in the Array: ");
        scanf("%d",&n);
        if(n<=0)
        {
            printf("You have to Enter minimum of 1 Element in the Array\n\n");
        }
        else if(n>size)
        {
            printf("You can only Enter maximum of %d Elements in the Array\n\n",size);
        }
    }while(n<=0||n>size);
    printf("\nEnter the Array Elements: \n\n");
    for(int i=0;i<=n-1;i++)
    {
        printf("Enter the %d Element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nThe Array Elements are: ");
    for(int i=0;i<=n-1;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    do
    {
        printf("\n\nEnter how much Elements You want to Search in the Array: ");
        scanf("%d",&LS);
        if(LS<=0)
        {
            printf("You have to Search minimu of 1 Element in the Array");
        }
        else if(LS>n)
        {
            printf("You can only Search maximum of %d Elements in the Array",n);
        }
    }while(LS<=0||LS>n);
    int num[LS];
    printf("\nEnter the Elements which You want to Search in the Array: \n\n");
    for(int i=0;i<=LS-1;i++)
    {
        printf("Enter the Element %d: ",i+1);
        scanf("%d",&num[i]);
    }
    for(int i=0;i<=LS-1;i++)
    {
        for(int j=0;j<=n-1;j++)
        {
            if(arr[j]==num[i])
            {
                printf("\nElement %d found at Array Index %d\n",num[i],j);
                break;
            }
            else if(j==n-1)
            {
                printf("\nElement %d not found in the Array\n",num[i]);
            }
        }
    }
    return 0;
}