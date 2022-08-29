#include<stdio.h>

int main()

{

int a[5][5],b[5][5],c[5][5],m,n,p,q,i,j,k;

printf("Enter size of first matrix\n");

scanf("%d %d",&m,&n);

printf("Enter size of second matrix\n");

scanf("%d %d",&p,&q);

if(n!=p)

printf("Matrix multiplication is not possible");

else

{

printf("Enter the elements of 1st matrix\n");

for(i=0;i<m;i++)

for(j=0;j<n;j++)

scanf("%d",&a[i][j]);

printf("Enter the elements of the 2nd matrix\n");

for(i=0;i<p;i++)

for(j=0;j<q;j++)

scanf("%d",&b[i][j]);

for(i=0;i<m;i++)

for(j=0;j<q;j++)

{

c[i][j]=0;

for(k=0;k<n;k++)

c[i][j]=c[i][j]+a[i][k]*b[k][j];

}

printf("\n A- matrix is\n");

for(i=0;i<m;i++)

{

for(j=0;j<n;j++)

printf("%d\t",a[i][j]);

printf("\n");

}

printf("\n B- matrix is\n");

for(i=0;i<p;i++)

{

for(j=0;j<q;j++)

printf("%d\t",b[i][j]);

printf("\n");

}

printf("The product of two matrix is\n");

for(i=0;i<m;i++)

{

for(j=0;j<q;j++)

printf("%d\t",c[i][j]);

printf("\n");

}
}
}