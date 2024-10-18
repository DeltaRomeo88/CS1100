// // Include necessary header files
// #include <stdio.h>   // Provides input/output functions
// #include <string.h>  // Provides string manipulation functions

// // Define constants for clothing item prices using macros
// #define SHIRT_PRICE 19.99
// #define SHOE_PRICE 49.99
// #define PANTS_PRICE 29.99

// int main(void) {
//     // Declare variables
//     char userInput[20];  // Array to store user input for clothing type
//     int shirtQuantity = 0, shoeQuantity = 0, pantsQuantity = 0;  // Variables to store quantities of each clothing item
    
//     do {
//         // Display menu options to the user
//         printf("Enter the type of clothing needed (shirt, shoes, pants).\n");
//         printf("Type 'exit' to quit and calculate the total cost.\n");

//         // Read user input for clothing type
//         scanf("%s", userInput);

//         // Check user input and prompt for quantity based on clothing type
//         if (strcmp(userInput, "shirt") == 0) {
//             printf("Enter the quantity of shirts needed: ");
//             scanf("%d", &shirtQuantity);
//         } else if (strcmp(userInput, "shoes") == 0) {
//             printf("Enter the quantity of shoes needed: ");
//             scanf("%d", &shoeQuantity);
//         } else if (strcmp(userInput, "pants") == 0) {
//             printf("Enter the quantity of pants needed: ");
//             scanf("%d", &pantsQuantity);
//         } else if (strcmp(userInput, "exit") != 0) {
//             // If user input is not a valid clothing type or 'exit', display an error message and continue the loop
//             printf("Invalid clothing type. Please enter 'shirt', 'shoes', or 'pants'.\n");
//             continue;
//         }

//         // If user input is not 'exit', display a success message for adding the clothing item
//         if (strcmp(userInput, "exit") != 0) {
//             printf("Clothing item '%s' added successfully.\n", userInput);
//         }
//     } while (strcmp(userInput, "exit") != 0);  // Repeat the loop until user enters 'exit'

//     // Calculate the total cost based on quantities and prices of each clothing item
//     float totalCost = (shirtQuantity * SHIRT_PRICE) + (shoeQuantity * SHOE_PRICE) + (pantsQuantity * PANTS_PRICE);

//     // Display the formatted bill
//     printf("\nClothing Item\tQuantity\tPrice\t\tTotal\n");
//     printf("-------------------------------------------------------\n");
//     printf("Shirts\t\t%d\t\t$%.2f\t\t$%.2f\n", shirtQuantity, SHIRT_PRICE, shirtQuantity * SHIRT_PRICE);
//     printf("Shoes\t\t%d\t\t$%.2f\t\t$%.2f\n", shoeQuantity, SHOE_PRICE, shoeQuantity * SHOE_PRICE);
//     printf("Pants\t\t%d\t\t$%.2f\t\t$%.2f\n", pantsQuantity, PANTS_PRICE, pantsQuantity * PANTS_PRICE);
//     printf("-------------------------------------------------------\n");
//     printf("Total Cost:\t\t\t\t\t$%.2f\n", totalCost);

//     return 0;  // Indicate successful program execution
// }


