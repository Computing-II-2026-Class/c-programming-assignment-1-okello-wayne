/* Name: Test User */
/* Student Number: 00/TEST/001 */

#include <stdio.h>

int main(void)
{
    float amount, fee_percent, fee, total_deducted;

    printf("Enter amount to send: ");
    scanf("%f", &amount);

    printf("Enter transaction fee (%%): ");
    scanf("%f", &fee_percent);

    fee = amount * fee_percent / 100;
    total_deducted = amount + fee;

    printf("Transaction fee: %.2f UGX\n", fee);
    printf("Total deducted: %.2f UGX\n", total_deducted);

    return 0;
}
