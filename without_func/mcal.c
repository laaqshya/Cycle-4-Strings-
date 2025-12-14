#include <stdio.h>

int main() {
    int choice, cont;
    float a, b, result;

    do {
        printf("\n----- SIMPLE CALCULATOR -----\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                result = a + b;
                printf("Result = %.2f\n", result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                result = a - b;
                printf("Result = %.2f\n", result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                result = a * b;
                printf("Result = %.2f\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                if (b == 0)
                    printf("Error! Division by zero.\n");
                else {
                    result = a / b;
                    printf("Result = %.2f\n", result);
                }
                break;

            case 5:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice! Please select 1-5.\n");
        }
        printf("\nDo you want to continue? Press 1 for Yes, 0 for No: ");
        scanf("%d", &cont);

    } while (cont == 1);

    printf("Program terminated.\n");
    return 0;
}
