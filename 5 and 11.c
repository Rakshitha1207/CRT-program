/* to check the number is divisible by 5 and 11*/
#include <stdio.h>
main()
{
	int b;
	printf("enter the number");
	scanf("%d",b);
	if(b%5==0 && b%11==0)
	printf("divisible by 5 and 11");
	else
	printf("not divisible");
}
