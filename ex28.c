#include <stdio.h>
int somma(int a, int b)
{
    int somma;

    somma = a + b;
    return (somma);
}

int main()
{
    int x=5;
    int y=7;

    printf("il risultato è: %d\n",somma(x,y));
    
   return(0)
}