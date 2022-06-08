//STACK

#include<stdio.h>
#include<stdlib.h>
#define n 5
int top = -1;
int stack[n];
int isfull();
int isempty();


void push(int val)
{
	if(isfull())
	{
		printf("\nOverFlow");
	}
	else
	{
		top ++;
		stack[top] = val;
		printf("\n %d pushed",stack[top]);
	}
}

void pop()
{
	if(isempty())
	{
		printf("\n Underflow ");
	}
	else
	{
		printf("\n %d Popped",stack[top]);
		stack[top]=-1;
		top--;
	}
}

int isfull()
{
	if(top==n-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isempty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void findtop()
{
	printf("\n Top Position = %d",top);
	printf("\n Top value = %d",stack[top]);
}

void display()
{
	int i,x;
	x=top;
	for(i=x;i>=0;i--)
	{
		printf("\n Stack --> %d\n",stack[i]);
	}
}

void main()
{
	push(1);
	pop();
	pop();
	push(2);
	findtop();
	display();
}

