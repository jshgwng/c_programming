#include <stdio.h>

void main()
{
    int fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit to Celcius Conversion Table \n");
    while (fahr <= upper)
    {
        celcius = 5 * (fahr - 32) / 9;
        printf("%3d\t%6d\n", fahr, celcius);
        fahr = fahr + step;
    }
}