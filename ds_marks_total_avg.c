#include<stdio.h>
struct student
{
	int rno;
	int m1,m2,m3;
	int total;
	float avg;
};
int main()
{
	int n,i;
	struct student s[60];
	printf("enter no.of students");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter roll number:\n");
		scanf("%d",&s[i].rno);
		printf("enter 3 subject marks of student with roll.no:%d",s[i].rno);
		scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
    	s[i].total=s[i].m1+s[i].m2+s[i].m3;
    	s[i].avg=s[i].total/3.0;
    }
    printf("rno     total     average\n");
	for(i=0;i<n;i++)
	{
      printf("%d        %d          %.2f\n",s[i].rno,s[i].total,s[i].avg);
    }
   return 0;
}
