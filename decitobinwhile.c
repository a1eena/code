#include <stdio.h>
int main()
{
int n,a=1,r,bin=0;
printf("\nEnter the number ");
scanf("%d",&n);
while(n!=0)
{
r=n%2;
bin=bin+(r*a);
a=a*10;
n=n/2;
}
printf("\nBinary value:%d\n",bin);
return 0;
}

