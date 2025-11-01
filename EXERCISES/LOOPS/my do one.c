#include<stdio.h>
int main()
{
	int k;

	k = 200;

	do
	{
		printf("\nk = %d",k);
		k = k - 5;
	}while(k >= 50); 

	printf("\n\n");
	return 0;
}
