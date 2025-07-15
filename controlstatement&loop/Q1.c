// 1.	If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made
//  profit or incurred loss. Also determine how much profit he made or loss he incurred. 


#include <stdio.h>

int main() {
    float costPrice, sellingPrice, amount;


    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    if(sellingPrice > costPrice) {
        amount = sellingPrice - costPrice;
        printf("Profit = %.2f\n", amount);
    }
    else if(costPrice > sellingPrice) {
        amount = costPrice - sellingPrice;
        printf("Loss = %.2f\n", amount);
    }
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
