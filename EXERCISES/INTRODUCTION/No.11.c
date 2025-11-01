#include<stdio.h>
void main()
{
	float num,cube,cuberoot,square,squareroot;
	
	printf("Enter the number\n:");
	scanf("%f",&num);
	
	cube = num * num * num ;
	squareroot = num;
	cuberoot = num;
	square = num * num;
	
	printf("\nThe squareroot of the number is %f=",squareroot);
	printf("\nThe cube of the number is %f=",cube);
	printf("\nThe square of the number is %f=",square);
	printf("\nThe cuberoot of the number is %f=",cuberoot);
}
