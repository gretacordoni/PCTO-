#include <stdio.h>
int main()
{   
    char parola[100];
    int c=0;
    
    printf("inserisci la parola da convertire in maiuscolo: ");
    scanf("%s",parola);

    while (c<100 && parola[c]!=0 )
    c=c+1;
    {
        if(parola[c]>97 && parola[c]<122)
        {
            parola[c]-=32;
            printf(" %c", parola[c]);
        }
        else if(parola[c]>= 65 && parola[c]<= 90)
        {
            printf("%c",parola[c]);
        }

    }
    printf("\n");
    return(0);
}