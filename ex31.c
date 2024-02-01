#include <stdio.h>
void stampaFattoriale()
{
    int x;
    int y;

    printf("inserisci un numero: ");
    scanf(" %d",&x);
    y = 1;
   
    while (x>0)
    {
        y = y * x;
        x = x - 1;  
    }
    printf("il fattoriale é %d\n",y);
}

int main()
{
    
   stampaFattoriale();
   return(0);
}