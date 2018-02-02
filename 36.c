#include <stdio.h>
int main(void) 
{
char a[1000];
int i,count=1;
printf("enter the sentence \n");
scanf("%[^\n]s",a[1000]);
for(i=0;a[i]='\0';i++)
{
if(a[i]==0)
count++;
}
printf("the number of spacel charaecters is %d",count+2);
return 0;
}
