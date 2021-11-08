#include "ft.h"

double summ2(double eps)
{
	double sum;
	int i;
	double a;
	
	i = 0;
	a = pow(-1, i) * (i + 1 / (pow(i, 3) + 1));
	sum = 0;
	while (fabs(a) > eps)
	{
		sum += a;
		a = pow(-1, i) * (i + 1 / (pow(i, 3) + 1));
		i++;
	}
	return (sum);
}