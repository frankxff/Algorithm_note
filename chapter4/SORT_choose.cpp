/*
=====ѡ������============================================= 
***��Ҫ�����һ�����У�ѡ����С�������һ��λ�õ�������***
*��ʼ״̬ ��57 68 59 52�� 
step1:��СֵΪ52�����һ������		  52 | 68   59   57
step2:��СֵΪ57����ڶ�������		  52   57 | 59   68
step3:59��Ϊ��Сֵ�����轻�������    52   57   59   68
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
