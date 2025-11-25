#include <stdio.h>

struct Item {
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item items[50];
    int n, i;
    float total = 0;

    printf("------ ONLINE BILLING SYSTEM ------\n");
    printf("Enter number of items: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for item %d\n", i + 1);

        printf("Item Name: ");
        scanf("%s", items[i].name);

        printf("Quantity: ");
        scanf("%d", &items[i].quantity);

        printf("Price per item: ");
        scanf("%f", &items[i].price);

        total += items[i].quantity * items[i].price;
    }

    printf("\n------------- BILL ----------------\n");
    printf("%-20s %-10s %-10s %-10s\n", "Item", "Qty", "Price", "Amount");

    for (i = 0; i < n; i++) {
        float amount = items[i].quantity * items[i].price;
        printf("%-20s %-10d %-10.2f %-10.2f\n",
               items[i].name, items[i].quantity, items[i].price, amount);
    }

    printf("-----------------------------------\n");
    printf("Total Amount: %.2f\n", total);
    printf("-----------------------------------\n");
    printf("Thank you for shopping!\n");

    return 0;
}
