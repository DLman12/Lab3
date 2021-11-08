#include "ft.h"

int findFirstNegativeElement(double eps)
{
    int i;
    double z;
	
	i = 0;
    z =  pow(-1, i) * (i + 1 / (pow(i, 3) + 1));
    for (i = 0; ; i++)
	{
		z =  pow(-1, i) * (i + 1 / (pow(i, 3) + 1));
		if (fabs(z) > eps && z < 0)
        {
            return (i);
        }
	}
}