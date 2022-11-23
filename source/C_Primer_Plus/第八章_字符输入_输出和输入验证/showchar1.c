#include <stdio.h>

void display(char cr, int lines, int width);

int main(void)
{
    int ch;
    int rows, cols;
    printf("Enter a character and two integers:\n");
    while ((ch = getchar()) != '\n')
    {
        /* code */
        scanf("%d %d", &rows, &cols);
        display(ch, rows, cols);
        printf("Enter another character and two integers;\n");
        printf("Enter a newline to quit.\n");
    }
    printf("Bye.\n");

    return 0;
}

void display(char cr, int lines, int width)
{
    int row, col;

    for (row = 1; row <= lines; row++)
    {
        /* code */
        for (col = 1; col <= width; col++)
        {
            /* code */
            putchar(cr);
        }
        putchar('\n');
    }
    
}