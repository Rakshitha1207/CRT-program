/*to find large number out of 3*/
#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n enter 3 values:");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && a==c)
	printf("all are equal");
	else if(a>b&& a>c)
	printf("a is big");
	else if(b>c)
	printf("b is big");
	else
	printf("c is big");
}
