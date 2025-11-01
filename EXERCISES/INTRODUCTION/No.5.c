#include<stdio.h>
void main()
{
	float centimeters, meters;
	printf("Enter the measurements in centimeters\n:");
	scanf("%f",&centimeters);
	
	meters = centimeters/100;
	
	printf("measurements (m)\n=.2%f",meters);
}
