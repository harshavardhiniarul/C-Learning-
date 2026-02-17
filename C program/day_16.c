#include <stdio.h>

int main()
{
    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);
    int result = (num1 + num2) * num3;

    printf("Result = %d\n", result);

    return 0;
}