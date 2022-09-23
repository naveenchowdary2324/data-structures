#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t THE STACK OPERATIONS USING ARRAY ARE \n\t ");
    printf("\n\t 1.PUSH  \n\t 2.POP  \n\t 3.DISPLAY  \n\t 4.EXIT");
    do
    {
        printf("\n Choose an operation:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\tSUCCESSFULLY EXITED\n\t");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid operation(1/2/3/4)\n\t");
            }
                
        }
    }
    while(choice!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");
        
    }
    else
    {
        printf(" Enter a value to be pushed into STACK:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements in the STACK are %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The remaining elements in STACK are\n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n choose your next operation");
    }
    else
    {
        printf("\n The STACK is empty");
    }
}
