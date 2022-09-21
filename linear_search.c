#include <stdio.h>

int main()
{
    int n,i,data,count=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the elements to be search:");
    scanf("%d",&data);
    for(i=0;i<n;i++)
    {
        if(a[i]==data)
        {
            printf("%d is found at %d location",data,i);
            break;
        }
         else
            count++;
    }
    if(count==n)
    printf("Element Doesn't exist");
    return 0;
}
