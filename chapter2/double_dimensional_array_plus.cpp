#include<stdio.h>

int main()
{
	int a[3][3], b[3][3];
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]); // 输入二维数组a元素 
		}
	}
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			scanf("%d", &b[i][j]);//输入二维数组b元素 
		}
	}
	int c[3][3];
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];//对应位置元素相加并放到二维数组c元素中 
		}
	}
	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("%d ", c[i][j]); //输出二维数组c元素 
		}
		printf("\n");
	}
	
	
	return 0;
	
 } 
