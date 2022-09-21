#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head,*newnode,*temp,*ptr;
    int choice;
    head=0;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the number:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==NULL)
        {
            printf("DO U want to continue[0,1]:");
            scanf("%d",&choice);    
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
            printf("DO U want to continue[0,1]:");
            scanf("%d",&choice);
        }
    }
    printf("\n***** Linked List before Deletion ******\n");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    int val;
    printf("\nEnter the element which is preceeding to be deleting element:");
    scanf("%d",&val);
    temp=head;
    while(temp->data!=val)
    {
        temp=temp->next;
        ptr=temp->next;
    }
    temp->next=ptr->next;
    free(ptr);
    temp=head;
    while(temp!=0)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    return 0;
}
