#include<stdio.h>
void main()
{
	int num,count;
	num = 2;
	count = 1;
	
	do
{
	printf("\t%d",num);
	num = num * 3;
	count++;
}	while(count <=10);
printf("\t");
}
