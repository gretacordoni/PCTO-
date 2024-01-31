#include <stdio.h>
void stampaCubo()
{
    int numero;
    int cubo;

    printf("inserisci un numero: ");
    scanf(" %d",&numero);
    cubo = numero *numero *numero;
    printf("il cubo di %d é %d\n", numero,cubo);
}

int main()
{
    int x;
    int y;

    printf("inserisci numero ");
    scanf("%d",&x);

    while (x>0)
    {
        if (/* condition */)
        {
            /* code */
        }
        else
        {
            /* code */
        }
        
        y=y*x;
        x=x-1;
    }
   printf("%d\n",result);

   stampaCubo()
   return(0)
}