
#include<stdio.h>

int main()
{
    int a[4][3], b[3][2], mat[3][3], sum=0, i, j, k;
    printf("Enter first 4*3 matrix element: ");
    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Enter second 3*2 matrix element: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
            scanf("%d", &b[i][j]);
    }
    printf("\nMultiplying two matrices...");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum=0;
            for(k=0; k<3; k++)
                sum = sum + a[i][k] * b[k][j];
            mat[i][j] = sum;
        }
    }
    printf("\nMultiplication result of the two given Matrix is: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
    
    return 0;
}