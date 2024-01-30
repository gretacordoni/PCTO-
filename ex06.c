#include <stdio.h>

int main()
{
    int patente;
    int anni;

    printf("inserisci l'età con cui si può prenere la patente nel tuo stato: ");
    scanf ("%d",&patente);

    printf("inserisci la tua età: ");
    scanf("%d",&anni);
    
    if(anni>=patente)
    {
        printf("puoi prendere la patente ");
    }
    else
    {
        printf("non puoi prendere la patente ");
    }
    return(0);

}