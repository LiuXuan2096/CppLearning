#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    // float* p = (float*)calloc(10, sizeof(float));
    // if (p == NULL)
    // {
    //     /* code */
    //     exit(1);
    // }

    // printf("p = %p, p+1 = %p, p+3 = %p\n", p, p+1, p+3);
    // for (unsigned int i = 0; i < 10; i++)
    // {
    //     /* code */
    //     *(p++) = i;
    // }

    // p -= 10;
    // printf("p[0] = %f, p[3] = %f, p[9] = %f\n", *p, *(p+3), *(p+9));
    // free(p);

    char s[] = "Mary has 3 lambs.";
    char* p = s;

    while (*p != 0)
    {
        /* code */
        if (islower(*p))
        {
            /* code */
            *p = *p + ('A' - 'a');
        }
        p++;
    }
    
    printf("s = %s", s);
    return 0;
}