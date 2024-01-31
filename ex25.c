#include <stdio.h>
void stampaConsonanteOVocale()
{
    char c;

    printf("inserisci un carattere: \n");
    scanf(" %c", &c);
    if(c =='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        printf("è una vocale \n");
    }
    else 
    {   printf("è una consonante\n");
    }
}

int main()
{
    stampaConsonanteOVocale();
   return(0);
}