#include <stdio.h>

int main() {
    float units, bill;

    printf("Enter the number of units consumed: ");
    scanf("%f", &units);

    if (units <= 100) {
        bill = units * 1.5;
    }
    else if (units <= 200) {
        bill = (100 * 1.5) + (units - 100) * 2.5;
    }
    else {
        bill = (100 * 1.5) + (100 * 2.5) + (units - 200) * 4;
    }

    printf("Total Electricity Bill = ₹%.2f", bill);

    return 0;
}