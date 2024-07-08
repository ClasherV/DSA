/**************************
 
Implement Selection sort algorithm


***************************/
#include<stdio.h>
int main()
{
    int n;
    int i;
    int j;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++)
    {
        printf("The %d element :",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
           if(arr[j]<arr[i]){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
}
printf("The sorted array :");
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
}