#include <stdio.h>
          int main()
{  
    int year;
  printf("enter the year\n");
  scanf("%d",&year);
   
if(year%400==0)
    {
      printf("\n%d it is a leap year\n",year);
      }
  else if(year%4==0)
   {
      printf("\n%d is a leap year\n",year);
}
   else if(year%100==0)
 {
  printf("\n%d is not a leap year\n",year);
}
else
{
printf("\nNOT A LEAP YEAR\n");
}
return 0;

}