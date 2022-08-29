#include<stdio.h>
     int main()
{
   int a[10], i, num, p;
   printf("enter any 10 numbers");
       for(i=0;i<10;i++)
        scanf("%d",&a[i]);
         
             printf("\nenter a number to search");
              scanf("%d",&num);
                 for(i=0;i<10;i++)
             {
                   if(a[i]==num)
                        {
                           p=i;
                            break;
                        }
          }
              printf("found at %d",p);
               return 0;
}