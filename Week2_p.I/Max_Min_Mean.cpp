#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int N,num,i,count = 0, max = 0, min = 0;
	float sum = 0;
	printf("Enter N = ");
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		printf("#%d : ",i);
		scanf("%d", &num);
		if (i == 1)
		{
			max = num;
			min = num;
		}
		if (num > max)
		{
			max = num;
		}
		if (num < min)
		{
			min = num;
		}
		sum += num;
	}
	printf("Maximum : %d\n",max);
	printf("Minimum : %d\n", min);
	printf("Mean : %.2f\n", sum/N);

}