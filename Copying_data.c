#include<stdio.h>
struct student
{
	int rno;
	int m1,m2;
};
int main()
{
	struct student S1,S2;
    S1.rno=1;
    S1.m1=81;
    S1.m2=92;
    S2=S1;
    printf("After copying data \n");
    printf("S2.rno: %d\n",S2.rno);
    printf("S2.m1: %d\n",S2.m1);
    printf("S2.m2: %d\n",S2.m2);
    return 0;
}
