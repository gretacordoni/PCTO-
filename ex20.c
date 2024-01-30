#include <stdio.h>

int main()
{
	int n;
    int y=1;
	int x=0;
	printf("inserisci il numero: ");
    scanf("%d", &n);
    

	while(x<3 && y<=n/2)
	{
		if(n%y==0) 
        {
		x=x+1;	
		y=y+1;
        }
	}
	if (x==1)
	   printf("il numero e' primo\n ");
	else
	   printf("il numero non e' primo\n ");

}