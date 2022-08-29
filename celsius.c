#include <stdio.h>
          int main()
{  
   float fah , cel;

 printf ("enter the temperature value in fahrenheit");
scanf("%f", &fah);

cel=(fah-32)/1.8;

printf(" temperature in celsius is =%0.2f",cel);
return 0;
}