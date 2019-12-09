/*to check largest number using operators*/
#include <stdio.h>
main()
{
	char a,b,c;
	printf("\n enter 3 values");
	scanf("%d%d%d",&a,&b,&c);
	printf(a==b && b==c ?"all are equal":a>b && a>c ?"a is big":b<c?"b is big":"c is big");
	
	}
