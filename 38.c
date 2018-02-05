#include<stdio.h>
void swap(int *,int*);
void main()
{
int a,b;
printf("enter the two number");
scanf("%d %d",&a,&b);
printf ("before swap %d %d\n",a,b);
swap(&a,&b);
printf("after swap %d %d\n",a,b);
}
void swap(int*n,int*m)
{
	*n=*n^*m;
	*m=*n^*m;
	*n=*n^*m;
}
