#include<stdio.h>
int main()
{
	int a=10;
    int	*p=&a;
    int	**dp=&p;
	printf("%d\n",a);
	printf("%d\n",*p);
	printf("%d\n",**dp);
}
