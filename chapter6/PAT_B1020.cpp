#include<cstdio>
#include<algorithm>
using namespace std;

struct mooncake{
	double store;//库存量
	double sell;//总售价
	double price;//单价 
}cake[1010];
bool cmp(mooncake a, mooncake b)
{
	return a.price > b.price;//定义按价格从高到低排序 
}

int main() 
{
	int kind;
	double demand;
	scanf("%d %f", &kind, &demand);//输入月饼种类和总需求
	for(int i = 0;i < kind; i++)
	{
		scanf("%f %f", &cake[i].store, &cake[i].sell);
		cake[i].price = cake[i].sell / cake[i].store;//计算每种月饼的单价 
	} 
	sort(cake, cake + kind, cmp);// 按单价从高到低排序
	double profile = 0;//收益
	for(int i = 0; i < kind; i++)
	{
		if(cake[i].sell <= demand)//如果需求量大于库存量 
		{
			demand -= cake[i].store;//第i种月饼全部卖出
			profile += cake[i].sell; 
		}
		else//如果月饼库存量高于需求量 
		{
			profile += cake[i].price * demand;//只卖出剩余需求量的月饼 
			break;//已满足市场总需求量，跳出循环 
		}
	} 
	printf("%.2f\n", profile);//输出最大收益
	return 0;
}
