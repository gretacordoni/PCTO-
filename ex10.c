#include <stdio.h>

int main()
{
    int anno;

    printf("inserisci l'anno: ");
    scanf ("%d",&anno);
    
    if((anno%4 == 0 && anno%100 != 0) || anno%400==0 )
    {
        printf("è bisestile ");
    }
    else
    {
        printf("non è bisestile ");
    }
    return(0);

}