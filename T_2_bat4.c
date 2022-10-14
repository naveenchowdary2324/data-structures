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









//another code
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *newnode(){
    struct node *ptr;
    ptr=malloc(sizeof(struct node));
    ptr->next=NULL;
    return ptr;
};
void print(struct node *start){
    start=start->next;
    while(start->next !=NULL){
        printf("%d ",start->data);
        start=start->next;
    }
}
int insert(struct node *start,int value){
    struct node *future=start;
    while(future != NULL){
        future=future->next;
        if(start->data <=value && future->data > value){
            struct node *new=newnode();
            new->next=start->next;
            new->data=value;
            start->next=new;
            break;
        }
        else if(future->next == NULL){
            struct node *new=newnode();
            new->data=value;
            future->next=new;
            future->data=value;
            break;
        }
        start=start->next;
    }
}

void main(){
    struct node *start=newnode();
    struct node *present=newnode();
    start->next=present;
    int i,n,value,no_of_LL;
    printf("Enter the no.of linked lists to be created: ");
    scanf("%d",&no_of_LL);
    printf("Enter the size of first linked list to be created: ");
    scanf("%d",&n);
    printf("Enter %d numbers of 1 linked list: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&value);
        present->data=value;
        present->next=newnode();
        present=present->next;
    }
    int count=1;
    while(count<no_of_LL){
        count++;
        printf("\nEnter the size of %d linked list: ",count);
        scanf("%d",&n);
        printf("\nEnter %d numbers of %d linked list: ",n,count);
        for(i=0;i<n;i++){
            scanf("%d",&value);
            insert(start,value);
        }
        print(start);
    }
    printf("\nFinal linked list: ");		
    print(start);
    
}
