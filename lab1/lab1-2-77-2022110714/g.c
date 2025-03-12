#include<stdio.h>


unsigned long long fb(int n)
{
    if (n < 1)
    {
        printf("ERROR: n < 1\n");
        return 0;
    }
    else if (n == 1) return 1;
    else if (n == 2) return 2;
    else
    {
        unsigned long long result = 0;
        unsigned long long fb1 = 1;
        unsigned long long fb2 = 2;
        for (int i = 3; i <= n; i++)
        {
            result = fb1 + fb2;
            fb1 = fb2;
            fb2 = result;
        }
        return result;
    }
}

#define f_type long double

f_type calc_g(int n)
{
    return (f_type)fb(n - 1) / (f_type)fb(n);
}

int main()
{
    int n = 100;
    unsigned long long temp = 1;
    for (int i = 2; i <= n; i++)
    {
        if (fb(i) <= temp){
            printf("%d\n", sizeof(fb(i)));
            printf("fb(n) out of range\n");
            return 0;
        }
        temp = fb(i);
        f_type g = calc_g(i);
        printf("n = %d; g = %.30Lf   f(n) = %llu\n", i, g, fb(i));
    }
    return 0;
}

