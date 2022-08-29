#include<stdio.h>

int main()
{
    int i, j, num=1,row;
printf("enter the number rows");
scanf("%d",&row);
    for(i=0; i<row; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    
    return 0;
}