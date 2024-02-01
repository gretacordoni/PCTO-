//creare un programma che chiede all'utente di inserire i 3 lati di un triangolo e utilizza le formule matematiche per 
//calcolare l'area, (b*h)/2, A=√[p(p-a)(p-b)(p-c)]
// e il perimetro del triangolo, b+l1+l2

#include <stdio.h>

int main()
{
    int b,l1,l2;
    int a1;
    float radice, temp;
    int a2, x1, y1, z1;


    printf("inserisci base  \n ");
    scanf(" %d",&b);
    printf("inserisci lato 1\n ");
    scanf(" %d",&l1);
    printf("inserisci lato 2\n ");
    scanf(" %d",&l2);
    int p= l1 + l2 + b ;
    printf(" il perimetro è:%d ",p );

    if( l2+l1>=b && l2+b>=l1 && b+l1>=l2 )
    {
        a1 = p /2;
        x1 =a1- b ;
        y1 = a1- l1;
        z1 = a1- l2;
        a2 = a1*x1*y1*z1;
        radice = a2/2;
        temp = 0;
        while(radice!= temp) 
        {
            temp = radice;
            radice  = (a2/temp + temp )/2;

        }
        printf("\n L'area è: %.3f \n", radice);
    }
    else
    {
        printf("non è un triangolo ");
    }

   return(0);
}