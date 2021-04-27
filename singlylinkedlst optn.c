#include<stdio.h>
#include<stdlib.h>
struct node
{
	int value;
	struct node *link;
	
};
typedef struct node node1;
void inb();
void ine();
void inbw();
void delb();
void dele();
void delebw();
void disply();
node1 *nptr;
node1 *start=NULL;
node1 *create();
void main()
{
	int ch;
	do
	{
	printf("\n\n\tlinked list implimentation\n\t____________________________________________________\n\n\t1.insert at the bignning\n\t2.insert at end\n\t3.insert in between\n\t4.delete from bigginning\n\t5.delete from end\n\t6.delete in between\n\t7.disply\n\t8.exit\n\n\tenter your choice: ");	
			 scanf("%d",&ch) ;
			 switch(ch)
			 {
			 	case 1:inb();
			 	break;
				case 2:ine();
			 	break;
			 	case 3:inbw();
			 	break;
			 	case 4:delb();
			 	break;
			 	case 5:dele();
			 	break;
			 	case 6:delebw();
			 	break;
			 	case 7:disply();
			 	break;
			 	case 8:exit(0);
			 	break;
			 	default:printf("\ninvalid choice");
			 	
			 	
			 }
		}while(ch!=8);
	}
node1 *create()
{
	node1*nptr=(node1*)malloc(sizeof(node1));
	if(nptr==NULL)
	{
		printf("memory overflow");
		return 0;
	}
	else
	return nptr;
}
void inb()
{
	int val;
	node1*nptr=create();
	printf("enter element:");
	scanf("%d",&val);
	nptr->value=val;
	if(start==NULL)
	{
		start=nptr;
		nptr->link=NULL;
	}
	else
	{
		nptr->link=start;
		start=nptr;
	}
}
void ine()
{
	node1*temp,*nptr=create();
	int val;
	printf("enter element:");
	scanf("%d",&val);
	nptr->value=val;
	nptr->link=NULL;
	temp=start;
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	temp->link=nptr;
}
void  inbw()
{
	node1 *temp,*nptr=create();
	int val,pos,i;
	printf("enter the element and position to be inserted:");
	scanf("%d %d",&val,&pos);
	nptr->value=val;
	nptr->link=NULL;
	temp=start;
	if(pos==1)
	{
		nptr->link=start;
		start=nptr;
		
	}
	else
	{
		for(i=1;i<pos-1;i++)
		{
			temp=temp->link;
		}
		nptr->link=temp->link;
		temp->link=nptr;
	}
}
	void disply()
	{
		node1*temp;
		if(start==NULL)
		printf("list empty");
		temp=start;
		printf("elements are:");
		while(temp!=NULL)
		{
			
			printf("%d\t",temp->value);
			temp=temp->link;
		}
		}
		void delb()
		{
			node1*temp;
			if(start==NULL)
			printf("list empty");
			else{
				
			temp=start;
			start=start->link;
			free(temp);
		   }
	}
	
void dele()
{
	node1*temp,*prev;
	temp=start;
	while(temp->link!=NULL)
	{
		prev=temp;
		temp=temp->link;
	}
	prev->link=NULL;
	free(temp);
}
	void delebw()
	{
		node1*temp,*prev;
		int i,pos;
		printf("enter the position to be deleted:");
		scanf(" %d",&pos);
		temp=start;
		if(pos==1)
		start=start->link;
		for(i=1;i<pos;i++)
		{
			prev=temp;
			temp=temp->link;
		}
		prev->link=temp->link;
		free(temp);
	}

