#include<stdio.h>
int main ()
{
	int num_1,num_2,nxt,count,sum;
	num_1 = 0;
	num_2 = 1;
	count = 0;
	
 do
 {
 	printf("%d\t", num_1);
 	sum += num_1;
 	nxt = num_1 + num_2;
 	num_1 = num_2;
 	num_2 = nxt;
 	count++;
 } while(count < 10);
 	
	printf("\nits sum = %d",sum);
	printf("\nnum2 = %d",num_2);
 	
 	return 0;
 }


