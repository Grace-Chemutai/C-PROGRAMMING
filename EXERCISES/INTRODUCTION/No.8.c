#include<stdio.h>
void main()
{
	int kilometers,meters;
	printf("Enter distance in kilometers\n:");
	scanf("%d",&kilometers);
	
	meters = kilometers * 1000;
	
	printf("\nDistance in meters\n%dm=",meters);
}
