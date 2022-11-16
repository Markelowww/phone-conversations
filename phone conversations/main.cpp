#include <stdio.h> 
#include <inttypes.h>
#include "main.h"

int main()
{
    int64_t s64, dt64, t64, d64;
    double sum, ds;
    printf("Enter the start time of the call from 0 to 23 hours \n");
    scanf("%" SCNd64, &t64);
    printf("Enter the duration of the conversation in minutes \n");
    scanf("%" SCNd64, &dt64);
    printf("Enter the cost of a minute of conversation \n");
    scanf("%" SCNd64, &s64);
    printf("Enter the day of the week from 1 to 7 \n");
    scanf("%" SCNd64, &d64);
    sum = 0;
    CalculationSum(dt64, ds, d64, t64, s64, sum);
    
    printf("The cost of the conversation: %lf \n", sum);
    return 0;
}
