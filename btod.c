#include<stdio.h>
int btod(int);
int main()
{
	int bin,deci;
	printf("enter the binary value:");
	scanf("%d",&bin);
	deci=btod(bin);
	printf("decimal value of %d is %d",bin,deci);
}
int btod(int bin)
{
	if(bin==0)
	{
		return 0;
	}
	else
	{
		return bin%10+(btod(bin/10)*2);
	}
}
