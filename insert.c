#include <stdio.h>
int main()
 {
 int LA[] = {2,4,6,8,10};
 int item = 25, k = 3, n = 5;
 int i = 0, j = n;
 printf("The original array elements are :\n");
 for(i = 0; i<n; i++)
 {
 printf("LA[%d] = %d \n", i, LA[i]);
 }
 n = n + 1;
 while( j >= k) {
 LA[j+1] = LA[j];
 j = j - 1;
 }
 LA[k] = item;
 printf("The array elements after insertion :\n");
 for(i = 0; i<n; i++) {
 printf("LA[%d] = %d \n", i, LA[i]);
 }
}