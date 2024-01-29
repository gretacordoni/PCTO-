#include <stdio.h>

int main()
{
    int numero;
    int numero2;
    
    printf("inserisci un numero1 ");
    
    scanf("%d", &numero);
    printf("inserisci numero2 ");
    scanf("%d", &numero2);

    printf("il tuo risultato è: %d ", (numero + numero2));
    return(0);
}