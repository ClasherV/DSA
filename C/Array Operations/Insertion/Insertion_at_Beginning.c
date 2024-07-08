#include <stdio.h>
#include <conio.h>
int main()
{
    int size,n,num;
    printf("Enter the Size of Array: ");
    scanf("%d",&size);
    printf("Enter how much Elements You want to Enter in the Array: ");
    scanf("%d",&n);
    int arr[size];
    printf("\nEnter the Array Elements: \n\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter the Array Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nThe Array Elements are:");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n\nEnter the Element You want to Insert in the Array: ");
    scanf("%d",&num);
    for(int i=n-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=num;
    n++;
    getch();
    return 0;
}
