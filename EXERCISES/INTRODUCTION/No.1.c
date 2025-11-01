#include<stdio.h>
void main()
{
    int number_1 ,number_2 ,number_3 ,total,product,average;
	
	printf("Enter the first number:");
	scanf("%d",&number_1);
	printf("Enter the second number:");
	scanf("%d",&number_2);
	printf("Enter the third number:");
	scanf("%d",&number_3);
	
	total = number_1 + number_2 + number_3;
	product = number_1 * number_2 * number_3;
	average = total/3;
	
	printf("\nThe sum is %d\n",total);
	printf("\nThe product is %d\n",product);
	printf("\nThe average is %d\n",average);
	
}
