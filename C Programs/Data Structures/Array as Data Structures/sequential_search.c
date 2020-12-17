#include <stdio.h>
#include <stdlib.h>
int compcount=0;
int linearSearch (int A[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        compcount++;
        if(A[i]==key)
        return i;
    }
    return -1;
}
void accept(int A[],int n)
{
    int i;
    printf("Enter the %d elements :",n);
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
}
void main()
{
    int A[20],n,key,pos;
    printf("How many numbers :");
    scanf("%d",&n);
    accept(A,n);
    printf("\nEnter the key to be seached :");
    scanf("%d",&key);
    pos=linearSearch(A,n,key);
    if (pos==-1)
    {
        printf("%d not found in array",key);
    }
    else
    {
        printf("%d found at position %d",key,pos);
    }
    printf("The total number of comparisons = %d",compcount);
    
    
}