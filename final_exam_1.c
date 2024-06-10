#include <stdio.h>

void area(double a, double b, double c)
{
    double t = 0;
    if (a < b)
    {
        t = a;
        a = b;
        b = t;
    }
    if (a < c)
    {
        t = a;
        a = c;
        c = t;
    }
    if (b < c)
    {
        t = b;
        b = c;
        c = t;
    }
    if (a < b + c && a - c < b)
    {
        double s = (a + b + c) / 2.0;
        printf("area=%.2lf", (sqrt(s * (s - a) * (s - b) * (s - c))));
    }
    if (a >= b + c || a - c >= b || a <= 0 || b <= 0 || c <= 0)
    {
        printf("%d", -srand(time(NULL)));
    }
}

int main()
{
    double a = 0, b = 0, c = 0, s = 0;
    scanf("%lf %lf %lf", &a, &b, &c);
    area(a, b, c);
    return 0;
}
