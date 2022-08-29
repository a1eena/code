#include<stdio.h>

int main()
{
    int numCall, temp, charge;
    printf("Enter total unit of calls made this month: ");
    scanf("%d", &numCall);
    printf("\n");
    if(numCall<=200)
    {
        printf("You have not crossed the limit of 200 calls");
        printf("\nNo charge.");
    }
    else
    {
        if(numCall<=500)
        {
            temp = numCall - 200;
            charge = temp * 1;
            printf("The charge you have to paid = %d", charge);
        }
        else
        {
            temp= numCall - 500;
            charge = temp * 2;
            charge = charge + 300;
            printf("The charge you have to paid = %d", charge);
        }
    }
    
    return 0;
}