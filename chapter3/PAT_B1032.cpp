#include<cstdio>

const int maxN = 100010;

int school[maxN] = {0};//��¼ÿ��ѧУ���ܷ� 

int main()
{
//	for(int i = 0; i < maxN; i++)
//	{
//		printf("%d\n", school[i]);
//		
//	} 
//	printf("��ɣ�");
	
	int n, schID, score;   
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d%d", &schID, &score);  //����ѧУID������
		school[schID] += score;  //ѧУschID���ܷ�����score 
	}
	
	int k = 1, MAX = -1;	//����ֵܷ�ѧУID�����ܷ� 
	for(int i = 0; i <= n; i++)	//������ѧУ��ѡ���ܷ���ߵ�һ�� 
	{
		if(school[i] > MAX)
		{
			MAX = school[i];
			k = i;
		}
			
	}
	printf("%d %d\n", k, MAX);	//����ܷ���ߵ�ѧУID�����ܷ� 
	
	
	return 0;
}

