#include<stdio.h>
#include<stdlib.h>
int toh(int n,char source,char temp,char dest)
{
if(n==1)
printf("move the disk from %c to %c",source,dest);
else
{
toh(n-1,source,dest,temp);
printf("\nmove the disk from %c to %c\n",source,dest);
toh(n-1,temp,source,dest);
}
}
void main()
{
int n;
printf("\nenter the no. of disks required\n");
scanf("%d",&n);
toh(n,'A','B','C');
}
