#include<stdio.h>
#include<stdlib.h>

int main()
{
    #define days 31
    float coeff[days];

    #define coeff_lo 10.0f
    #define coeff_hi 50.0f

    float cmin = coeff_hi;
    float cmax = coeff_lo;

    for (int i = 0; i < days; i++)
    coeff[i] = coeff_lo + (coeff_hi-coeff_lo) * rand()/ RAND_MAX;

    for (int i = 0; i < days; i++)
    {
        printf("% 6.2f", coeff[i]);
        if(i % 7 == 6) printf("\n");

        if(coeff[i] < cmin) cmin = coeff[i];
        if(coeff[i] > cmax) cmax = coeff[i];
    }
    if (days != 28) printf("\n");

   


    printf("Минимальное значение долара = "); "\033[0;34m"printf("%.2f\n", cmin);
    printf("Максимальное значение долара: %.2f\n",cmax);
    return 0;
}