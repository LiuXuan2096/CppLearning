#include <stdio.h>
#include <stdlib.h>

int main()
{
    float scores[5] = {55, 66, 77, 88, 99};
    float* p1 = scores;

    printf("sizeof(scores) = %lld, sizeof(p1) = %lld\n", sizeof(scores), sizeof(p1));

    float* p2 = (float*)malloc(sizeof(float) * 5);

    if (p2 == NULL)
    {
        /* code */
        exit(EXIT_FAILURE);
    }

    float fSum = 0;
    for (unsigned int i = 0; i < 5; i++)
    {
        /* code */
        p2[i] = p1[i];
        fSum += p2[i];
    }

    printf("Average = %f", fSum / 5);

    free(p2);
    return 0;
}