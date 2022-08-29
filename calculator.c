#include<stdio.h>
int main()
{
    int x,y;
    char cal;
    float result;

    printf("Enter First Number:");
    scanf("%d", &x);
    printf("Enter Second Number:");
    scanf("%d", &y);
    printf("Enter Operater What Do You Want:");
    scanf(" %c", &cal);
    switch (cal)
    {
    case '+':
        result=x+y;
        printf("The Sum Is %f", result);
        break;

    case '-':
        result=x-y;
        printf("The Subtract Is %f", result);
        break;

    case '*':
        result=x*y;
        printf("The Multiply Is %f", result);
        break;

    case '/':
        result=x/y;
        printf("The Division Is %f", result);
        break;

        default:
    printf("Please Enter Envalid Operater");
        break;
    }
}