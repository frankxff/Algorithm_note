#include<cstdio>

const int maxn = 210;

int num[maxn]; //存放n个数 

int main()
{
	int n, x;
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]); //输入n个数 
	}
	
	scanf("%d", &x);//输入待查询的数
	int k;
	for(int i = 0; i < n; i++)//遍历数组 
	{
		if(num[i] == x)//如果找到x 
		{
			k = i;
			printf("%d", k);//输出对应的下标 
			break;			//退出查找 
		}
	}
	if(k == n)				//如果没有找到 
	{
		printf("-1\n");		//输出-1 
	}
	return 0; 
 } 
