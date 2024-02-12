#include <stdio.h>
#include <windows.h>
#include<stdlib.h>

// File paths
const char* FILE_PATH = "items.txt";
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void editItem() {
    // Open the file for reading
    FILE* file = fopen(FILE_PATH, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    // Create a temporary file to store the edited data
    FILE* tempFile = fopen("temp_items.txt", "w");
    if (tempFile == NULL) {
        printf("Error creating temporary file.\n");
        fclose(file);
        return;
    }

    // Get item details to be edited from the user
    char itemName[100];
    printf("Enter the item name to be edited: ");
    scanf(" %[^\n]s", itemName);

    int newQuantity;
    float newPrice;

    // Get the new item details from the user
    printf("Enter new quantity: ");
    scanf("%d", &newQuantity);
    printf("Enter new price for 1 quantity: ");
    scanf("%f", &newPrice);

    // Read and update item details in the temporary file
    char currentName[100];
    int quantity;
    float price;

    while (fscanf(file, "%[^,],%d,%f\n", currentName, &quantity, &price) != EOF) {
        if (strcmp(itemName, currentName) == 0) {
            // Item found, update details
            float totalPrice = newPrice * newQuantity;
            fprintf(tempFile, "%s,%d,%.2f\n", itemName, newQuantity, totalPrice);
        } else {
            // Item not found, copy unchanged details
            fprintf(tempFile, "%s,%d,%.2f\n", currentName, quantity, price);
        }
    }

    // Close the files
    fclose(file);
    fclose(tempFile);

    // Remove the original file and rename the temporary file to the original file name
    remove(FILE_PATH);
    rename("temp_items.txt", FILE_PATH);

    printf("Item edited successfully.\n");
}



void includeTax() {
    // Open the file for reading
    FILE* file = fopen(FILE_PATH, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    // Get the tax percentage from the user
    float taxPercentage;
    printf("Enter tax percentage: ");
    scanf("%f", &taxPercentage);

    // Create a temporary file to store the updated data
    FILE* tempFile = fopen("temp_items.txt", "w");
    if (tempFile == NULL) {
        printf("Error creating temporary file.\n");
        fclose(file);
        return;
    }

    // Read and update item details with tax in the temporary file
    char itemName[100];
    int quantity;
    float price;

    while (fscanf(file, "%[^,],%d,%f\n", itemName, &quantity, &price) != EOF) {
        float totalPriceWithTax = price + (price * taxPercentage / 100.0);
        fprintf(tempFile, "%s,%d,%.2f\n", itemName, quantity, totalPriceWithTax);
    }

    // Close the files
    fclose(file);
    fclose(tempFile);

    // Remove the original file and rename the temporary file to the original file name
    remove(FILE_PATH);
    rename("temp_items.txt", FILE_PATH);

    printf("Tax included successfully.\n");
}



void showBill() {
    // Open the file for reading
    FILE* file = fopen(FILE_PATH, "r");
    if (file == NULL) {
        printf("File not found. Please add items first.\n");
        return;
    }

    // Display the bill header
    printf("--------------------------------------------------------\n");
    printf("| %-20s | %-8s | %-15s |\n", "Item Name", "Quantity", "Calculated Price");
    printf("--------------------------------------------------------\n");

    float totalCost = 0.0;

    char itemName[100];
    int quantity;
    float price;

    while (fscanf(file, "%99[^,],%d,%f\n", itemName, &quantity, &price) != EOF) {
        float calculatedPrice = quantity * price;
        totalCost += calculatedPrice;

        // Display item details
        printf("| %-20s | %-8d | $%-14.2f |\n", itemName, quantity, calculatedPrice);
    }

    // Display the bill footer
    printf("--------------------------------------------------------\n");
    printf("Total Cost: $%.2f\n", totalCost);

    // Close the file
    fclose(file);
}

void addItem() {
    // Open the file in append mode
    FILE* file = fopen(FILE_PATH, "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    // Get item details from the user
    char itemName[100];
    int quantity;
    float price;

    printf("Enter item name: ");
    scanf(" %[^\n]s", itemName);
    printf("Enter quantity: ");
    scanf("%d", &quantity);
    printf("Enter price: ");
    scanf("%f", &price);

    // Write item details to the file
    fprintf(file, "%s,%d,%.2f\n", itemName, quantity, price);
    fclose(file);

    printf("Item added successfully.\n");
}

int main()
{
    int choice;

    do
    {
        system("cls"); // Clear the console screen
        gotoxy(20,2); // Move cursor to (0, 0)
        for(int i=0 ; i<35 ; i++)
            printf("_");
        gotoxy(24,3);
        printf("Supermarket Billing System\n");
        gotoxy(20,4);
        for(int i=0 ; i<35 ; i++)
            printf("_");
        for(int i=3 ; i<18 ; i++)
        {
            gotoxy(19,i);
            printf("|");
        }
        gotoxy(20,17);
        for(int i=0 ; i<35 ; i++)
            printf("_");
        for(int i=3 ; i<18 ; i++)
        {
            gotoxy(55,i);
            printf("|");
        }
        gotoxy(24,5);
        printf("1. Add Item\n");
        gotoxy(24,6);
        printf("2. Include Tax\n");
        gotoxy(24,7);
        printf("3. Include Discount\n");
        gotoxy(24,8);
        printf("4. Edit Item\n");
        gotoxy(24,9);
        printf("5. Delete Item\n");
        gotoxy(24,10);
        printf("6. Apply Loyalty Reward\n");
        gotoxy(24,11);
        printf("7. Show Bill\n");
        gotoxy(24,12);
        printf("8. Exit\n");
        gotoxy(24,15);
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addItem();
            break;
        case 2:
            includeTax();
            break;
        case 3:
            includeDiscount();
            break;
        case 4:
            editItem();
            break;
       // case 5:
           // deleteItem();
          //  break;

        case 6:
            showBill();
            break;
        case 7:
            printf("Exiting the program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }

        printf("\n");
        system("pause"); // Pause the program until the user presses a key
    }
    while (choice != 8);

    return 0;
}

