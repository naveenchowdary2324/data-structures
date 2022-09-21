
#include<stdio.h>
void main()
{
    int n,i,j,pos;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[pos]>a[j])
            pos=j;
        }
        if(pos!=i)
        {
            int temp;
            temp=a[pos];
            a[pos]=a[i];
            a[i]=temp;
        }
    }
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
