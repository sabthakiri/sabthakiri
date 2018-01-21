
#include<stdio.h>
void main()
{
int a,b,d,i,val;
result=0;
printf("enter first term and total number of terms");
scanf("%d%d",&a,&b);
printf("enter the common difference");
scanf("%d",&d);
val=a;
for(i=0;i<b;i++)
{
printf("%d",i);
result+=val;
val=val+d;
}
printf("sum of ap series &d:",result);
}