// Include necessary header files
#include <stdio.h>   // Provides input/output functions
#include <string.h>  // Provides string manipulation functions
#include <stdlib.h>
// Define constants for clothing item prices using macros
#define SHIRT_PRICE 19.99
#define SHOE_PRICE 49.99
#define PANTS_PRICE 29.99
#define USA_STD 5.99
#define USA_EXP 9.99
#define MX_STD 7.99
#define MX_EXP 12.99
#define CD_STD 6.99
#define CD_EXP 11.99
#define USA_TAX .08
#define CD_TAX .12
#define MX_TAX .16
int main(void) {
    // Declare variables
    char userInput[20]; 
    char shippingInput[20];  // Array to store user input for clothing type
    int shirtQuantity = 0, shoeQuantity = 0, pantsQuantity = 0, qty = 0; // Variables to store quantities of each clothing item
    double shipping = 0;
    do {
        // Display menu options to the user
        printf("Enter the type of clothing needed (shirt, shoes, pants).\n");
        printf("Type 'exit' to quit and proceed to shipping details.\n");

        // Read user input for clothing type
        scanf("%s", userInput);



        // Check user input and prompt for quantity based on clothing type
        if (strcmp(userInput, "shirt") == 0) {
            qty = 1;

        }
        else if (strcmp(userInput, "shoes") == 0) {
            qty = 2;

        }
        else if (strcmp(userInput, "pants") == 0) {

            qty = 3;

        }
        else if (strcmp(userInput, "exit") == 0) {
            qty = 4;
            break;
        } else {
            qty = 5;
        }

        switch (qty)
        {
        case 1:
            printf("Enter the quantity of shirts needed: ");
            scanf("%d", &shirtQuantity);
            printf("Clothing item '%s' successfully added to your cart.\n", userInput);
            break;
        case 2:
            printf("Enter the quantity of shoes needed: ");
            scanf("%d", &shoeQuantity);
            printf("Clothing item '%s' successfully added to your cart.\n", userInput);
            break;

        case 3:
            printf("Enter the quantity of pants needed: ");
            scanf("%d", &pantsQuantity);
            printf("Clothing item '%s' successfully added to your cart.\n", userInput);
            break;
        case 4:
            break;
        default:
            //f user input is not a valid clothing type or 'exit', display an error message and continue the loop
            printf("Invalid clothing type. Please enter 'shirt', 'shoes', or 'pants'.\n");
        }
        // If user input is not 'exit', display a success message for adding the clothing item

    } while (strcmp(userInput, "exit") != 0);  // Repeat the loop until user enters 'exit'

    double taxperc = USA_TAX;
    char* userInput1 = "Standard";
    char* shpInput1 = "USA";
    do
    {
        // Display menu options to uaer fo ahipping
        printf("\nEnter the shipping destination (USA, Mexico, Canada): ");
        scanf("%s", shippingInput);
        printf("Enter the shipping method (standard, expedited): ");
        scanf("%s", userInput);
        // Check user input and prompt for quantity based on clothing type
        if (strcmp(shippingInput, "USA") == 0) {
            //printf("Enter the shipping method (standard, expedited): ");
            //scanf("%s", shpInput);

            if (strcmp(userInput, "standard") == 0)
            {
                shipping = USA_STD;
                userInput1 = "Standard";
            }
            else if (strcmp(userInput, "expedited") == 0)
            {
                shipping = USA_EXP;
                userInput1 = "Expedited";
            }
            shpInput1 = "USA";
            taxperc = USA_STD;
        }
        else if (strcmp(shippingInput, "Mexico") == 0) {
            //printf("Enter the shipping method (standard, expedited): ");
            //scanf("%s", shpInput);
            if (strcmp(userInput, "standard") == 0)
            {
                shipping = MX_STD;
                userInput1 = "Standard";

            }
            else if (strcmp(userInput, "expedited") == 0)
            {
                shipping = MX_EXP;
                userInput1 = "Expedited";
            }
            shpInput1 = "Mexico";
            taxperc = MX_TAX;
        }
        else if (strcmp(shippingInput, "Canada") == 0) {
            // printf("Enter the shipping method (standard, expedited): ");
             //scanf("%s", shpInput);
            if (strcmp(userInput, "standard") == 0)
            {
                shipping = CD_STD;
                userInput1 = "Standard";
            }
            else if (strcmp(userInput, "expedited") == 0)
            {
                shipping = CD_EXP;
                userInput1 = "Expedited";

            }
            shpInput1 = "Canada";
            taxperc = CD_TAX;
        }
        else {
            printf("Invalid shipping destination. Defaulting to USA standard shipping.\n");
            shipping = USA_STD;
            taxperc = USA_TAX;
            shpInput1 = "USA";
            userInput1 = "Standard";
        }

    } while (shippingInput[0] == 0);
    // Calculate the total cost based on quantities and prices of each clothing item
    float SubtotalCost = (shirtQuantity * SHIRT_PRICE) + (shoeQuantity * SHOE_PRICE) + (pantsQuantity * PANTS_PRICE);
    float tax = SubtotalCost * taxperc;
    float totalCost = SubtotalCost + tax + shipping;
    // Display the formatted bill
    printf("\nClothing Item\tQuantity\tPrice\t\tTotal\n");
    printf("-------------------------------------------------------\n");
    printf("Shirts\t\t%d\t\t$%.2f\t\t$%.2f\n", shirtQuantity, SHIRT_PRICE, shirtQuantity * SHIRT_PRICE);
    printf("Shoes\t\t%d\t\t$%.2f\t\t$%.2f\n", shoeQuantity, SHOE_PRICE, shoeQuantity * SHOE_PRICE);
    printf("Pants\t\t%d\t\t$%.2f\t\t$%.2f\n", pantsQuantity, PANTS_PRICE, pantsQuantity * PANTS_PRICE);
    printf("-------------------------------------------------------\n");
    printf("Subtotal:\t\t\t\t\t$%.2f\n", SubtotalCost);
    printf("Shipping Destination: %s\n", shpInput1);
    printf("Shipping Method: %s to %s\n", userInput1, shpInput1);
    printf("Shipping Cost:\t\t\t\t\t$%.2f\n", shipping);
    printf("Tax (%.2f%%):\t\t\t\t\t$%.2f\n", taxperc * 100, tax);
    printf("-------------------------------------------------------\n");
    printf("Total Cost (including tax and shipping):\t$%.2f\n", totalCost);
    free(userInput);
    free(shippingInput);
    return 0;  // Indicate successful program execution
}