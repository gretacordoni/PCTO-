#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("inserisci il numero che vuoi verificare sia multiplo del secondo numero: ");
    scanf ("%d",&x);

    printf("inserisci il secondo numero: ");
    scanf("%d",&y);
    
    if(x*y%0 )
    {
        printf("non è multiplo ");
    }
    else
    {
        printf("è multiplo ");
    }
    return(0);

}