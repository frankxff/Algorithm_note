#include<stdio.h>
#include<math.h>

int main()
{
	double a = -5.2, b = 5.2;
	printf("%4.0f %.0f\n", floor(a), ceil(a));
	printf("%4.0f %.0f", floor(b), ceil(b));
	
	return 0;
}
