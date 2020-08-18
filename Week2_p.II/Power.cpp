#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, p, i = 1, sum = 1;
	printf("Enter BASE value : ");
	scanf("%d",&x);
	printf("Enter Exponent value : ");
	scanf("%d", &p);
	while (i <= p)
	{
		sum *= x;
		i++;
	}
	printf("Result is %d\n",sum);
}