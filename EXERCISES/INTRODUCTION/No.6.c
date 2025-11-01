#include<stdio.h>
void main()
{
	float celcius,fahrenheit;
	printf("Enter degrees celcius\n:\n");
	scanf("%f",&celcius);
	
	fahrenheit = celcius / 33.8;
	
	printf("\nDegrees Fahrenheit\n=\n%f",fahrenheit);
}
