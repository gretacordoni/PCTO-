#include <stdio.h>

int main()
{
    int x=0;//numero dei pezzi
    float costo, z;
 

    while (x>=0)
    {
        printf("inserisci numero ");
        scanf("%d",&x);

        costo = x*5;

        if (x>=30 && x <50)
        {
            z= costo *10 / 100;
            costo = costo - z;
            printf("%f \n", costo);
        }
        if (x>=50)
        {
            z= costo *15 / 100;
            costo = costo-z;
            printf("%f \n", costo);
        }
        else if (x<30 && x>0)
        {
            printf("%f \n", costo);            
        }
    }
    printf("errore\n");
    return(0);
}