#include"beverage.h"
#include <stdio.h>
#include"display menu.c"
#include"display size.c"

int main()
{
    int choice;
    char continue_choice;
    float price;

    do
{
        displayMenu();
        scanf("%d", &choice);
        processChoice(choice, &price);

        // Display price if valid
        if (price > 0.0)
{
            printf("Price: Rs%.2f\n", price);
}

        // Ask if user wants to continue
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &continue_choice);
}
    while (continue_choice == 'y' || continue_choice == 'Y');

    printf("Exiting the vending machine.\n");

    return 0;
    
}
