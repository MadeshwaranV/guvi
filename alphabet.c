#include<stdio.h>
int main()
{
char c;
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
{
printf("It is an Alphabet");
}
else
{
printf("It is  Not a alphabet");
}