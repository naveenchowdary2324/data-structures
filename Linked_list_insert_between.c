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
    head = 0;
    int choice,val;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==NULL){
        printf("Do u want to continue [0,1]:");
            scanf("%d",&choice);
        head=temp=newnode;}
        else
        {
            temp->next=newnode;
            temp=newnode;
            printf("Do u want to continue [0,1]:");
            scanf("%d",&choice);
        }
    }
    printf("\n******************* LINKED LIST BEFORE INSERTION ********************\n");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    struct node *avail;
    avail=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the element to be insert:");
    scanf("%d",&avail->data);
    printf("Enter the precedding value:");
    scanf("%d",&val);
    temp=head;
    while(temp->data!=val)
    {
        ptr=temp->next;
        temp=temp->next;
    }
    avail->next=ptr->next;
    temp->next=avail;
    printf("\n*************** LINKED LIST AFTER INSERTION *****************\n");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    return 0;
}
