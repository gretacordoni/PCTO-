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
    
    if( n3 - n2 == n2-n1)
    {
        printf("possono essere messi in una progressione aritmetica ");
    }
    else
    {
        printf("non possono essere messi in una progressione aritmetica ");
    }
    return(0);

}
