#include <stdio.h>

int main()
{
	int numero;
    int x=2;
	int divisori =0;

	printf("inserisci il numero: ");
    scanf("%d", &n);
    
    while(x<numero)
	{
		if(numero%x==0) 
        {
		divisori=divisori+1;	
        }
        x=x+1;
	}
	if (divisori==0)
	   printf("il numero è primo\n ");
	else
	   printf("il numero non è primo\n ");

}