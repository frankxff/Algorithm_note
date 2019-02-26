/*
=====选择排序============================================= 
***在要排序的一组数中，选择最小的数与第一个位置的数交换***
*初始状态 【57 68 59 52】 
step1:最小值为52，与第一个交换		  52 | 68   59   57
step2:最小值为57，与第二个交换		  52   57 | 59   68
step3:59即为最小值，无需交换，完成    52   57   59   68
========================================================== 
*/
#include<stdio.h>

int main()
{
	int a[] = {1, 54, 6, 3, 78, 34, 12, 45};
	int n = 8;
	int i, j;
	for(i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);

	}
	printf("\n");
	int position, temp;
	for(i = 0; i < n; i++)
	{
		position = i;
		temp = a[i];
		for(j = i + 1; j < n; j++)
		{
			if(a[j] < temp)
			{
				temp = a[j];
				position = j;
			}
		}
		a[position] = a[i];
		a[i] = temp;
	}
	for(i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
		
	return 0;
}
