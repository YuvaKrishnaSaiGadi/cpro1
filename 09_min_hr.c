#include<stdio.h>
void main()
{
	int m,h;
	printf("enter the minutes : ");
	scanf("%d",&m);
	h=m/60;
	m=m%60;
	printf("hours and minutes : %d hours %d minutes ",h,m);
}
