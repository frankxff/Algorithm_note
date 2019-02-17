#include<stdio.h>

int main()
{
	int a[10] = {5, 1, 4, 3, 2};
	for(int i = 1; i <= 4; i++)//进行 n-1 趟 
	{
		//第 i 趟时从a[0]到a[n-i-1]都与它们的下一个数比较
		for(int j = 0; j < 5 - i; j++)
		{
			if(a[j] > a[j + 1])
			{	
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for(int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
