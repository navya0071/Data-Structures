#include<stdio.h>
#include<stdlib.h>
#define size 5
int i,front=-1,rear=-1,q[size],item,ditem;
void enqueue()
{
if(rear==size-1)
{
printf("overlow");
}
else
{if(rear == -1)
front = 0;
printf("enter the element");
scanf("%d",&item);
q[++rear] = item;
}
}
void dequeue()
{
if(front==-1)
printf("underflow");
else
{
ditem = q[front];
printf("the deleted item is %d",ditem);
if(front == rear)
{
front = -1;
rear = -1;
}
else
front++;
}
}
void display()
{
int i;
if(rear==-1)
printf("underflow");
else
{
for(i=front;i<=rear;i++)
printf("%d-->",q[i]);
}
}
void main()
{int ch;
while(1)
{
printf("\n1. display\n 2. enqueue\n 3. dequeue\n");
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:display();
break;
case 2:enqueue();
break;
case 3:dequeue();
break;
default:exit(0);
}
}
}

