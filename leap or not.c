#include<stdio.h>
int main()
{
int a;
printf("Enter the number=");
scanf("%d",&a);
if(a%4==0)
{
printf("It is a LEAP year");
}
else
{
printf("It is NOT  LEAP year");
}
return 0;
}