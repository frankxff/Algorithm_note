#include<cstdio>
#include<algorithm>
#include<cstring> 
using namespace std;

struct student{
	char id[15];//准考证号 
	int score;//分数
	int location_number;//考场号
	int local_rank;//考场内排名
	}stu[30010];
bool cmp(student a, student b)
{
	if(a.score != b.score)
	{
		return a.score > b.score;//先按分数高低排序 
	}
	else
	{
		return strcmp(a.id, b.id) < 0;//若分数相同，则按准考证号从小到大排序 
	}
}
int main()
{
	int n, k, num = 0; //n为考场数，k为考场人数，num为总考生数
	scanf("%d", &n);//考场总数
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&k);//该考场内人数 
		for(int j = 0; j < k;j++)
		{
			scanf("%s%d",stu[num].id,&stu[num].score);
			stu[num].location_number = i;//该考生考场号为i
			num++;//总考生数加1
		}
		sort(stu + num - k, stu + num, cmp);//将该考场的考生排序
		stu[num - k].local_rank = 1;//该考场第一名的local_rank记为1
		for(int j = num - k + 1; j < num; j++)//对该考场剩余的考生 
		{
			if(stu[j].score == stu[j - 1].score)//如果与前一位考生同分 
			{
				stu[j].local_rank = stu[j - 1].local_rank;//rank也相同 
			}
			else//如果与前一位考生不同分 
			{
				stu[j].local_rank = j + 1 - (num - k);//local_rank为该考生的人数 
			} 
		}		
	} 
	
	printf("%d\n", num);//输出考生数
	sort(stu, stu + num,cmp);//对所有的考生排序
	int r = 1;					//当前考生排名
	for(int i = 0; i < num; i++)
	{
		if(i > 0 && stu[i].score != stu[i -1].score)
		{
			r = r +1;//当前考生与上一个考生分数不同时，让r更新为r+1 
		}
		printf("%s ", stu[i].id);
		printf("%d %d %d\n", r, stu[i].location_number, stu[i].local_rank);
		
	} 
	return 0;
}
