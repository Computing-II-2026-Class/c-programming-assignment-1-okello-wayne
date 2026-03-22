#include <stdio.h>

int main(void)
{
    float distance, fuel;

    scanf("%f", &distance);
    scanf("%f", &fuel);

    float efficiency = distance / fuel;

    printf("%.2f\n", efficiency);

    return 0;
}
