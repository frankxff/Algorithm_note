/*
=====ð������========================================================= 
***�������¶����ڵ����������αȽϣ��ýϴ�������³�����С��������ð*** 
*��ʼ״̬��57   68   59   52��
round1:    57   59   52   68
round2:    57   52   59   68
round3:    52   57   59   68
=====���============================================================= 

*/

#include<stdio.h>
int main()
{
	int a[] = {49,38,65,97,76,13,27,49,78,34,12,64,5,4,62,99,98,54,56,17,18,23,34,15,35,25,53,51};
	int n = 28;
	int i, j;
	for(i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
	int temp;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n - 1 - i; j++)
		{
			if(a[j] > a[j + 1])
			{
			temp = a[j];
			a[j] = a[j + 1];
			a[j + 1] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
	
	return 0;
} 