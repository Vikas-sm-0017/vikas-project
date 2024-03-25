#include <stdio.h>


int main()
{
    int choice;
    char continue_choice;
    float price;

    do
        {
        // Display menu
        printf("Beverages Vending Machine\n");
        printf("1. Coffee   - Rs 30\n");
        printf("2. Tea      - Rs 25\n");
        printf("3. Soda     - Rs 20\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // user choice
        switch(choice)
        {
            case 1:
                printf("You selected Coffee.\n");
                price =  30;
                break;
            case 2:
                printf("You selected Tea.\n");
                price =  25;
                break;
            case 3:
                printf("You selected Soda.\n");
                price =  20;
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
            printf("Price: Rs%f\n", price);
        }

        // Ask if user wants to continue
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &continue_choice);
    }
     while(continue_choice == 'y' || continue_choice == 'y');

    printf("Exiting the vending machine.\n");

    return 0;
}

