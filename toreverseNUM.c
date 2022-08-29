#include <stdio.h>
            int main()
        {
             int n , rev=0, remainder;
           
            printf("ENTER A NUMBER");
             scanf(" %d", &n);
                          while(n!=0)
                {
                      remainder=n%10;     
                      rev=rev*10+remainder;
                      n=n/10;
                }
             printf(" REVERSE NUMBER=%d\n",rev);
                 return 0;
       }
 