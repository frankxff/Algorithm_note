#include<cstdio>
#include<algorithm>
#include<cstring> 
using namespace std;

struct student{
	char id[15];//׼��֤�� 
	int score;//����
	int location_number;//������
	int local_rank;//����������
	}stu[30010];
bool cmp(student a, student b)
{
	if(a.score != b.score)
	{
		return a.score > b.score;//�Ȱ������ߵ����� 
	}
	else
	{
		return strcmp(a.id, b.id) < 0;//��������ͬ����׼��֤�Ŵ�С�������� 
	}
}
int main()
{
	int n, k, num = 0; //nΪ��������kΪ����������numΪ�ܿ�����
	scanf("%d", &n);//��������
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&k);//�ÿ��������� 
		for(int j = 0; j < k;j++)
		{
			scanf("%s%d",stu[num].id,&stu[num].score);
			stu[num].location_number = i;//�ÿ���������Ϊi
			num++;//�ܿ�������1
		}
		sort(stu + num - k, stu + num, cmp);//���ÿ����Ŀ�������
		stu[num - k].local_rank = 1;//�ÿ�����һ����local_rank��Ϊ1
		for(int j = num - k + 1; j < num; j++)//�Ըÿ���ʣ��Ŀ��� 
		{
			if(stu[j].score == stu[j - 1].score)//�����ǰһλ����ͬ�� 
			{
				stu[j].local_rank = stu[j - 1].local_rank;//rankҲ��ͬ 
			}
			else//�����ǰһλ������ͬ�� 
			{
				stu[j].local_rank = j + 1 - (num - k);//local_rankΪ�ÿ��������� 
			} 
		}		
	} 
	
	printf("%d\n", num);//���������
	sort(stu, stu + num,cmp);//�����еĿ�������
	int r = 1;					//��ǰ��������
	for(int i = 0; i < num; i++)
	{
		if(i > 0 && stu[i].score != stu[i -1].score)
		{
			r = r +1;//��ǰ��������һ������������ͬʱ����r����Ϊr+1 
		}
		printf("%s ", stu[i].id);
		printf("%d %d %d\n", r, stu[i].location_number, stu[i].local_rank);
		
	} 
	return 0;
}
