#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
}*head=NULL,*p,*t,*newnode;
void Display()
{
	if(head==NULL){
		printf("The SLL is empty");
	}
	else
	{
		for(p=head;p!=NULL;p=p->next){
			printf("%d->",p->data);
		}
	}
}
void Create()
{
	int n,i,ele;
	printf("No of elements in the link");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the element");
		scanf("%d",&ele);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=ele;
		newnode->next=NULL;
		if(head==NULL){
			head=newnode;
			p=head;
		}
		else
		{
			for(p=head;p-NULL;p=p->next);
			p->next=newnode;
			p=newnode;
		}
	}
}
void Insert_at_begin()
{
	int ele;
	printf("Enter the element");
	scanf("%d",&ele);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	p=head;
	newnode->next=p;
	head=newnode;
	p=newnode;
}
int main()
{
	int cho;
	do{
		printf("\n Main Menu \n"); 
		printf("\n1.Create \n2.Display\n 3.Exit \n");
		printf("Enter your option");
		scanf("%d",&cho);
		switch(cho)
		{
			case 1: Create();
			case 2: Display();
			case 3: Insert_at_begin()
			case 4: Exit(0);
			default:
				printf("Enter the number between 1 to 4");
		}
	}while(cho>=1 && cho<=3);
}