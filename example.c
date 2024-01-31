#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("inserisci numero ");
    scanf("%d",&x);

    while (x>0)
    {

        y=y*x;
        x=x-1;
    }
   printf("%d\n",result);
}