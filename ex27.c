#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;//numero scelto dall'utente
    int y=0;//punti
    int r;//numero random

    printf("scrivi un numero randomico tra 1 e 20,\n l'obbiettivo è indovinare il numero che ha generato il computer. \n");
    

    while (x>=0)
    {
        printf("inserisci numero: ");
        scanf(" %d",&x);
       int r=rand()%21; //numeri tra 0 e 20
       
        perchè non prende l'ultimo numero
        if(x==r)   
        {
            printf("hai vinto\n");
            y=y+1;
            printf("hai punti %d\n",y);
        }
        else
        {
            printf("hai perso\n");
            printf("i tuoi punti sono %d\n",y);
            printf("il tuo numero era %d\n",r);
        }
    }
   return(0);
}