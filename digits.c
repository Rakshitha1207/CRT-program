/*to know number of digits*/
#include <stdio.h>
main()
{
	int a;
	printf("enter the digit:");
	scanf("%d",a);
	if(a>=0 && a<10)
	printf("1 digit number");
	else if(a<100)
	printf("2 digit number");
	else if(a<1000)
	printf("3 digit number");
	else
	printf("more thwn 4 digit number");
	
}
