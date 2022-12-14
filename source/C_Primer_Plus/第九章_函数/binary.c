#include <stdio.h>

void to_binary(unsigned long n);

int main(void)
{
    unsigned long number;
    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu", &number) == 1)
    {
        /* code */
        printf("Binary equivalent: ");
        to_binary(number);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done.\n");

    return 0;
    
}

void to_binary(unsigned long n)
{
    int r;
    r = n % 2;
    if (n >= 2)
    {
        /* code */
        to_binary(n >> 1);
    }
    putchar((r == 1) ? '1' : '0');
    return;
}