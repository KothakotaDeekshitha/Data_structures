#include<stdio.h>
enum day
{
	Mon,Tues,Wed,Thur,Fri,Sat,Sun
};
int main()
{
	enum day today;
	today=Wed;
    printf("today is day number:%d\n",today);
    return 0;
}
