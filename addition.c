#include <stdio.h>
int main()
{
    int n, i;
    float num, sum=0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%f", &num);
        sum = sum+num;
    }
    printf("\nSum of all %d numbers = %0.2f", n, sum);
    
    return 0;
}