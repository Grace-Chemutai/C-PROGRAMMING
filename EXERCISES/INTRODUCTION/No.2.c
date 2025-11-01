#include<stdio.h>
void main()
{
	float radius, Area, circumference ;
	printf("Enter the radius :");
	scanf("%f", &radius);
	
	Area = 22.0/7 * (radius*radius);
	
	circumference = 2 * 22.0/7* radius;
	
	printf("\nThe area of the circle is %.2f\n",Area);
	printf("\nThe circumference of the circle is %.2f\n",circumference);
}
