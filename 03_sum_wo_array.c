#include<stdio.h>
main()
{
	int x,i,n;
	int add=0;
	int h=0;
	printf("enter the total no of numbers");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		add=add+x;
		if(x>h)
		{
			h=x;	
		}
	}
	printf("add & high =%d , %d",add,h);
}
