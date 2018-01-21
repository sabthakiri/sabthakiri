
#include<stdio.h>
int main()
{
int a,b,r;
scanf("%d %d %d",&a,&b,&r);
if(a<b&&a>r)
{
printf("%d",a);
}
else if(b<a&&b<r)
{
printf("%d",b);
}

else
{
printf("%d",r);
}
return 0;
}
