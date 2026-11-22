#include<stdio.h>
struct student
{
    int rno;
    int marks;
};
void update(struct student *);
int main()
{
	struct student S1;
	S1.rno=18;
	S1.marks=927;
	printf("Before update:%d",S1.marks);
	update(&S1);
	printf("\nAfter update:%d",S1.marks);
	return 0;
}
void update(struct student *S1)
{
	S1->marks=S1->marks+5;
}
