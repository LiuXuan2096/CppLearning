#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    printf("Give me a letter of the alphabet, and I will give ");
    printf("an animal name\nbeginning with that letter.\n");
    printf("Please type in a letter; type # to end my act.\n");
    while ((ch = getchar()) != '#')
    {
        /* code */
        if ('\n' == ch)
        {
            /* code */
            continue;
        }
        if (islower(ch))
        {
            /* code */
            switch (ch)
            {
            case /* constant-expression */'a':
                /* code */
                printf("argali, a wild sheep of Asia\n");
                break;
            case 'b':
                printf("babirusa, a wild pig of Malay\n");
                break;
            case 'c':
                printf("coati, racoonlike mamal\n");
                break;
            default:
                break;
            }
        }
        else
        {
            printf("I recongnize only lowercase letters.\n");
        }
        while (getchar() != '\n')
        {
            /* code */
            continue;
        }
        printf("Please type another letter or a #.\n");
        
    }
    printf("Bye!\n");

    return 0;
    
}