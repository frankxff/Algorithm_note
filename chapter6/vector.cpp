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
		//push_back()β������ 
		num.push_back(i);
	}
	//ѭ�����
	for(int i = 0; i < num.size(); i++)
	{
		printf("%d ", num[i]); 
	}
	printf("\n");
	//������ָ��it���
	vector<int>::iterator it = num.begin();//��vector���׵�ַ����ָ��it 
	for(int i = 0; i < num.size(); i++)
	{
		printf("%d ", *(it + i));//���num[i] 
	}
	printf("\n");
	//pop_back()β��ɾ��
	num.pop_back();//ɾ����num��β��Ԫ��5
	printvector(num);
	//clear()���vector
	/*num.clear(); */
	//insert(it, x)����Ԫ��
	num.insert(num.begin() + 2, -1);//��-1����num[2]��λ��
	printvector(num);
	//erase(it)ɾ������Ԫ��
	num.erase(num.begin() + 1);//ɾ��Ԫ��num[1]
	printvector(num);
	//erase(first,last)ɾ��һ�������Ԫ��
	num.erase(num.begin() + 1, num.begin() + 3);//ɾ����num[1]��num[3]��ֵ
	printvector(num);
	return 0;
}
