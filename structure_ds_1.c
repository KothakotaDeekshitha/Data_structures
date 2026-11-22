#include<stdio.h>
struct student
{
	int rno;
	char name[50];
	float marks;
};
int main()
{
	struct student s1={305,"satya",399.99};        //1st method to assign values
	printf("%d %s %.2f",s1.rno,s1.name,s1.marks);  //in curly braces
	struct student s2={599,"sri",599.99};
	printf("\n%d %s %.2f",s2.rno,s2.name,s2.marks);
	return 0;
}
