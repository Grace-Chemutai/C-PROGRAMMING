#include<stdio.h>
void main()
{
	int num_1,num_2,ans;
	char op;
	
	printf("Enter two numbers\t:");
	scanf("%d %d",&num_1,&num_2);
	printf("Enter an operater\t:");
	scanf(" %c", &op);
	
	{
		if (op == '-')
		ans = num_1 - num_2;
		else if (op == '+')
		ans = num_1 + num_2;
		else if (op == '/')
		ans = num_1 / num_2;
		else if (op == '*')
		ans = num_1 * num_2;
		else
		printf("Error:invalid operater\a");
	}
	printf("\n%d %c %d\t= %d",num_1,op,num_2,ans);	
}
