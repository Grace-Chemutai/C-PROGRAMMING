#include<stdio.h>
int main ()
{
	int power,i,base;
	int result =1;
	
	printf("Enter an integer:\n");
	scanf("%d",&base);
	
	printf("Enter a power:\n");
	scanf("%d",&power);
	
	for(i=0;i>power;i++)
	{
		result= result*base;
	}
	printf("%d raised to the power of %d is %.6d\n",base,power,result);
	
	return 0;
}
