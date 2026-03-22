/* Name: Test User */
/* Student Number: 00/TEST/001 */

#include <stdio.h>

int main(void)
{
    float distance, fuel_used, efficiency;

    printf("Enter distance travelled (km): ");
    scanf("%f", &distance);

    printf("Enter fuel used (litres): ");
    scanf("%f", &fuel_used);

    efficiency = distance / fuel_used;

    printf("Fuel efficiency: %.2f km/l\n", efficiency);

    return 0;
}
