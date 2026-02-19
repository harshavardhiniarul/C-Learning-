#include <stdio.h>
int main()
{
    int num1, num2, choice;
    int result;

    scanf("%d %d", &num1, &num2);
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        result = num1 + num2;
        printf("Result = %d", result);
        break;

    case 2:
        result = num1 - num2;
        printf("Result = %d", result);
        break;

    case 3:
        result = num1 * num2;
        printf("Result = %d", result);
        break;

    case 4:
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Result = %d", result);
        }
        else
        {
            printf("Division by zero is not allowed");
        }
        break;
    default:
        printf("Invalid choice");

        return 0;
    }
}