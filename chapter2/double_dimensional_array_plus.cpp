#include<stdio.h>

int main()
{
	int a[3][3], b[3][3];
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]); // �����ά����aԪ�� 
		}
	}
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			scanf("%d", &b[i][j]);//�����ά����bԪ�� 
		}
	}
	int c[3][3];
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];//��Ӧλ��Ԫ����Ӳ��ŵ���ά����cԪ���� 
		}
	}
	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("%d ", c[i][j]); //�����ά����cԪ�� 
		}
		printf("\n");
	}
	
	
	return 0;
	
 } 
