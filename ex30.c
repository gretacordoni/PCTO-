#include <stdio.h>
void stampaMassimo(int x, int y)
{

    if(x>y)
    {
        printf("il massimo é %d\n",x);
    }
    else
    {
        printf("il massimo é %d\n",y);
    }
}

int main()
{
    int x;
    int y;

    printf("inserisci il numero 1 \n ");
    scanf(" %d",&x);
    printf("inserisci il numero 2 \n");
    scanf(" %d",&y);

    stampaMassimo(x, y);

    return(0);
}