#include <stdio.h>
#define SPACE ' '

int main(void)
{
    char ch;

    ch = getchar();
    while (ch != '\n')
    {
        /* code */
        if (ch == SPACE)
        {
            /* code */
            putchar(ch);
        }
        else
        {
            /* code */
            putchar(ch + 1);
        }
        ch = getchar();
    }
    putchar(ch);

    return 0;
    
}