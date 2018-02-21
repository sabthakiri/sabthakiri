#include<stdio.h>

int main()
{
    int m,r,n,count=0,sum=0;
    printf("\n enter the interger \n");
    scanf("%d",&n);
    m=n;
    while(m!=0)
    {
        count=count+1;
        r=m%10;
        printf("%d",r);
        sum=sum+r;
        m=m/10;
        
    }
    printf("number of digits in:%d is %d \n",n,count);
    return 0;
}
