#include <stdio.h>
int main()
{
    int size,n,BS,SP,EP;
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
    printf("\n\n");
    do
    {
        printf("Enter how much Elements You want to Sort in the Array: ");
        scanf("%d",&BS);
        if(BS<=1)
        {
            printf("\nYou have to Sort minimum of 2 Elements in the Array\n\n");
        }
        else if(BS>n)
        {
            printf("\nYou can only Sort maximum of %d Elements in the Array\n\n",n);
        }
    }while(BS<=1||BS>n);
    printf("\n");
    do
    {
        printf("Enter in which Order You want to Sort the Array Elements (A for Ascending and D for Descending): ");
        scanf(" %c",&Order);
        if(Order!='A'&&Order!='a'&&Order!='D'&&Order!='d')
        {
            printf("\nEnter the Correct Letter of the Order You want\n\n");
        }
    }while(Order!='A'&&Order!='a'&&Order!='D'&&Order!='d');
    printf("\nEnter the Starting and Ending Positions of Sorting of Array: \n\n");
    do
    {
        printf("Enter the Starting Position: ");
        scanf("%d",&SP);
        if(SP<=0||SP>n)
        {
            printf("\nInvalid Position\n\n");
        }
        else
        {
            printf("Enter the Ending Position: ");
            scanf("%d",&EP);
            if(EP<=0||EP>n)
            {
                printf("\nInvalid Position\n\n");
            }
        }
    }while((SP<=0||SP>n)||(EP<=0||EP>n));
    if(Order=='A'||Order=='a')
    {
        for(int i=0;i<BS-1;i++)
        {
            int flag=0;
            for(int j=SP-1;j<EP-1-i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    flag=1;
                }
            }
            if(flag==0)
            {
                break;
            }
        }
        printf("\nArray Elements after Sorting in Ascending Order from Position %d to Position %d are: ",SP,EP);
        for(int i=0;i<=n-1;i++)
        {
            printf("%d     ",arr[i]);
        }
    }
    else if(Order=='D'||Order=='d')
    {
         for(int i=0;i<BS-1;i++)
        {
            int flag=0;
            for(int j=SP-1;j<EP-1-i;j++)
            {
                if(arr[j+1]>arr[j])
                {
                    int temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                    flag=1;
                }
                if(flag==0)
                {
                    break;
                }
            }
        }
        printf("\nArray Elements after Sorting in Descending Order from Position %d to Position %d are: ",SP,EP);
        for(int i=0;i<=n-1;i++)
        {
            printf("%d     ",arr[i]);
        }
    }
    return 0;
}