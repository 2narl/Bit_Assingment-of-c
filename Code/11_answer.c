/*11.	Let's consider the supermarket discount policy: the policy offers a 5% discount on the total bill to all customers, irrespective of their purchase amount. Additionally, female customers receive 10% discount if their total bill exceeds Rs. 5000. Write a C program to implement this discount policy and calculate the final bill after applying these discounts.*/
#include <stdio.h>

int main() {
    float billAmount, finalBill, discount = 0.05;
    char gender;

    // Input total bill amount
    printf("Enter the total bill amount (Rs.): ");
    scanf("%f", &billAmount);

    // Input gender
    printf("Enter gender (M for Male, F for Female): ");
    scanf(" %c", &gender);

    //Apply the universal 5% discount
    finalBill = billAmount - (billAmount * discount);

    //Check for additional female discount (if bill > 5000)
    if ((gender == 'F' || gender == 'f') && billAmount > 5000) {
        finalBill = finalBill - (finalBill * 0.10);
        printf("Additional 10%% female discount applied.\n");
    }

    // Output final bill
    printf("5%% discount applied to all.\n");
    printf("Total bill after discounts: Rs. %.2f\n", finalBill);

    return 0;
}
