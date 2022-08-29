


#include<stdio.h>
int main()
{
    int n,i=2,a=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i <= n/2)
    {
        if(n%i == 0)
        {
            a=1;
            break;
        }
        i++;
    }
    if(a==0)
        printf("Prime Number");
    else
        printf("Not Prime Number");
    return 0;
}
