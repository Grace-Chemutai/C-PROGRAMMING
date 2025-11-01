#include<stdio.h>
int main()
{
	int num;

	num = 5;

	do
	{
		printf("\t%d,",num);
		num = num +5 ;
	}while(num <=300); 

	printf("\t\t");
	return 0;
}
