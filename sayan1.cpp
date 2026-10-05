# include <stdio.h>
int main()
{
int n,digit=0,ct=0;
printf ("enter a number:");
scanf("%d",&n);
while (n>0)
{ 
digit=n%10;
n/=10;
ct++;
}
printf ("count of digits of a whole number:%d",ct);
}
