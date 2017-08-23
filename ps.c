#include <stdio.h>
int main()
{
    int sub, exponent;

    long long result = 1;

    printf("Enter a sub number: ");
    scanf("%d", &sub);

    printf("Enter an exponent: ");
    scanf("%d", &exponent);

    while (exponent != 0)
    {
        result *= sub;
        --exponent;
    }

    printf("Answer = %lld", result);

    return 0;
}
