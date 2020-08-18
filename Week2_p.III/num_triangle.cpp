#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
  int row,i,j;
  printf("Input number of rows: ");
  scanf("%d",&row);
  for (i = 1; i <= row; i++)
  {
	  for (j = 1; j <= i; j++)
	  {
		  printf("%d",j);
	  }
	  printf("\n");
  }
}