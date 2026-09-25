// c_1k_1s.cpp: определяет точку входа для приложения.
//

#include "app.h"
#include <math.h>
#define SQR(x) (x)*(x)


int main()
{
    double a = 5.21, b = 13.04, x = -8.07;


    double t1 = log(fabs(x + sqrt(SQR(x) - SQR(a))));
    
    double t2 = b * (tan(x * 2));

    double result = t1 / t2;

    printf("Result: %.3f\n", result);
    
    return 0;
}
