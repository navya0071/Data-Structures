#include<stdio.h>
#include<stdlib.h>
int top=-1,n,stack[15],op1,op2,res,i=0;
char postfix[15],ch;
void push(int n)
{
	stack[++top]=n;
}
int pop()
{
n=stack[top--];
return(n);
}
void main()
{
printf("enter the expression\n");
gets(postfix);
while(postfix[i]!='\0')
{
	ch=postfix[i];
	if(isalpha(ch))
	{
		printf("the value of %c",ch);
		scanf("%d",&n);
		push(n);
	}
	else
	{
		op2=pop();
		op1=pop();
		switch(ch)
		{
		case'+':res=op1+op2;
		break;
		case'-':res=op1-op2;
		break;
		case'*':res=op1*op2;
		break;
		case'/':res=op1/op2;
		break;
		}
push(res);
	}
i++;
}
printf("the result is %d",res);
}
