#include <stdio.h>

int main(void)
{
    unsigned width, precison;
    int number = 256;
    double weight = 242.5;

    printf("Enter a field width:\n");
    scanf("%d", &width);
    printf("The number is: %*d:\n", width, number);
    printf("Now enter a width and a precision:\n");
    scanf("%d %d", &width, &precison);
    printf("Weight = %*.*f\n", width, precison, weight);
    printf("Done!\n");

    return 0;
}