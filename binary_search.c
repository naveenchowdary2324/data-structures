#include <stdio.h>

int main()
{
    int n,i,data,count=0,j;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array:");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);}
    printf("Enter the elements to be search:");
    scanf("%d",&data);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int l=0;
    int r=n;
    while(l<r||r<0)
    {
        int mid;
        mid=(l+r)/2;
        if(a[mid]==data)
        {
            printf("%d element is at %d location",data,mid);
            break;
        }
        else if(data<a[mid])
        {
            l=0;
            r=mid-1;
        }
        else if(data>a[mid])
        {
            l=mid+1;
            r=n;
        }
        else
        count++;
    }
    if(count==n)
    printf("Element Doesn't exist");
    return 0;
}
