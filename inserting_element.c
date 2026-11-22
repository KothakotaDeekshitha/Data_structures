#include<stdio.h>
int main()
{
	int arr[5];
	int i,n;
	printf("enter no.of elements");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=n;i>2;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[2]=25;
	n=n+1;
	for(i=0;i<=5;i++)
	{
		printf("%d ",arr[i]);
	}
}
