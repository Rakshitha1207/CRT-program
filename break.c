/*asking user to stop where ever he wants*/
#include <stdio.h>
main()
{
	int i,n;
	printf("enter the number to stop");
	scanf("%d",&n);
	for(i=1;i<=20;i++)
	{
		printf("\n%d",i);
		if(i==n)
		break;
	}
}

