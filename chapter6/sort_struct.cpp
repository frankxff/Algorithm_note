#include<cstdio>
#include<algorithm>
using namespace std;

struct node{
	int x;
	int y;
}ssd[10];

bool cmp(node a, node b)
{
	return a.x > b.x;//按x值从大到小对结构体数组排序 
}

int main()
{
	ssd[0].x = 2;//{2,2}
	ssd[0].y = 2;
	ssd[1].x = 1;//{1,3}
	ssd[1].y = 3;
	ssd[2].x = 3;//{3,1}
	ssd[2].y = 1;
	sort(ssd, ssd + 3, cmp);//排序
	for(int i = 0; i < 3;i++)
	{
		printf("%d %d\n", ssd[i].x, ssd[i].y);
	}
	return 0;
}
