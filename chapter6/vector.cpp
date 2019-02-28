#include<cstdio>
#include<vector>
using namespace std;

void printvector(vector<int> a)
{
	for(int i = 0; i < a.size(); i++)
	{
		printf("%d ", a[i]); 
	}
	printf("\n");
} 
int main()
{
	vector<int> num;
	for(int i = 0; i <=5; i++)
	{
		//push_back()尾部输入 
		num.push_back(i);
	}
	//循环输出
	for(int i = 0; i < num.size(); i++)
	{
		printf("%d ", num[i]); 
	}
	printf("\n");
	//迭代器指针it输出
	vector<int>::iterator it = num.begin();//将vector的首地址赋给指针it 
	for(int i = 0; i < num.size(); i++)
	{
		printf("%d ", *(it + i));//输出num[i] 
	}
	printf("\n");
	//pop_back()尾部删除
	num.pop_back();//删除了num的尾部元素5
	printvector(num);
	//clear()清空vector
	/*num.clear(); */
	//insert(it, x)插入元素
	num.insert(num.begin() + 2, -1);//将-1插入num[2]的位置
	printvector(num);
	//erase(it)删除单个元素
	num.erase(num.begin() + 1);//删除元素num[1]
	printvector(num);
	//erase(first,last)删除一个区间的元素
	num.erase(num.begin() + 1, num.begin() + 3);//删除从num[1]到num[3]的值
	printvector(num);
	return 0;
}
