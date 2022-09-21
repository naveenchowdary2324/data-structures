#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head,*newnode,*temp;
    head = 0;
    int choice;
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
    struct node *avail;
    avail=(struct node *)malloc(sizeof(struct node));
    printf("Enter the element to be insert:");
    scanf("%d",&avail->data);
    avail->next=head;
    head=avail;
    printf("\n************************* LINKED LIST ***********************\n");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    return 0;
}
