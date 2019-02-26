#include<cstdio>

int month[13][2] = {{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},
					{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
					//ƽ�������ÿ�µ����� 
bool isLeap(int year)
{
	return(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);//�ж��Ƿ�Ϊ���� 
}
int main()
{
	int time1, y1, m1, d1;
	int time2, y2, m2, d2;
	scanf("%d", &time1);
	scanf("%d", &time2);
	if(time1 > time2)//���time1����time2,�򻥻� 
	{
		int temp;
		temp = time1;
		time1 = time2;
		time2 = temp;
	} 
	y1 = time1 / 10000; m1 = time1 % 10000 / 100; d1 = time1 % 100;
	y2 = time2 / 10000; m2 = time2 % 10000 / 100; d2 = time2 % 100;
	int ans = 1;//��¼���
	//��һ������û�дﵽ�ڶ������ڽ���ѭ��
	while(y1 < y2 || m1 < m2 || d1 < d2)
	{
		d1++;//������1
		if(d1 == month[m1][isLeap(y1)] + 1)//�������������
		{
			//���ڱ�Ϊ�¸���1��
			m1++;
			d1 = 1; 
		} 
		if(m1 == 13)//�·���12����ʱ 
		{
			//���ڱ�Ϊ��һ��1�� 
			y1++;
			m1 = 1;
		}
		ans++; //�ۼ� 
		
	} 
	printf("%d\n", ans);//������
	return 0; 
} 
