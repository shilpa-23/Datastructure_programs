#include<stdio.h>
int arr1[30],arr2[30],arr3[60];
int i,j,k,n1,n2;
int main()
{
printf("enter the  size of first array:\n ");
scanf("%d",&n1);
printf("enter the size of second array :\n");
scanf("%d",&n2);
printf("enter the elements in first array:\n");
for(i=0;i<n1;i++)
{
scanf("%d",&arr1[i]);
}
printf("enter the elements of second array:\n");
for(j=0;j<n2;j++)
{
scanf("%d",&arr2[j]);
}
i=0; 
j=0;
k=0;
while(i<n1 && j<n2)
{
if(arr1[i]<=arr2[j])
{
arr3[k]=arr1[i];
i++;
k++;
 }
else
{
arr3[k]=arr2[j];
k++;
j++;
}
}
while(i<n1)
{
arr3[k]=arr1[i];
i++;
k++;
}
while(j<n2)
{
arr3[k]=arr2[j];
k++;
j++;
}
printf("merged array is:\n");
for(i=0;i<n1+n2; i++)
printf("%d",arr3[i]);
return(0);
}

