#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	int data;
	struct node*next;
}
*head=NULL,*p,*t,*newnode;

void display()
{
	if(head==NULL)
	printf("The single linked list is Empty");
	else
	{
		for(p=head;p!=NULL;p=p->next)
		printf("%d->",p->data);
	}
}
void create() 
{
	int n,i,ele;
	printf("number of element in the list:");
	scanf("%d", &n);
	for (i=0;i<n;i++)
	{
		printf("enter the element");
		scanf("%d", &ele);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=ele;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			p=head;
		}
		else
		{
			for(p=head;p->next!=NULL;p=p->next);
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
void Insert_at_end()
{
	int ele;
	printf("Enter the element");
	scanf("%d",&ele);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->next=NULL;
	for(p=head;p->next!=NULL;p=p->next);
	p->next=newnode;
	p=newnode;
}
void Insert_at_anyposition()
{
	int poss,ele,i;
	printf("Enter the element and position");
	scanf("%d %d",&ele,&poss);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	for(i=1,p=head;i<poss;i++,p=p->next){
		t=p;
	}
	t->next=newnode;
	newnode->next=p;
	p=newnode;
}
void Delete_at_begin()
{
	int ele;
	p=head;
	ele=p->data;
	head=p->next;
	free(p);
	p=head;
	printf("The deleted element = %d",ele);
}
void Delete_at_end()
{
	int ele;
	for(p=head;p->next!=NULL;p=p->next){
		t=p;
	}
	ele=p->data;
	t->next=NULL;
	free(p);
	p=t;
	printf("The deleted element = %d",ele);
}
void Delete_at_anyposition()
{
	int ele,i,pos;
	printf("Enter the position of element to delete : ");
	scanf("%d",&pos);
	for(i=1,p=head;i<pos;i++,p=p->next){
		t=p;
	}
	ele=p->data;
	t->next=p->next;
	free(p);
	p=t;
	printf("The deleted element = %d",ele);
}	
void Even_Odd_Count() 
{
    int evenCount = 0;
    int oddCount = 0;
    
    while (head != NULL) {
        if (head->data % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
        head = head->next;
    }
    
    printf("Even elements count: %d\n", evenCount);
    printf("Odd elements count: %d\n", oddCount);
}
void print_Alternate_elements() 
{
	if(head==NULL){
		printf("The SLL is Empty");
	}
	else
	{
		for(p=head;p!=NULL;p=p->next,p=p->next){
			printf("%d->",p->data);
		}	
	}
}
void print_Reverse_Order(struct Node* head) {
    if (head == NULL) {
        return;
    }
    print_Reverse_Order(head= head->next);
    printf("%d ", head->data);
}
void search_element()
{
	int key,flag=0,pos,i;
	printf("Enter the key : ");
	scanf("%d",&key);
	for(i=1;p!=NULL;i++,p=p->next){
		if(p->data==key){
			flag=1;
			pos=i;
			break;
		}
	}
	if(flag==1){
		printf("The element is present in %d position",pos);
	}
	else{
		printf("The element not there in list");
	}
}
main()
{
	int cho;
	do
	{
		printf("\nMain Menu\n");
		printf("\n1.create\n2.Display\n3.Insert_at_begin\n4.Insert_at_end\n5.Insert_at_anyposition\n6.Delete_at_begin \n7.Delete_at_end \n8.Delete_at_anyposition \n9.Even_Odd_Count \n10.print_Alternate_elements \n11.print_Reverse_Order \n12.Exit");
		printf("\n enter your choice:");
		scanf("%d", &cho);
		switch(cho)
		{
			case 1:create();
			break;
			case 2:display();
			break;
			case 3:Insert_at_begin();
			break;
			case 4:Insert_at_end();
			break;
			case 5:Insert_at_anyposition();
			break;
			case 6:Delete_at_begin();
			break;
			case 7:Delete_at_end();
			break;
			case 8:Delete_at_anyposition();
			break;
			case 9:Even_Odd_Count();
			break;
			case 10:print_Alternate_elements();
			break;
			case 11:print_Reverse_Order();
			break;
			case 12:search_element();
			break;
			case 13:exit(0);
			default
				printf("enter the number between 1 to 13");
		}
	}while(cho>=1 && cho<=13);
}
