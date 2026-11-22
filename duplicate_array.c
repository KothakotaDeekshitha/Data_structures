#include<stdio.h>
int main()
{
	int i,j,n,a[50];
	printf("enter n value");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			printf("duplicate element :%d\n",a[i]);
		}
	}
	return 0;
}
