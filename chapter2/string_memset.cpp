#include<stdio.h>
#include<string.h>//使用其memset 

int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	memset(a, 0, sizeof(a));//将数组a的元素均赋值为0
	
	for(int i = 0; i<5; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n\n");
	
	memset(a, -1, sizeof(a));
	for(int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	
	return 0;
	
	
}
