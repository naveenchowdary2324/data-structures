#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	int n;
	printf("Enter the size of First Linked List:");
	scanf("%d",&n);
	struct node *head1,*head2,*newnode,*temp,*ptr;
	head1=NULL;
	head2=NULL;
	while(n--)
	{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head1==NULL)
	temp=head1=newnode;
	else
	{
		temp->next=newnode;
		temp=newnode;
	}
	}
	int n1;
	printf("Enter the size Of Second Linked List:");
	scanf("%d",&n1);
	while(n1--)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the value:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head2==NULL)
		temp=head2=newnode;
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	temp=head1;
	ptr=temp->next;
	while(temp!=NULL)
	{
		while(ptr!=NULL)
		{
			if((temp->data)>(ptr->data))
			{
				int swap;
				swap=temp->data;
				temp->data=ptr->data;
				ptr->data=swap;
			}
			ptr=ptr->next;
		}
		temp=temp->next;
	}
	temp=head1;
	while(temp!=NULL)
	{
		printf("%d ->",temp->data);
		temp=temp->next;
	}
	printf("NULL");
	printf("\n");
	temp=head2;
	ptr=temp->next;
	while(temp!=NULL)
	{
		while(ptr!=NULL)
		{
			if((temp->data)<(ptr->data))
			{
				int swap=temp->data;
				temp->data=ptr->data;
				ptr->data=swap;
			}
			ptr=ptr->next;
		}
		temp=temp->next;
	}
	temp=head2;
	while(temp!=NULL)
	{
		printf("%d ->",temp->data);
		temp=temp->next;
	}
	printf("NULL");
	temp=head1;
	while(temp!=NULL)
	{
		temp=temp->next;
	}
	temp->next=head2;
	ptr=head1;
	while(ptr!=NULL)
	{
		printf("%d ->",ptr->data);
		ptr=ptr->next;
	}
	printf("NULL");
	return 0;
}
