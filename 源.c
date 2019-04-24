#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int  find(int n)
{
	int sum = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int arr[200];
	for (i = 0; i < 999; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
			if (j == i - 1)
			{
				printf("%d ", i);
				arr[k] = i;
				k++;
			}
		}
	}
	printf("\n");
	for (i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int main()
{
	printf("%d", find(8));//求出0到999前七个质数的和
	system("pause");
	return 0;
}