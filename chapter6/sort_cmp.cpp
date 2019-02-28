#include<cstdio>
#include<algorithm>
using namespace std;


//添加cmp比较函数，从大到小排序
bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	int a[] = {3,1,4,2,8,6};
	//默认不加cmp比较函数，默认从小到大排序 
	sort(a, a + 6);
	for(int i = 0; i < 6; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n"); 
	//从大到小排序 
	sort(a, a + 6, cmp);
	for(int i = 0; i < 6; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
