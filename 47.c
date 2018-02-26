#include <stdio.h>
int main()
{
int o[10];
int i;
int greatest;
printf("Enter ten values:");
for (i = 0; i < 10; i++)
{
scanf("%d", &o[i]);
 }
greatest = o[0];
for (i = 0; i < 10; i++) 
{
if (o[i] > greatest) 
{
greatest = o[i];
    }
     }
printf("Greatest of ten numbers is %d", greatest);
return 0;
  }
