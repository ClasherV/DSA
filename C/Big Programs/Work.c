// Insertion

// #include <stdio.h>
// int main()
// {
//     int size,n,I,i=0;
//     printf("Enter the Size of Array: ");
//     scanf("%d",&size);
//     int arr[size];
//     do
//     {
//         printf("Enter how much Elements You want to Enter in the Array: ");
//         scanf("%d",&n);
//         if(n<=0)
//         {
//             printf("You have to Enter minimum of 1 Element in the Array\n\n");
//         }
//         else if(n>size)
//         {
//             printf("You can only Enter maximum of %d Elements in the Array\n\n",size);
//         }
//     }while(n<=0||n>size);
//     printf("\nEnter the Array Elements (Integers only): \n\n");
//     for(int i=0;i<=n-1;i++)
//     {
//         printf("Enter the Array Element %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("\nThe Array Elements are: ");
//     for(int i=0;i<=n-1;i++)
//     {
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
//     do
//     {
//         printf("\n\nEnter how much Elements You want to Insert in the Array: ");
//         scanf("%d",&I);
//         if(I<=0)
//         {
//             printf("You have to Insert minimum of 1 Element in the Array");
//         }
//         else if(I>size-n)
//         {
//             printf("You can only Insert maximum of %d Elements in the Array",size-n);
//         }
//     }while(I<=0||I>size-n);
//     int pos[I],num[I];
//     printf("\nEnter the Positions at which You want to Insert Elements in the Array: \n");
//     printf("Enter the Elements You want to Insert at those Positions: \n");
//     do
//     {
//         for(int i=0;i<=I-1;i++)
//         {
//             printf("\nEnter the Position: ");
//             scanf("%d",&pos[i]);
//             if(pos[i]<=0||pos[i]>n+1)
//             {
//                 printf("Invalid Position\n");
//                 i--;
//             }
//             else
//             {
//                 printf("Enter the Element You want to Insert at this Position: ");
//                 scanf("%d",&num[i]);
//             }
//         }
//     }while(pos[i]<=0||pos[i]>n+1);
//     for(int i=0;i<=I-1;i++)
//     {
//         for(int j=n-1;j>=pos[i]-1;j--)
//         {
//             arr[j+1]=arr[j];
//         }
//         n++;
//     }
//     for(int i=0;i<=I-1;i++)
//     {
//         arr[pos[i]-1]=num[i];
//     }
//     printf("\nArray Elements after Insertion are: ");
//     for(int i=0;i<=n-1;i++)
//     {
//         printf("%d   ",arr[i]);
//     }
//     return 0;
// }

// Deletion

// #include <stdio.h>
// int main()
// {
//     int size,n,D,i=0;
//     printf("Enter the Size of Array: ");
//     scanf("%d",&size);
//     int arr[size];
//     do
//     {
//         printf("Enter how much Elements You want to Enter in the Array: ");
//         scanf("%d",&n);
//         if(n<=0)
//         {
//             printf("You have to Enter minimum of 1 Element in the Array\n\n");
//         }
//         else if(n>size)
//         {
//             printf("You can only Enter maximum of %d Elements in the Array\n\n",size);
//         }
//     }while(n<=0||n>size);
//     printf("\nEnter the Array Elements (Integers only): \n\n");
//     for(int i=0;i<=n-1;i++)
//     {
//         printf("Enter the Array Element %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("\nThe Array Elements are: ");
//     for(int i=0;i<=n-1;i++)
//     {
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
//     do
//     {
//         printf("\n\nEnter how much Elements You want to Delete from the Array: ");
//         scanf("%d",&D);
//         if(D<=0)
//         {
//             printf("You have to Delete minimum of 1 Element from the Array");
//         }
//         else if(D>n)
//         {
//             printf("You can only Delete maximum of %d Elements from the Array",n);
//         }
//     }while(D<=0||D>n);
//     int pos[D];
//     printf("\nENter the Positions from which You want to Delete Elements from the Array: \n\n");
//     do
//     {
//         for(int i=0;i<=D-1;i++)
//         {
//             printf("Enter the Position: ");
//             scanf("%d",&pos[i]);
//             if(pos[i]<=0||pos[i]>n)
//             {
//                 printf("Invalid Position\n\n");
//                 i--;
//             }
//         }
//     }while(pos[i]<=0||pos[i]>n);
//     for(int i=0;i<=D-1;i++)
//     {
//         for(int j=pos[i]-1-i;j<=n-1;j++)
//         {
//             arr[j]=arr[j+1];
//         }
//         n--;
//     }
//     printf("\nArray Elements after Deletion are: ");
//     for(int i=0;i<=n-1;i++)
//     {
//         printf("%d   ",arr[i]);
//     }
//     return 0;
// }

// Updation

