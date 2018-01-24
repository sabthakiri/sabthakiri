#include<stdio.h>
int main()
{
int h,min,sec;
printf("Enter the min:");
scanf("%d",&min);
if(min<60)
{
printf("%d",min);
}
else{
	h=min/60;
printf("hours:%d\n",h);
	sec=min%60;
printf("minutes:%d\n",sec);
	return 0;
}
