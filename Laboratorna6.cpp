#include "stdio.h"
#include "windows.h"
#include "math.h"
using namespace std;

int main()
{
    double x, b;
    printf("Input x:");
    scanf_s("%lf", &x);
    b = fabs(1 + x) + pow(x, 3) / 2 + pow(pow(x, 3) / 6, 1 / 4) + exp(4) / sqrt(24 + x);
    printf("b=%lf", b);
}
