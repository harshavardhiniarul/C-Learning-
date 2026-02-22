#include <stdio.h>

int main() {
    float balance = 10000, withdraw;

    printf("Enter amount to withdraw: ");
    scanf("%f", &withdraw);

    if (withdraw <= balance) {
        balance = balance - withdraw;
        printf("Transaction Successful!\n");
        printf("Remaining Balance: ₹%.2f", balance);
    } else {
        printf("Insufficient Balance!");
    }

    return 0;
}