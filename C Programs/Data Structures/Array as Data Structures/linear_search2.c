#include<stdio.h>
void linear_search(int [],int,int);
void main()
{
int a[1000],x,n,i;
printf("\nEnter the size of array:");
scanf("%d",&n);
printf("\nEnter the elements of array:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nEnter the element which u want to searched:");
scanf("%d",&x);
linear_search(a,n,x);
}

void linear_search(int a[1000],int n,int x)
{
   int i,flag;
  for(i=0;i<n;i++)
   {
  if(a[i]==x)
   {
	printf("\n %d is present at location %d",x,(i+1));
	flag++;
   }
}
if(flag==0){
     printf("%d is not found");
     }
}
