#include <stdio.h>
#include <math.h>
int main()
{
	float x = 2.361, y = 1.149;
	float r = (13 * x * y + log10(x / y) - 17 * sin(pow(x, 2) - y));
	printf("%lf", r);
	return 0;
}