#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#define MAX 5
int top=-1,stk[MAX];
void push()
{
	int ele;
	printf("enter the element = ");
	scanf("%d",&ele);
	if(top==MAX-1){
		printf("STACK IS FULL");
	}
	else{
		top=top+1;
		stk[top]=ele;
	}	
}
void pop()
{
	if(top==-1){
		printf("The Stack is Empty");
	}
	else{
		top=top-1;
	}
}
void peak()
{
	if(top==-1){
		printf("Stack is Empty");
	}
	else{
		printf("The top element = %d",stk[top]);
	}
}
void disply()
{
	int i;
	if(top==-1){
		printf("Stack is Empty");
	}
	else{
		for(i=top;i>=0;i--){
			printf("%d\n",stk[i]);
		}
	}
}
int main()
{
	int cho;
	do{
		printf("\n Main Menu\n");
		printf("\n1.Push ");
		printf("\n2.pop ");
		printf("\n3.peak ");
		printf("\n4.Disply ");
		printf("\n5.Exit ");
		printf("\nEnter you choise = ");
		scanf("%d",&cho);
		switch(cho){
			case 1:
				push() ;
				break;
			case 2:
				pop() ;
				break;
			case 3:
				peak() ;
				break;
			case 4:
				disply() ;
				break;
			case 5:
				break;
			default:
				printf("Enter the choise between 1 to 5");
		}
	}while(cho>=1 && cho<=5);
}


