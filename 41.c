#include<stdio.h>
int main()
{
int i;
char a[30];int b;
printf("enter the number\n");
scanf("%s %d",&a,&b);
for(i=0;i<b;i++)
{
   printf("%s\n",a);
}
return 0;
}
