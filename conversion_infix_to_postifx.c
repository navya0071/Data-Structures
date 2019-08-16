#include<stdio.h>
#include<stdlib.h>
int top=-1;
char postfix[15],infix[15],stack[15],ch,c;

void push(char ch)
{
	stack[++top]=ch;
}
char pop()
{
	ch=stack[top--];
	return(ch);
}
int precedence(char ch)
{
switch(ch)
{
	case'^':return 3;
	break;
	case'*':
	case'/':return 2;
	break;
	case'+':
	case'-': return 1;
	default: return -2;
}
}
int isoperator(char ch)
{
if(ch=='^'||ch=='*'||ch=='/'||ch=='+'||ch=='-')
return(1);
}

void main()
{
int i=0,j=0;
printf("enter the expression\n");
gets(infix);
while(infix[i]!='\0')
{
	ch=infix[i];
	if(ch=='(')
	{
	push(ch);
	}
	else if(isalnum(ch))
	{
		postfix[j]=ch;
		j++;
	}
	else if(isoperator(ch)==1)
	{
		if(ch!='^')
		{
		while(top!=-1 && precedence(stack[top])>=precedence(ch))
		{
			postfix[j]=pop();
			j++;
		}
push(ch);
		}
	}
	else if(ch==')')
	{
		while(stack[top]!='(')
		{
		postfix[j]=pop();
		j++;
		}

	c=pop();
}
else
{
printf("invalid");
}
i++;
}
while(top!=-1)
{
postfix[j]=pop();
j++;
}
printf("the exp is:\n");
puts(postfix);
}

