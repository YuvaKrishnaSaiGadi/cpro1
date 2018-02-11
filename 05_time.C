#include<stdio.h>
main()
{
int h,m,s;
a:printf("please enter time in \"HH MM SS\" format\n");
scanf("%d%d%d",&h,&m,&s);
if(h>=0&&h<=23&&m>=0&&m<=59&&s>=0&&s<=59)
printf("%d:%d:%d",h,m,s);
else
{
printf("invalid time\n");
goto a;
}
}
