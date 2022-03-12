#include<stdio.h>
int main()
{
int i,j,t,n;
int a[20];
printf("enter how many elements you want to enter");
scanf("%d",&n);
printf("%d\n",n);
printf("enter the arrey elements");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
	for(j=0;j<n-1-i;j++)
	{
		if(a[j]>a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
}
for(i=0;i<n;i++)
{
	printf("%d",a[i]);
}
return 0;
}
