#include <stdio.h>
#include <stdlib.h>

int main()
{
    float* p = (float*)calloc(10, sizeof(float));
    if (p == NULL)
    {
        /* code */
        exit(1);
    }

    printf("p = %p, p+1 = %p, p+3 = %p\n", p, p+1, p+3);
    for (unsigned int i = 0; i < 10; i++)
    {
        /* code */
        *(p++) = i;
    }

    p -= 10;
    printf("p[0] = %f, p[3] = %f, p[9] = %f\n", *p, *(p+3), *(p+9));
    free(p);
    
    return 0;
}