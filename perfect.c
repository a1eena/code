#include<stdio.h>

int main()
{
    int num, s=0, i;
    printf("Enter any number: ");
    scanf("%d", &num);
    for(i=1; i<num; i++)
    {
        if(num%i == 0)
            s = s+ i;
    }
    if(num == s)
        printf("\nIt's a Perfect Number.");
    else
        printf("\nIt's not a Perfect Number.");
    
    return 0;
}