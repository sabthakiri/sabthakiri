#include <stdio.h>

int main()
{
int a,b;
int temp;
printf("enter the number\n");
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("after swap is %d %d",a,b);
	return 0;
}
