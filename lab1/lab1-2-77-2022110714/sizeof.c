#include <stdio.h>

int main() { 
    printf("%-20s %2zu\n", "char:", sizeof(char));
    printf("%-20s %2zu\n", "unsigned char:", sizeof(unsigned char));
    printf("%-20s %2zu\n", "signed char:", sizeof(signed char));
    printf("%-20s %2zu\n", "int:", sizeof(int));
    printf("%-20s %2zu\n", "unsigned int:", sizeof(unsigned int));
    printf("%-20s %2zu\n", "short:", sizeof(short));
    printf("%-20s %2zu\n", "unsigned short:", sizeof(unsigned short));
    printf("%-20s %2zu\n", "long:", sizeof(long));
    printf("%-20s %2zu\n", "unsigned long:", sizeof(unsigned long));
    printf("%-20s %2zu\n", "float:", sizeof(float));
    printf("%-20s %2zu\n", "double:", sizeof(double));
    printf("%-20s %2zu\n", "long int:", sizeof(long int));
    printf("%-20s %2zu\n", "long long:", sizeof(long long));
    printf("%-20s %2zu\n", "long double:", sizeof(long double));

    printf("%-20s %2zu\n", "char *:", sizeof(char *));
    printf("%-20s %2zu\n", "unsigned char *:", sizeof(unsigned char *));
    printf("%-20s %2zu\n", "signed char *:", sizeof(signed char *));
    printf("%-20s %2zu\n", "int *:", sizeof(int *));
    printf("%-20s %2zu\n", "unsigned int *:", sizeof(unsigned int *));
    printf("%-20s %2zu\n", "short *:", sizeof(short *));
    printf("%-20s %2zu\n", "unsigned short: *", sizeof(unsigned short *));
    printf("%-20s %2zu\n", "long: *", sizeof(long *));
    printf("%-20s %2zu\n", "unsigned long *:", sizeof(unsigned long *));
    printf("%-20s %2zu\n", "float *:", sizeof(float *));
    printf("%-20s %2zu\n", "double *:", sizeof(double *));
    printf("%-20s %2zu\n", "long int *:", sizeof(long int *));
    printf("%-20s %2zu\n", "long long *:", sizeof(long long *));
    printf("%-20s %2zu\n", "long double *:", sizeof(long double *));
    return 0;
}
