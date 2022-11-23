#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'

int main(void)
{
    char c;
    char prev;
    long n_chars = 0L;
    int n_lines = 0;
    int n_words = 0;
    int p_lines = 0;
    bool inword = false;

    printf("Enter text to be analyzed (| to terminate): \n");
    prev = "\n";
    while ((c = getchar()) != STOP)
    {
        /* code */
        n_chars++;
        if (c == '\n')
        {
            /* code */
            n_lines++;
        }
        if (!isspace(c) && !inword)
        {
            /* code */
            inword = true;
            n_words++;
        }
        if (isspace(c) && inword)
        {
            /* code */
            inword = false;
        }
        prev = c;   
    }
    if (prev != '\n')
    {
        /* code */
        p_lines = 1;
    }
    printf("characters = %ld, words = %d, lines = %d, ", n_chars, n_words, n_lines);
    printf("partial lines = %d\n", p_lines);

    return 0;
}