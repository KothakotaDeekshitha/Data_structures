//write a c program to read 2 students marks and names by using array of structures 
#include<stdio.h>
struct student
{
	int marks;
	char name[50];
};
int main()
{
	struct student s[20];
		int i;
	for(i=1;i<3;i++)      //i<3 for 2 students data
	{
		printf("enter %d student marks and name",i);
		scanf("%d %s",&s[i].marks,s[i].name);
	}
	for(i=1;i<3;i++)
	{
     	printf("name: %s marks:%d\n",s[i].name,s[i].marks);
     }
    
	return 0;
}
