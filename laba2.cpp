#include <stdio.h>
#include <math.h>


	
	int part1() {
		printf_s("%s", "x ->"); double x; scanf_s("%lf", &x);
		printf_s("%s", "a ->"); double a; scanf_s("%lf", &a);
		printf_s("%s", "step ->"); double step; scanf_s("%lf", &step);
	do
	{
		if (x < 0.2 && x>=0.1)
		{
			printf_s("y=l%f", log10(3 * x + 1) / log10(5));
			printf_s("%s", "\n");
		}
		else if (x >= 0.2 && x <= 0.4)
		{
			printf_s("y=%lf", pow(x, cos(x)));
			printf_s("%s", "\n");
		}
		else if (x >= 0.4)
		{
			printf_s("y=%lf", 1 / sin(log(x)));
			printf_s("%s", "\n");
		}
		x += step;

	}
	while (x <= a);
}
