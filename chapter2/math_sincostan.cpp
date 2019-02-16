#include<stdio.h>
#include<math.h>

const double pi = acos(-1);//因为cos(π)=-1，所以 π= 反余弦acos(-1)；如此定义π是精确值

int main()
{
	double a = sin(pi * 45 / 180);
	double b = cos(pi * 45 / 180);
	double c = tan(pi * 45 / 180);
	printf("%f,%f,%f\n", a, b, c);
	
	return 0; 
}
