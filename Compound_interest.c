#include <stdio.h>

double custom_pow(double base, double exponent) {
    double result = 1.0;
    while (exponent > 0) {
        result *= base;
        exponent--;
    }
    return result;
}

int main()
{
    double p, r, t, c, ci;
    scanf("%lf%lf%lf", &p, &r, &t);
    c = custom_pow((1 + (r / 100)), t);
    ci = p * c;
    printf("%.2lf", ci);
    
    return 0;
}
