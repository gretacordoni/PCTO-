#include <stdio.h>

int main()
{
    int numero;
    int numero2;
    int numero3;
    int numero4;
    int numero5;
    
    printf("inserisci l'età di Greta ");
    scanf("%d", &numero);

    printf("inserisci l'età di Marco ");
    scanf("%d", &numero2);

    printf("inserisci l'età di Lorenzo ");
    scanf("%d", &numero3);

    printf("inserisci l'età di Aurora ");
    scanf("%d", &numero4);

    printf("inserisci l'età di Sofia ");
    scanf("%d", &numero5);

    printf("il tuo risultato è: %d ", (numero + numero2 + numero3 + numero4 + numero5));
    return(0);
}