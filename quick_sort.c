#include <stdio.h>
int quicksort(int arr[100],int f,int l)
{
    int i,j,pivot,temp;
    if(f<l)
    {
        pivot=arr[f];
        i=f;
        j=l+1;
        while(i<j)
        {
            do
            {
			i++;}
            while(arr[i]<pivot);
            do
            {
			j--;}
            while(arr[j]>pivot);
            if(i<j)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        temp=arr[f];
        arr[f]=arr[j];
        arr[j]=temp;
        quicksort(arr,f,j-1);
        quicksort(arr,j+1,l);
    }
}
int main()
{
    int size,i,j;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int a[size];
    printf("Enter the elements:");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    quicksort(a,0,size-1);
    for(i=0;i<size;i++)
    printf("%d\t",a[i]);
    return 0;
}
