/*leap year or not*/
#include <stdio.h>
main()
{
	int a;
	printf("enter a");
	scanf("%d",&a);
	if((a%4==0 && a%100!=0) || a%400==0)
	printf("leap near");
	else
	printf("non leap year");
}
