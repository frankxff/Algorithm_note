#include<cstdio>

int month[13][2] = {{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},
					{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
					//平年和闰年每月的天数 
bool isLeap(int year)
{
	return(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);//判断是否为闰年 
}
int main()
{
	int time1, y1, m1, d1;
	int time2, y2, m2, d2;
	scanf("%d", &time1);
	scanf("%d", &time2);
	if(time1 > time2)//如果time1大于time2,则互换 
	{
		int temp;
		temp = time1;
		time1 = time2;
		time2 = temp;
	} 
	y1 = time1 / 10000; m1 = time1 % 10000 / 100; d1 = time1 % 100;
	y2 = time2 / 10000; m2 = time2 % 10000 / 100; d2 = time2 % 100;
	int ans = 1;//记录结果
	//第一个日期没有达到第二个日期进行循环
	while(y1 < y2 || m1 < m2 || d1 < d2)
	{
		d1++;//天数加1
		if(d1 == month[m1][isLeap(y1)] + 1)//如果满当月天数
		{
			//日期变为下个月1号
			m1++;
			d1 = 1; 
		} 
		if(m1 == 13)//月份满12个月时 
		{
			//日期变为下一年1月 
			y1++;
			m1 = 1;
		}
		ans++; //累计 
		
	} 
	printf("%d\n", ans);//输出结果
	return 0; 
} 
