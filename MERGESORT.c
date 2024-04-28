#include<stdio.h>

void merge(int a[],int low,int high,int mid)
{
    int i,j,k,b[20];
    i=low,k=low,j=mid+1;
    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    
    while(i<=mid)
    {
        b[k]=a[i];
        i++;
        k++;
    }

    while(j<=high)
    {
        b[k]=a[j];
        j++;
        k++;
    }


    for(i=low;i<=high;i++)
    {
        a[i]=b[i];
    }
}
    void mergesort(int a[],int low,int high)
    {
        int mid;
        if(low<high)
        {
            mid=(low+high)/2;
            mergesort(a,low,mid);
            mergesort(a,mid+1,high);
            merge(a,low,high,mid);
        }
    }

    void main()
    {   
        int i,n,arr[20];
        printf("enter number of elements");
        scanf("%d",&n);
        printf("enter element\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

        mergesort(arr,0,n-1);
        printf("sorted data\n");
        for(i=0;i<=n-1;i++)
        {
            printf("%d\t",arr[i]);
        }
    }