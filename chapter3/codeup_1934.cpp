#include<cstdio>

const int maxn = 210;

int num[maxn]; //���n���� 

int main()
{
	int n, x;
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]); //����n���� 
	}
	
	scanf("%d", &x);//�������ѯ����
	int k;
	for(int i = 0; i < n; i++)//�������� 
	{
		if(num[i] == x)//����ҵ�x 
		{
			k = i;
			printf("%d", k);//�����Ӧ���±� 
			break;			//�˳����� 
		}
	}
	if(k == n)				//���û���ҵ� 
	{
		printf("-1\n");		//���-1 
	}
	return 0; 
 } 
