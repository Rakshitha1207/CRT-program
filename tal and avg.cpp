#include <stdio.h>
main()
{
	int m,p,c,tot;
	float avg;
	printf("\enter marks:");
	scanf("%d%d%d",&m,&p,&c);
	tot=m+p+c;
	avg=(float)tot/3;
	printf("\n total marks: %d",tot);
	printf("\n avg marks :%f",avg);
}
