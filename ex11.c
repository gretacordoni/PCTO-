#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int n3;

    printf("inserisci il numero 1: ");
    scanf ("%d",&n1);

    printf("inserisci il numero 2: ");
    scanf("%d",&n2);

    printf("inserisci il numero 3: ");
    scanf("%d",&n3);
    
    if( n3 + n2>= n1 && n2+n1>=n3 && n3+n1>=n2 )
    {
        printf("è un triangolo ");
    }
    else
    {
        printf("non è un triangolo ");
    }
    return(0);

}