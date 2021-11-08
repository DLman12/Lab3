#include "ft.h"

void print(int n, int k)
{
	int i;
	double z;

	i = 0;
	z = 0;
	while(i <= n - 1)
	{
		z = pow(-1, i) * (i + 1 / (pow(i, 3) + 1));
		if (i % k == 0)
		{
			i++;
			continue;
		}
		printf("%.4lf ", z);
		i++;
	}
}