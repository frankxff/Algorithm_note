#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
	int a[] = {9,4,2,5,6,-1};
	//��a[0]~a[3]�Ӵ�С����
	sort(a, a + 4);
	for(int i = 0; i < 6; i++)
	{
		printf("%d ", a[i]);
	} 
	printf("\n");
	//��a[0]~a[5]�Ӵ�С����
	sort(a, a + 6);
	for(int i = 0; i < 6; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}

