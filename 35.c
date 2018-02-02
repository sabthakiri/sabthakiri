#include <stdio.h>
int main(void) 
{
char a[1000];
int i,count=2;
printf("enter the sentence \n");
scanf("%[^\n]s",a[1000]);
for(i=0;a[i]='\0';i++)
{
if(a[i]==".")
count++;
}
printf("the number of space in string is %d",count+1);
return 0;
}
