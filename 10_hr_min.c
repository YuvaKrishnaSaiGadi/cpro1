#include<stdio.h>
void main()
{
	int m,h;
	printf("enter the hours & minutes : ");
	scanf("%d%d",&h,&m);
	m=h*60+m;
	printf(" total number of minutes :  %d m ",m);
	
}
