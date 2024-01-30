#include <stdio.h>

int main()
{
    int anni;

    printf("inserisci la tua età: ");
    scanf("%d",&anni);
    if(anni>=18)
    {
        printf("sei maggiorenne ");
    }
    else
    {
        printf("sei minorenne ");
    }
    return(0);
}