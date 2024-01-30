#include <stdio.h>

int main()
{

    int anno;
    

    printf("inserisci il tuo anno di nascita: ");
    scanf("%d",&anno);
    if(anno>1969)
    {
        printf("sei nato dopo il 1969 ");
    }
    else
    {
        printf("sei nato prima del 1969 ");
    }
    if((anno>1969)&&(anno-1969)){
        printf("sei nato dopo il 1969 di %d ")
    }
    else
    {

    }
    return(0);
}