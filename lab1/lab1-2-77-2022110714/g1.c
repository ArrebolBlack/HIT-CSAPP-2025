#include<stdio.h>

int fb(int n)
{
	if (n < 1)
	{
		printf("ERROR: n < 1");
		return 0;
	}
	else if (n == 1) return 1;
	else if (n == 2) return 2;
	else return fb(n - 1) + fb(n - 2);
}

#define f_type float

f_type calc_g(int n)
{
	return (f_type)fb(n-1) / (f_type)fb(n);
}


int main()
{
	f_type g;
	for (int n = 2; n <= 100; n++)
	{
		g = calc_g(n);
		printf("n = %d; g = %.8f\n", n, g);
	}
	return 0;
}
