#include<stdio.h>
#include<math.h>

const double pi = acos(-1);//��Ϊcos(��)=-1������ ��= ������acos(-1)����˶�����Ǿ�ȷֵ

int main()
{
	double a = sin(pi * 45 / 180);
	double b = cos(pi * 45 / 180);
	double c = tan(pi * 45 / 180);
	printf("%f,%f,%f\n", a, b, c);
	
	return 0; 
}
