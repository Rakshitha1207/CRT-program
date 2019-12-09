/*ATM application with infinite loop*/
#include<stdio.h>
main()
{
	int pid,qty,count=1,price;
	char pname[20],ch='y';
	float amount,tamount=0;
	while(ch=='y'|| ch=='Y')
	{
	    printf("\n enter product id:");
	    scanf("%d",&pid);
	    printf("\n enter product name :");
	    scanf("%s",&pname);
	    printf("\n enter the quantity :");
	    scanf("%d",&qty);
	    printf("\n enter the amount :");
	    scanf("%f",&amount);
	    amount=qty*price;
	    tamount+=amount;
	    count++;
	    printf("\n do u wish to continue?(y/n)");
	    //ch=getche();
	    //fflush(stdin);
	    scanf("%c",&ch);
}
        printf("\n number of items purchased %d",count);
        printf("\n total amount %f",tamount);
    }
