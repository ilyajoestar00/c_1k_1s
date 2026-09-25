// c_1k_1s.cpp: определяет точку входа для приложения.
//

#include "app.h"
#include <math.h>
#define SQR(x) (x)*(x)


int main()
{
    double a, b, x ;

    printf("enter a, b, x:");

	int r = scanf("%lf %lf %lf", &a, &b, &x);

    if (r < 3) {
		printf("Error: Invalid input. Please enter three numbers.\n");
		return -1;
	}

    double t1 = log(fabs(x + sqrt(SQR(x) - SQR(a))));

    double t2 = b * (tan(x * 2));

    double result = t1 / t2;

    printf("Result: %.3f\n", result);

    return 0;
}
