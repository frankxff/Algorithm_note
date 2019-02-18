#include<cstdio>

const int maxN = 100010;

int school[maxN] = {0};//记录每个学校的总分 

int main()
{
//	for(int i = 0; i < maxN; i++)
//	{
//		printf("%d\n", school[i]);
//		
//	} 
//	printf("完成！");
	
	int n, schID, score;   
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d%d", &schID, &score);  //输入学校ID、分数
		school[schID] += score;  //学校schID的总分增加score 
	}
	
	int k = 1, MAX = -1;	//最高总分的学校ID及其总分 
	for(int i = 0; i <= n; i++)	//从所有学校中选出总分最高的一个 
	{
		if(school[i] > MAX)
		{
			MAX = school[i];
			k = i;
		}
			
	}
	printf("%d %d\n", k, MAX);	//输出总分最高的学校ID及其总分 
	
	
	return 0;
}