// #include <stdio.h>
// int main()
// {
//     int n,size,U,i=0;
//     printf("Enter the Size of Array: ");
//     scanf("%d",&size);
//     int arr[size];
//     do
//     {
//         printf("Enter how much Elements You want to Enter in the Array: ");
//         scanf("%d",&n);
//         if(n<=0)
//         {
//             printf("You have to Enter minimum of 1 Element in the Array\n\n");
//         }
//         else if(n>size)
//         {
//             printf("You can only Enter maximum of %d Elements in the Array\n\n",size);
//         }
//     }while(n<=0||n>size);
//     printf("\nEnter the Array Elements (Integers only): \n\n");
//     for(int i=0;i<=n-1;i++)
//     {
//         printf("Enterr the Array Element %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("\nThe Array Elements are: ");
//     for(int i=0;i<=n-1;i++)
//     {
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
//     do
//     {
//         printf("\n\nEnter how much Elements You want to Update in the Array: ");
//         scanf("%d",&U);
//         if(U<=0)
//         {
//             printf("You have to Update minimum of 1 Element in the Array");
//         }
//         else if(U>n)
//         {
//             printf("You can only Update maximum of %d Elements in the Array",n);
//         }
//     }while(U<=0||U>n);
//     int pos[U],num[U];
//     printf("\nEnter the Positions at which You want to Update the Elements in the Array: \n");
//     printf("Enter the Elements You want to Update the Array Elements with at those Positions: \n");
//     do
//     {
//         for(int i=0;i<=U-1;i++)
//         {
//             printf("\nEnter the Position: ");
//             scanf("%d",&pos[i]);
//             if(pos[i]<=0||pos[i]>n)
//             {
//                 printf("Invalid Position\n");
//                 i--;
//             }
//             else
//             {
//                 printf("Enter the Element You want to Update with at this Position: ");
//                 scanf("%d",&num[i]);
//                 arr[pos[i]-1]=num[i];
//             }
//         }
//     }while(pos[i]<=0||pos[i]>n);
//     printf("\nArray Elements after Updation are: ");
//     for(int i=0;i<=n-1;i++)
//     {
//         printf("%d   ",arr[i]);
//     }
//     return 0;
// }

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

// Sorting

// #include <stdio.h>
// int main()
// {
//     int size,n,BS,SP,EP;
//     char Order;
//     printf("Enter the Size of Array: ");
//     scanf("%d",&size);
//     int arr[size];
//     do
//     {
//         printf("Enter how much Elements You want to Enter in the Array: ");
//         scanf("%d",&n);
//         if(n<=0)
//         {
//             printf("You have to Enter minimum of 1 Element in the Array\n\n");
//         }
//         else if(n>size)
//         {
//             printf("You can only Enter maximum of %d Elements in the Array\n\n",size);
//         }
//     }while(n<=0||n>size);
//     printf("\nEnter the Array Elements: \n\n");
//     for(int i=0;i<=n-1;i++)
//     {
//         printf("Enter the Array Element %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("\nThe Array Elements are: ");
//     for(int i=0;i<=n-1;i++)
//     {
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
//     do
//     {
//         printf("\n\nEnter how much Elements You want to Sort in the Array: ");
//         scanf("%d",&BS);
//         if(BS<=1)
//         {
//             printf("You have to Sort minimum of 2 Elements in the Array");
//         }
//         else if(BS>n)
//         {
//             printf("You can only Sort maximum of %d Elements in the Array",n);
//         }
//     }while(BS<=1||BS>n);
//     do
//     {
//         printf("Enter in which Order You want to Sort the Array Elements (A for Ascending and D for Descending): ");
//         scanf(" %c",&Order);
//         if(Order!='A'&&Order!='a'&&Order!='D'&&Order!='d')
//         {
//             printf("Enter the Correct Letter of the Order You want\n\n");
//         }
//     }while(Order!='A'&&Order!='a'&&Order!='D'&&Order!='d');
//     printf("\nEnter the Starting and Ending Positions of Sorting of Array: \n\n");
//     do
//     {
//         printf("Enter the Starting Position: ");
//         scanf("%d",&SP);
//         if(SP<=0||SP>n)
//         {
//             printf("Invalid Position\n\n");
//         }
//         else
//         {
//             printf("Enter the Ending Position: ");
//             scanf("%d",&EP);
//             if(EP<=0||EP>n)
//             {
//                 printf("Invalid Position\n\n");
//             }
//         }
//     }while((SP<=0||SP>n)&&(EP<=0||EP>n));
//     if(Order=='A'||Order=='a')
//     {
//         for(int i=0;i<BS-1;i++)
//         {
//             for(int j=SP-1;j<EP-1-i;j++)
//             {
//                 if(arr[j]>arr[j+1])
//                 {
//                     int temp=arr[j];
//                     arr[j]=arr[j+1];
//                     arr[j+1]=temp;
//                 }
//             }
//         }
//         printf("\nArray Elements after Sorting in Ascending Order from Position %d to Position %d are: ",SP,EP);
//         for(int i=0;i<=n-1;i++)
//         {
//             printf("%d   ",arr[i]);
//         }
//     }
//     else if(Order=='D'||Order=='d')
//     {
//          for(int i=0;i<BS-1;i++)
//         {
//             for(int j=SP-1;j<EP-1-i;j++)
//             {
//                 if(arr[j+1]>arr[j])
//                 {
//                     int temp=arr[j+1];
//                     arr[j+1]=arr[j];
//                     arr[j]=temp;
//                 }
//             }
//         }
//         printf("\nArray Elements after Sorting in Descending Order from Position %d to Position %d are: ",SP,EP);
//         for(int i=0;i<=n-1;i++)
//         {
//             printf("%d   ",arr[i]);
//         }
//     }
//     return 0;
// }

