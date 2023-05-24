#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#define MAX 5
int front=-1,rear=-1,QUE[MAX];
void Enque()
{
	int ele;
	printf("enter the element = ");
	scanf("%d",&ele);
	if(rear==MAX-1){
		printf("QUEUE IS FULL");
	}
	else{
		if(front==-1 && rear==-1){
			front=0;
			rear=0;
		}
		else{
			rear=rear+1;
    	}
		QUE[rear]=ele;
	}
}
void Deque()
{
	int ele;
	if(front==-1 && rear==-1){
		printf("The QUEUE is Empty");
	}
	else{
		ele=QUE[front];
		if(front==rear){
			front=-1;
			rear=-1;
		}
		else{
			front=front+1;
			printf("The deleted Element = %d ",ele);
		}
	}
}
void disply()
{
	int i;
	if(front==-1,rear==-1){
		printf("Queue is Empty");
	}
	else{
		for(i=front;i>=rear;i--){
			printf("%d\t",QUE[i]);
		}
	}
}
int main()
{
	int cho;
	do{
		printf("\n Main Menu\n");
		printf("\n1.ENQUE ");
		printf("\n2.DEQUE ");
		printf("\n3.Disply ");
		printf("\n4.Exit ");
		printf("\nEnter you choise = ");
		scanf("%d",&cho);
		switch(cho){
			case 1:
				Enque() ;
				break;
			case 2:
				Deque() ;
				break;
			case 3:
				disply() ;
				break;
			case 4:
				break;
			default:
				printf("Enter the choise between 1 to 4");
		}
	}while(cho>=1 && cho<=4);
}
