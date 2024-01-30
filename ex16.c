#include <stdio.h>

int main()
{
    int x=1;
    int y=0;

    while (x<=20)
    {
        
        (y=x+y);
        (x=x+2);
        printf ("%d\n",y);
    }
    
}