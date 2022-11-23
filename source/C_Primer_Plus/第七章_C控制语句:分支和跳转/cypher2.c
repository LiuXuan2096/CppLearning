#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    while ((ch = getchar()) != '\n')
    {
        /* code */
        if (isalpha(ch))
        {
            /* code */
            putchar(ch + 1);
        }
        else
        {
            putchar(ch);
        }
        
    }
    putchar(ch);

    return 0;
    
}