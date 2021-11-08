#include "ft.h"

int findFirstElement(double eps)
{
	double z;
	int i;
	
	i = 0;
	z = pow(-1, i) * (i + 1 / (pow(i, 3) + 1));
	while (fabs(z) > eps)
	{
		z = pow(-1, i) * (i + 1 / (pow(i, 3) + 1));
		if (fabs(z) < eps)
        {
            break;
        }
        i++;
	}
	return (i);
}