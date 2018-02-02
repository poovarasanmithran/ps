#include<stdio.h>
void main()
{
int n,a[500],i,min;
printf("Enter the value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the array values");
scanf("%d",&a);
min=a[i];
}
for(i=0;i<n;i++)
{
if(a[i]>min)
min=a[i];
}
printf("The min value is %d",min);
}
