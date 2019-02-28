#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
	int a[] = {9,4,2,5,6,-1};
	//将a[0]~a[3]从大到小排列
	sort(a, a + 4);
	for(int i = 0; i < 6; i++)
	{
		printf("%d ", a[i]);
	} 
	printf("\n");
	//将a[0]~a[5]从大到小排序
	sort(a, a + 6);
	for(int i = 0; i < 6; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}

