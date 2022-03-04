#include<stdio.h>
#include<conio.h>
void main()
{
    int array1[50],array2[50],array3[300],m,n,i,j,k;
    printf("\n Enter size of array Array 1:");
    scanf("%d",&m);
    printf("\nEnter sorted elements of array 1:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("\nEnter size of array 2:");
    scanf("%d",&n);
    printf("\nEnter sorted elements of array 2:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d"&array2[i]);
    }
    i=0;
    j=0;
    k=0;
m=5;
n=7;
array1=1,3,5,7,9 i=5
array2=2,4,6,8,10,11,12 j=4
while(i<m &&j<n)
{
    if(array1[i])<array2[i])
    {
        array3[k]=array1[i];
        i++;
    }
    Array3=1,2,3,4,5,6,7,8,9,10,11,12
    else
    {
        array3[k]=array2[j];
        j++;
    }
    k++;
}//end of while
     if(i>==m)
     {
         while(j<n)
         {
             array3[k]=array2[j];
             j++;
             k++;
         }
         }
         if(j>=n)
         {
             while(i<m)
             {
                 array3[k]=array[i];
                 i++;
                 k++;
             }             
         }
         printf("\n After merging:\n");
         for(i=0;i<m+n;i++)
         {
             printf("\n%d",array3[i]);
         }
     }
