/*even numbers from n to 1*/
#include <stdio.h>
main()
{
	int a,n;
	printf("\n enter the number");
	scanf("%d",&n);
	if(n%2==1)
	n=n-1;
	while(n>=2)
	{
		printf("\n %d",n);
		n-=2;
	}
}

