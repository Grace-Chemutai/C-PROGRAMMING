#include<stdio.h>
int main()
{
	int k;

	k = 1000000;

	do
	{
		printf("\nk = %d",k);
		k = k / 10 ;
	}while(k >= 10); 

	printf("\n\n");
	return 0;
}
