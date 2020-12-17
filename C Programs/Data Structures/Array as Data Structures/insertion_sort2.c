#include <stdio.h>
int compcount=0;
void accept (int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void display (int a[], int n)
{
    int i;
    for (i=0;i<n;i++)
    printf("%d\t",a[i]);
}
void insertionSort(int a[], int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=a[i];
        for(j=i;j>=0;j--, compcount++)
        if(key<a[j])
        a[j+1]=a[j];
        else
        break;
            a[j+1]=key;        
    }
}
int main()
{
    int a[20],i,n;
    printf("How many numbers:");
    scanf("%d",&n);
    printf("\nEnter the unsorted elements:");
    accept(a,n);
    insertionSort(a,n);
    printf("\nThe sortedd output is:");
    display(a,n);
    printf("\nTotal numbers of comparisons = %d", compcount);
    return 0;
}