#include<cstdio>

int main()
{
	int a, b, d;
	scanf("%d%d%d", &a, &b, &d);
	int sum = a + b;
	int ans[31], num = 0;//ans���D���Ƶ�ÿһλ
	while(sum != 0)
	{
		ans[num]= sum % d;
		sum = sum / d;
		num++;
	}
	for(int i = num - 1; i >=0; i--)//�Ӹ�λ����λ������� 
	{
		printf("%d", ans[i]);
	}
	return 0; 
}
