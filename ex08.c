#include <stdio.h>

int main()
{
    int tc;

    printf("inserisci la temperatura: ");
    scanf("%d",&tc);

    printf("temperatura in kelvin: %d ",(tc+273));

    printf(" e temperatura in fahreneit: %d ",(tc*9/5+32) );
    
    return(0);
}