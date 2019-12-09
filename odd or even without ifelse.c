#include <stdio.h>
main()
{
	int n;
	printf("\n enter a number");
	scanf("%d",&n);
	printf(n%2==0 ? "even" : "odd");
}
