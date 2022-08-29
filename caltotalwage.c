#include <stdio.h>
      char name[50]; 
 
 int main()
    {
       float  wage=50;
       float hr  ,  temphr, tempwage, totalwage;
        
       printf("Enter the name of the employes:%s\n", name);
     

      printf("Enter totalhours of worked:\n");
             scanf("%f", &hr);

         if( hr<=8)
        
               totalwage = wage;
         
             else if (hr>8 && hr<=12)
               {
                    temphr = hr-8;
                     tempwage = temphr *10;
                     totalwage = tempwage +wage;
              }
                  else if (hr>12 && hr<=16)
                       {
                             temphr = hr-12;
                             tempwage  =  4*10;
                             totalwage = wage + tempwage +(temphr*20);
                        }
                                   else if ( hr>16 && hr<=20)
                                        {
                                                temphr = hr- 16;
                                                tempwage = (4*10)+(4*20);
                                                totalwage = wage + tempwage + (temphr*25);
                                        }
                                                      else if ( hr>20 && hr<=24)
                                                                {
                                                                      temphr = hr-20;
                                                                      tempwage = (4*10)+(4*20)+(4*25);
                                                                      tempwage = wage + tempwage + (temphr* 40);
                                                                }
                                                                           else
                                                                                 {
                                                                                         printf("a single day only has 24 hours");
                                                                                           return 0;
                                                                                  }
                                                                                         printf(" TOTAL WAGE :\t\t\t %0.2f", totalwage );
                                                                                            return 0;
                                                                                          }



                                   














                                                 
                  
                 
