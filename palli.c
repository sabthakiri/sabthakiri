#include<stdio.h>
int main()
{
int mem,rev=0,n,t;
printf("enter the number:");
scanf("%d",&n);
t=n;
while(n!=0)
{
mem=n%10;
rev=rev*10+mem;
n=n/10;
}
if(t==rev);
{
printf("no",n);
}
else
printf("yes",n);
}
return 0;
}
