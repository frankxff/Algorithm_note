#include<cstdio>
#include<algorithm>
using namespace std;

struct mooncake{
	double store;//�����
	double sell;//���ۼ�
	double price;//���� 
}cake[1010];
bool cmp(mooncake a, mooncake b)
{
	return a.price > b.price;//���尴�۸�Ӹߵ������� 
}

int main() 
{
	int kind;
	double demand;
	scanf("%d %f", &kind, &demand);//�����±������������
	for(int i = 0;i < kind; i++)
	{
		scanf("%f %f", &cake[i].store, &cake[i].sell);
		cake[i].price = cake[i].sell / cake[i].store;//����ÿ���±��ĵ��� 
	} 
	sort(cake, cake + kind, cmp);// �����۴Ӹߵ�������
	double profile = 0;//����
	for(int i = 0; i < kind; i++)
	{
		if(cake[i].sell <= demand)//������������ڿ���� 
		{
			demand -= cake[i].store;//��i���±�ȫ������
			profile += cake[i].sell; 
		}
		else//����±���������������� 
		{
			profile += cake[i].price * demand;//ֻ����ʣ�����������±� 
			break;//�������г���������������ѭ�� 
		}
	} 
	printf("%.2f\n", profile);//����������
	return 0;
}
