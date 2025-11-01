#include<stdio.h>
int main ()
{
	float grams,packages,kilograms;
	printf("Enter the weight in grams\n:");
	scanf("%f",&grams);
	
	kilograms = grams/1000;
	packages = 1000/grams;
	
	printf("\nThe weight of the package is\n%fkg=\n",kilograms);
	printf("\nThe number of packeges to form one kilogram are\n%fpackages",packages);
	
	return 0;
}
