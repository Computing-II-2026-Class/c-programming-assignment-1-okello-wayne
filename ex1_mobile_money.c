/* Name: John Doe */
/* Student Number: 22/U/01 */

#include <stdio.h>

int main() {
    float amount, fee_percent;
    scanf("%f", &amount);
    scanf("%f", &fee_percent);

    float fee = amount * fee_percent / 100;
    float total = amount + fee;

    printf("%.2f\n", fee);
    printf("%.2f\n", total);

    return 0;
}
