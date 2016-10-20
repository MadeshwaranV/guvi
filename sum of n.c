#include<stdio.h>
int main()
{
int n,sum = 0,c,d; 
printf("Enter the numbers");
scanf("%d",&n);
printf("Enter %d integers\n",n);
for(c = 1;c<=n;c++)
{
scanf("%d", &d);
sum =sum+d;
}
printf("Sum of entered integers = %d\n",sum);
return 0;
}