#include<stdio.h>
struct node
{
	int data;
	struct node *next;
};
int main ()
{
	struct node a,b;
	a.data=40;
	a.next=NULL;
	b.data=50;
	b.next=NULL;
	a.next=&b;
	printf("%d",a.next->data);
	return 0;
}
