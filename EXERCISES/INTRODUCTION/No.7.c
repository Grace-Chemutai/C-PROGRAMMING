#include<stdio.h>
void main()
{
	float meters,time_minutes,speed;
	
	printf("Enter distance in meters\n:");
	scanf("%f",&meters);
	printf("Enter time in minutes\n:");
	scanf("%f",&time_minutes);
	
	speed = (meters/1000)/(time_minutes/60);
	
	printf("\nspeed in km/h\n=\n%fkm/h",speed);
	
	
}
