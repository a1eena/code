#include <stdio.h>
int main()
{
    switch(getchar())
    {
        case 'Y': printf(    "Yes\n"); break;
        case 'N': printf(     "No\n"); break;
        case 'M': printf(  "Maybe\n"); break;
        default : printf("Unknown\n");
    }
    return 0;
}