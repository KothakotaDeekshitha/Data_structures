#include<stdio.h>
struct student
{
int rno;
int marks;
};
int main()
{
	struct student S1;
	S1.rno=18;
	S1.marks=927;
	display(S1.rno,S1.marks);
	return 0;
}
void display (int rno,int marks)
{
	printf("%d\n%d",rno,marks);
}
