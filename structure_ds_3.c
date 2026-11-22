#include<stdio.h>
struct student
{
	int rno;
	char name[50];
};
int main()
{
	struct student s1;
    printf("enter roll.no and student name");       //third method to assign values
	scanf("%d\n%s",&s1.rno,&s1.name);
	printf("%d %s ",s1.rno,s1.name);
	struct student s2={599,"sri"};
	printf("\n%d %s ",s2.rno,s2.name);
	return 0;
}
