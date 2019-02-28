#include<cstdio>
#include<algorithm>
using namespace std;

bool cmp(double a, double b)
{
	return a > b;
}
int main()
{
	double a[] = {1.2, 3.4, 0.1, -1.8, 9.1};
	sort(a, a + 5, cmp);
	for(int i =0; i < 5; i++)
	{
		printf("%0.1f ", a[i]);
	}
	return 0;
}

