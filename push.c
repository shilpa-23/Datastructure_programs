#include<stdio.h>
int stack_arr[20],n,ch,top=-1,x,i;
void push();
void pop();
void disply();
void peek();
int  isfull();
int isempty();
int main()
{
	int ch;
	printf("enter the size of stack:");
	scanf("%d",&n);
	do  
	{
		printf("\n-------MENU------\n");
printf("1.push\n2.pop\n3.disply\n4.peek\n");
printf("\tenter your choice:\n\n");
scanf("%d",&ch);
 switch(ch)
{
case 1:push();
break;
case 2:pop();
break;
case 3:disply();
break;
case 4:peek();
break;
}
}while(ch!=4);
}
void push()
{
	
	
	if(isfull())
	{
		printf("stack overflow");
	}
	else
	{
		top++;
		printf("enter element");
		scanf("%d",&x);
		stack_arr[top]=x;
	}
}
void pop()
{
	
	
	if(isempty())
	{
		printf("stack underflow");
	}
	else{
	
		printf("deleted element is %d",stack_arr[top]);
		top--;
	   }
}
int isfull()
{
	if(top>=n-1)
		return 1;
		else
		return 0;
	}
	int isempty()
{
	if(top<=-1)
	return (1);
	else
	return (0);
}
void peek()
{
	printf("top=%d",stack_arr[top]);
	
}
		
	void disply()
{
	if(!isempty())
	{
		printf("element present in stack are");
		for(i=top;i>-1;i--)
		{
			printf("%d",stack_arr[i]);
		}
	}
	
		else
		
			printf("stack empty");
		
	}

