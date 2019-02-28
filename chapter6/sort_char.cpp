#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
	char a[] = {'W', 'O', 'R', 'L', 'D'};
	sort(a, a + 5);
	for(int i = 0; i < 5; i++){
		printf("%c ", a[i]); 
	}
	return 0;
} 
