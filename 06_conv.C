#include<stdio.h>
main()
{
int b;
float c;
char a;
printf("enter a character:");
scanf("%c",&a);
printf("enter an integer value:");
scanf("%d",&b);
printf("enter a float value:");
scanf("%f",&c);
printf("\ncharacter to integer\t=%d",a);
printf("\ninteger to float\t=%f",(float)b);
printf("\nfloat to integer\t=%d",(int)c);
}
