/* Name: Test User */
/* Student Number: 00/TEST/001 */

#include <stdio.h>

int main(void)
{
    float units, cost_per_unit, total_bill;

    printf("Enter units consumed: ");
    scanf("%f", &units);

    printf("Enter cost per unit: ");
    scanf("%f", &cost_per_unit);

    total_bill = units * cost_per_unit;

    printf("Total bill: %.2f UGX\n", total_bill);

    return 0;
}
