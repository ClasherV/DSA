#include <stdio.h>
int Partition(int *arr,int lb,int ub)
{
    int Pivot=arr[lb];
    int start=lb;
    int end=ub;
    while(start<end)
    {
        while(arr[start]<=Pivot)
        {
            start++;
        }
        while(arr[end]>Pivot)
        {
            end--;
        }
        if(start<end)
        {
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
        }
    }
    int temp=arr[lb];
    arr[lb]=arr[end];
    arr[end]=temp;
    return end;
}
int QuickSort(int *arr,int lb,int ub)
{
    if(lb<ub)
    {
        int loc=Partition(arr,lb,ub);
        QuickSort(arr,lb,loc-1);
        QuickSort(arr,loc+1,ub);
    }
}
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
    QuickSort(arr,0,n-1);
    printf("\n\nArray Elements after Sorting are: ");
    for(int i=0;i<=n-1;i++)
    {
        printf("%d     ",arr[i]);
    }
    return 0;
}