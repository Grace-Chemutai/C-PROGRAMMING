#include<stdio.h>
void main()
{
	int height,base,area;
	printf("Enter the base and the height\n:");
	scanf("%d",&base);
	scanf("%d",&height);
	
	area = 0.5 * base * height;
	
	printf("\nArea =\n%d",area);
}

