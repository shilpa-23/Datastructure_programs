#include<stdio.h>
void input();
void output();
void stunion();
void intersection();
void difference();
int s1[]={0,0,0,0,0,0,0,0,0},s2[]={0,0,0,0,0,0,0,0,0},m,n;
void main()
{
	int ch;
	do
	{
	printf("\n---------SET OPERATIONS----------\n");
	printf("1.Input\n2.Output\n3.Union\n4.Intersection\n5.Difference\nEnter choice:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:input();
		break;
		case 2:output();
		break;
		case 3:stunion();
		break;
		case 4:intersection();
		break;
		case 5:difference();
		break;
	} 
}while(ch!=5);
}

void input()
{
	int i,a;
	printf("enter the number of bits in s1:");
	scanf("%d",&n);
	printf("enter the values:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
	    s1[a-1]=1;
    }
    printf("enter the number of bits in s2:");
	scanf("%d",&m);
	printf("enter the values:");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a);
		s2[a-1]=1;
   }
}
void output()
{
	int i;
		printf(" values of set s1:\n");
		for(i=0;i<9;i++)
		printf("%d",s1[i]);
		printf("\n values of set s2:\n");
		for(i=0;i<9;i++)
		printf("%d",s2[i]);
}
void stunion()
{
	int i,r[10];
	for(i=0;i<9;i++)
	{
		if(s1[i]==0&&s2[i]==0)
		r[i]=0;
		else
		r[i]=1;
	}
for(i=0;i<9;i++)
printf("%d",r[i]);
}
void intersection()
{
	
	int i,r[10];
	for(i=0;i<9;i++)
	{
		if(s1[i]==1&&s2[i]==1)
		r[i]=1;
		else
		r[i]=0;
	}
for(i=0;i<9;i++)
printf("%d",r[i]);
	
}
void difference()
{
	int i,diff[10];
	for(i=0;i<9;i++)
	{
		if(s1[i]==1&&s2[i]==0)
		diff[i]=1;
		else
		diff[i]=0;
	}
	
	for(i=0;i<9;i++)
    printf("%d",diff[i]);
	
	
}

  
