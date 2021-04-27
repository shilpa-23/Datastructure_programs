#include <stdio.h>
#define MAX 5
void enqueue();
void dequeue();
void display();
void peek();
int queue_arr[MAX],i;
int isfull();
int isempty();
int rear = - 1;
int front = - 1;
int main()
{
 
     int ch;
    do
    {
    	printf("\nMENU\n");
        printf("\n1.Enqueue\n2.Dequeue\n3.peek\n4.Display \n5.Quit \n");
        printf("Enter your choice : \n");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            default:
            printf("Wrong choice \n");
        } 
    }while(ch!=5);
} 
 
void enqueue()
{
    int val;
    if (isfull())
    {
	
    printf("Queue is full\n");
   }
    else
    {
        if (front == - 1)
        front = 0;
        rear=(rear+1)%MAX;
        printf("\nEnter the element :\n");
        scanf("%d", &val);
        queue_arr[rear] = val;
        printf("value inserted is %d",val);
    }
} 
 
void dequeue()
{
	int val;
    if(isempty())
	{
		printf("queue is empty");
	
   }
    else
    {
    	val=queue_arr[front];
        if(front==rear)
        {
        	front=-1;
        	rear=-1;
		}
		else
		{
			front=(front+1)%MAX;
		}
		printf("deleted element is%d",val);

    }
}  
void display()
{
	
    int i;
    if (isempty())
    
        printf("Queue is empty \n");
        
    else
    {
        printf("Queue is : \n");
        for (i = front; i!= rear; i=(i+1)%MAX)
        {
        printf("%d ", queue_arr[i]);

    }
    printf("%d",queue_arr[i]);
    
} 
}
void peek()
{
	printf("front is=%d\n",queue_arr[front]);
}
int isfull()
{
	if((front==rear+1)||(front==0&&rear==MAX-1))
	return 1;
	else
	return 0;
}
int isempty()
{

    if( front==-1)
    return 1;
    else 
	return 0;
}


