#include<cstdio>

int main()
{
	int row, col;
	char c;
	
	scanf("%d %c", &col, &c);
	if(col % 2 == 1)//如果列数为奇数
		row = col / 2 + 1;//行数为列数的一半，四舍五入 
	else
		row = col / 2; //列数为偶数 
	
	//打印第一行
	for(int i = 0 ; i < col; i++)
	{
		printf("%c", c);
	 } 
	printf("\n");
	//打印第2 ~ row-1行
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
	//打印第row行
	for(int i = 0 ; i < col; i++)
	{
		printf("%c", c);
	} 
	return 0;
} 
