#include<stdio.h>

int main()
{
	int a[10] = {5, 1, 4, 3, 2};
	for(int i = 1; i <= 4; i++)//���� n-1 �� 
	{
		//�� i ��ʱ��a[0]��a[n-i-1]�������ǵ���һ�����Ƚ�
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
