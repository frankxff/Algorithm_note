#include<cstdio>

int main()
{
	int row, col;
	char c;
	
	scanf("%d %c", &col, &c);
	if(col % 2 == 1)//�������Ϊ����
		row = col / 2 + 1;//����Ϊ������һ�룬�������� 
	else
		row = col / 2; //����Ϊż�� 
	
	//��ӡ��һ��
	for(int i = 0 ; i < col; i++)
	{
		printf("%c", c);
	 } 
	printf("\n");
	//��ӡ��2 ~ row-1��
	for(int i = 0; i < (row - 2); i++)
	{
		printf("%c", c);
		for(int m = 0; m < (col - 2); m++)
		{
			printf(" ");
		}
	printf("%c", c);
	printf("\n");
	 } 
	//��ӡ��row��
	for(int i = 0 ; i < col; i++)
	{
		printf("%c", c);
	} 
	return 0;
} 
