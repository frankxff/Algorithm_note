#include<cstdio>
#include<algorithm>
using namespace std;


//���cmp�ȽϺ������Ӵ�С����
bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	int a[] = {3,1,4,2,8,6};
	//Ĭ�ϲ���cmp�ȽϺ�����Ĭ�ϴ�С�������� 
	sort(a, a + 6);
	for(int i = 0; i < 6; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n"); 
	//�Ӵ�С���� 
	sort(a, a + 6, cmp);
	for(int i = 0; i < 6; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
