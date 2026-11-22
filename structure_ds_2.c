#include<stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name[50];
};
int main()
{
	struct student s1;
	s1.rno=305;           //second method to assign values
	strcpy(s1.name,"satya");    
	printf("%d %s ",s1.rno,s1.name);
	struct student s2={599,"sri"};
	printf("\n%d %s ",s2.rno,s2.name);
	return 0;
}
