#include<stdio.h>
#include<stdlib.h>
int binary(int a[] , int x , int low, int high)
{
int mid;
if(low>high)
{
return -1;
}
else
mid=(low+high)/2;
if(x==a[mid])
{
return (mid);
}
else if(x<a[mid])
{
binary(a,x,low,mid-1);
}
else
{
binary(a,x,mid+1,high);
}
}
int main()
{
int num , i ,key ,low,high;
int position ,list[20];
printf("enter the total no. of elements\n");
scanf("%d",&num);
printf("enter the elements\n");
for(i=0;i<num;i++)
{
scanf("%d",&list[i]);
}
low=0;
high = num-1;
printf("enter the elemts to be searched\n");
scanf("%d",&key);
position = binary(list, key , low, high);
if(position !=-1)
{
printf("present at %d",(position+1));
}
else
{
printf("not present");
return (0);
}
}
