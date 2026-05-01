#include <stdio.h>
#include <math.h>


void show_menu() {
    printf("\n----- Calculator -----\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Square\n");
    printf("6. Square Root\n");
    printf("7. Log\n");
    printf("9. Exit\n");
}

int main() {
    int choice;
    double a, b;

    while (1) {
        show_menu();
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
            break;

        if (choice == 9) {
            printf("Exiting... Goodbye!\n");
            break;
        }

        switch (choice) {

        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            printf("Result: %.2f\n", a + b);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            printf("Result: %.2f\n", a - b);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            printf("Result: %.2f\n", a * b);
            break;

        case 4:
            printf("Enter numerator and denominator: ");
            scanf("%lf %lf", &a, &b);
            if (b != 0)
                printf("Result: %.2f\n", a / b);
            else
                printf("Error: Division by zero\n");
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%lf", &a);
            printf("Square: %.2f\n", a * a);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%lf", &a);
            if (a >= 0)
                printf("Square Root: %.2f\n", sqrt(a));
            else
                printf("Error: Negative number\n");
            break;

        case 7:
            printf("Enter a number: ");
            scanf("%lf", &a);
            if (a > 0)
                printf("Log: %.2f\n", log(a));
            else
                printf("Error: Log undefined\n");
            break;

        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}
