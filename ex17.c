#include <stdio.h>

int main()
{
    int n;
    int x=1;
    int y=1;
    
    while (x<=n)
    {
        y=y*x;
        x=x+1;
    
        printf ("%d\n",x);
    }
    
}