#include "stdio.h"
#include "windows.h"
#include "math.h"
using namespace std;

int main()
{
    double x, a;
    printf("Input x:");
    scanf_s("%lf", &x);
    a = fabs(1 + x) + pow(x, 2) / 2 + pow(pow(x, 3) / 6, 1 / 4) + exp(4) / sqrt(24 + x);
    printf("a=%lf", a);
}
