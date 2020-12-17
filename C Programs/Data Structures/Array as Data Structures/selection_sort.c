#include<stdio.h>
void selection_sort(int a[],int n);

int main()
{
	int a[50],n,i;
	printf("\nEnter no of elements :");
	scanf("%d",&n);
	printf("\nEnter array elements :");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	selection_sort(a,n);
	

}
void selection_sort(int a[],int n)
{
	int i,k,temp,j,pos,min,compcount;
	printf("\nUnsorted Data:");
	for(k=0;k<n;k++)
	  printf("%5d",a[k]);
	for(j=0;j<n-1;j++)
	  {
min=a[j];
pos=j;	  
  for(i=j+1;i<=n-1;i++,compcount++)
		 if(a[i]<min)
		   {
min=a[i];
pos=i;
}
			temp=a[j];
		        a[j]=a[pos];
a[pos]=temp;
		}
	  
	printf("\n Sorted Data\n");
	for (i=0;i<n;i++)
		printf("%5d",a[i]);
}