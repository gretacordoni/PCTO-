#include <stdio.h>
void stampaAddizione()
{
    int x,y;
    int sol;

    printf("inserisci il numero 1: ");
    scanf(" %d",&x);
    printf("inserisci il numero 2: ");
    scanf(" %d",&y);
    sol=x+y;
    printf("la somma di %d + %d è uguale a %d \n",x,y,sol);
}
void stampaSottrazione()
{
    int x,y;
    int sol;

    printf("inserisci il numero 1: ");
    scanf(" %d",&x);
    printf("inserisci il numero 2: ");
    scanf(" %d",&y);
    sol=x-y;
    printf("la differenza di %d - %d è uguale a %d \n",x,y,sol);
}
void stampaMoltiplicazione()
{
    int x,y;
    int sol;

    printf("inserisci il numero 1: ");
    scanf(" %d",&x);
    printf("inserisci il numero 2: ");
    scanf(" %d",&y);
    sol=x*y;
    printf("il prodotto di %d * %d è uguale a %d \n",x,y,sol);
}
void stampaDivisione()
{
    int x,y;
    int sol;

    printf("inserisci il numero 1: ");
    scanf(" %d",&x);
    printf("inserisci il numero 2: ");
    scanf(" %d",&y);
    sol=x/y;
    printf("la divisione di %d / %d è uguale a %d \n",x,y,sol);
}

int main()
{
    int f, x, y, sol;
    printf("seleziona il numero dell'operazione che vuoi eseguire:\n1=addizione, \n2=sottrazione, \n3=moltiplicazione, \n4=divisione.\n ...");
    scanf(" %d",&f);
    if(f==1)
    {
    stampaAddizione();
    }
    if(f==2)
    {
    stampaSottrazione();
    }
     if(f==3)
    {
    stampaMoltiplicazione();
    }
     if(f==4)
    {
    stampaDivisione();
    }
   return(0);
}