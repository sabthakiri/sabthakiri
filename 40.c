#include <stdio.h>
int main(void) 
{
int i,a1=0,a2=1,n,k;
printf("enter the numbers");
scanf("%d",&n);
printf("the fibonacii series:");
for(i=1;i<=n;++i)
{
	printf("%d",a1);
	k=a1+a2;
	a1=a2;
	a2=k;
}
}
