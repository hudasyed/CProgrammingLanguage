#include <stdio.h>

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    
    printf("celsius farenheit\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%7.1f %9.0f\n", celsius, fahr);
        fahr = fahr + step;
    }
}