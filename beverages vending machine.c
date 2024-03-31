/*
    Program: Beverages Vending Machine
    Description:
        This program simulates a simple beverages vending machine.
        It allows users to select beverages, choose their sizes, and provides the respective prices.
        Users can choose to continue vending or exit the program.
*/

#include <stdio.h>

int main()
{
    int choice;
    char size_choice;
    char continue_choice;
    float price;

    do
{
        // Display menu
        printf("\nBeverages Vending Machine\n");
        printf("1. Coffee\n");
        printf("2. Tea\n");
        printf("3. Soda\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

    // Process user choice
    switch(choice)
{
    case 1:
        printf("\nCoffee Sizes:\n");
        printf("a. Small   - Rs 30\n");
        printf("b. Medium  - Rs 40\n");
        printf("c. Large   - Rs 50\n");
        printf("Enter size choice (a/b/c): ");
        scanf(" %c", &size_choice);
    switch(size_choice)
{
    case 'a':
        printf("You selected Small Coffee.\n");
        price = 30;
    break;
    case 'b':
        printf("You selected Medium Coffee.\n");
        price = 40;
    break;
    case 'c':
        printf("You selected Large Coffee.\n");
        price = 50;
    break;
    default:
        printf("Invalid size choice. Please enter 'a', 'b', or 'c'.\n");
        price = 0.0;
}
    break;
    case 2:
        printf("\nTea Sizes:\n");
        printf("a. Small   - Rs 25\n");
        printf("b. Medium  - Rs 35\n");
        printf("c. Large   - Rs 45\n");
        printf("Enter size choice (a/b/c): ");
        scanf(" %c", &size_choice);
    switch(size_choice)
{
    case 'a':
        printf("You selected Small Tea.\n");
        price = 25;
    break;
    case 'b':
        printf("You selected Medium Tea.\n");
        price = 35;
    break;
    case 'c':
        printf("You selected Large Tea.\n");
        price = 45;
    break;
    default:
        printf("Invalid size choice. Please enter 'a', 'b', or 'c'.\n");
        price = 0.0;
}
    break;
    case 3:
        printf("\nSoda Sizes:\n");
        printf("a. Small   - Rs 20\n");
        printf("b. Medium  - Rs 30\n");
        printf("c. Large   - Rs 40\n");
        printf("Enter size choice (a/b/c): ");
        scanf(" %c", &size_choice);
    switch(size_choice)
{
    case 'a':
        printf("You selected Small Soda.\n");
        price = 20;
    break;
    case 'b':
        printf("You selected Medium Soda.\n");
        price = 30;
    break;
    case 'c':
        printf("You selected Large Soda.\n");
        price = 40;
    break;
    default:
        printf("Invalid size choice. Please enter 'a', 'b', or 'c'.\n");
        price = 0.0;
}
    break;
    case 4:
        printf("Exiting the vending machine.\n");
    return 0;
    default:
        printf("Invalid choice. Please enter a number between 1 and 4.\n");
        price = 0.0;
}

    // Display price
    if (price > 0.0)
{
        printf("Price: Rs%.2f\n", price);
}

    // Ask if user wants to continue
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &continue_choice);
}
    while(continue_choice == 'y' || continue_choice == 'Y');

        printf("Exiting the vending machine.\n");

    return 0;
}


