#include <stdio.h>
int main()
{
int i=1,n,a;
printf("\nen ter the limit");
scanf("%d",&n);
printf("\nenter the table");
scanf("%d",&a);
while(i<=n)
{
printf("\n%d*%d=%d",i,a,i*a);
i++;
}
return 0;
}

