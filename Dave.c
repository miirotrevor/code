#include <stdio.h>

int main() {
    int salary = 900000;
    int expense, totalExpenses = 0;

    printf("Enter your monthly expenses (enter -1 to stop):\n");

    while (1) {
        printf("Expense: ");
        scanf("%d", &expense);

        if (expense == -1) {
            break;
        }

        totalExpenses += expense;

        if (totalExpenses > salary) {
            printf("Your salary is not enough to cover your expenses.\n");
            return 0;
        }
    }

    printf("Your salary is enough to cover your expenses.\n");

    return 0;
}
