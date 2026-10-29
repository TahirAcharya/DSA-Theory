#include<stdio.h>
#define MAX 10

	int q[MAX];
	int rear=-1, front=0, choice;
	
void main()
{

do{
	printf("1. Enqueue\n");
	printf("2. Dequeue\n");
	printf("3. Display\n");
	printf("4. Exit\n");
	printf("Queue: Choose options to perform operations\n");
	
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:  enqueue();    // call a enqueue function to add a element to queue
		break;
		
		case 2:  dequeue();   // call a dequeue function to remove a element to queue
		break;
		
		case 3:  display();	// Display elements of Queue
		break;
		
		case 4: exit(0);	// Exit with a message
		break;
		
		default:	//
		break;
			
		
	}
	
}while(choice<4);

}


void dequeue()
{

if(rear==-1 || front>rear)
{
	printf("Cannot delete elements\n");
	return;
	}
	else{
		front++;
	}	
	
}

void display()
{
	int i;
	if (rear==-1 || front>rear)
	{
		printf("No elements found to display\n");
		return;
	}else
	{
		for (i=front; i<=rear;i++)
		printf("%d  ",q[i]);	
	}
	
}

void enqueue()
{
	int item;
	if(rear==MAX-1)
	{
		printf("Queue if full");
		return;
	}
	else{
		printf("Enter an element:");
		scanf("%d",&item);
		rear++;
		q[rear] = item;
	}
}



