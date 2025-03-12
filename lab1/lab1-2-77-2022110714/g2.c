#include<stdio.h>


long long fb(int n)
{
    if(n < 1)
    {
        printf("ERROR: n < 1\n");
        return 0;
    }
    else if(n == 1) return 1;
    else if(n == 2) return 2;
    else
    {
        long long result=0;
        long long fb1 = 1;
        long long fb2 = 2;
        for (int i = 3; i <= n; i++)
        {
            result = fb1 + fb2;
            fb1 = fb2;
            fb2 = result;
        }
        return result;
    }
}


#define f_type float

f_type calc_g(int n)
{
    return (f_type)fb(n-1) / (f_type)fb(n);
}

int main()
{
    // f_type g = 0;
    int n = 100;
    for(int i = 2; i <= n; i++)
    {
        f_type g = calc_g(i);
        printf("n = %d; g = %.8f   f(n) = %d\n", i, g, fb(i));
    }
    return 0;
}

