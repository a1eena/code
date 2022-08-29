#include<stdio.h>
int main()
{
int a[][];
for(int i=0;i<4;i++)
{
for(int j=0;j<4;j++)
{
if(i+j==3)
printf("%d",a[i][j]);
}
}
}