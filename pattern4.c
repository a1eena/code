#include<stdio.h>

int main()
{
    int i, j, row, s;
    printf("Enter Number of Rows: ");
    scanf("%d", &row);
    s = row-1;
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=s; j++)
            printf(" ");
        s--;
        for(j=1; j<=(2*i-1); j++)
            printf("*");
        printf("\n");
    }
    s= 1;
    for(i=1; i<=(row-1); i++)
    {
        for(j=1; j<=s; j++)
            printf(" ");
        s++;
        for(j=1; j<=(2*(row-i)-1); j++)
            printf("*");
        printf("\n");
    }
    
    return 0;
}