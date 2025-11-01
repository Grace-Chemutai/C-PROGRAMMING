#include<stdio.h>
int main()
{
	char alpha;
	
	alpha = 'a';

	do
	{
		printf("\t%c,", alpha);
		alpha++;
	}while(alpha <= 'z'); 

	printf("\t");
	return 0; 
}
