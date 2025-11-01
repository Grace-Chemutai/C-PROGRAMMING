#include<stdio.h>
void main()
{
	float weight,height,BMI;
	
	printf("Enter the weight\n:");
	scanf("%f",&weight);
	printf("Enter the height\n:");
	scanf("%f",&height);
	
	BMI = weight / (height * height);
	
	printf("\nThe persons BMI is %f\n=",BMI);
	
}
