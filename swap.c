#include <stdio.h>
       int main()
       {
        double  first , second, temp;

        printf("enter first number;");
        scanf("%lf", &first);
        printf( "enter second number;");
        scanf ("%lf",&second);

            temp = first;
            first=second;
            second=temp;
        
        printf("\nAfter swapping, firstNumber = %.2lf\n", first);
        printf("\nAfter swapping, secondNumber = %.2lf\n", second);

         
        
        return 0;
}