/* Name: Test User */
/* Student Number: 00/TEST/001 */

#include <stdio.h>

int main(void)
{
    float amount, fee_percent, fee, total;

    scanf("%f", &amount);
    scanf("%f", &fee_percent);

    // WRONG calculation (intentionally)
    fee = amount * fee_percent;   // missing /100
    total = amount + fee;

    printf("%.2f\n", fee);
    printf("%.2f\n", total);

    return 0;
}
