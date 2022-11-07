#include <stdio.h>

int main()
{
    int a = 100;
    int *p = &a;
    int **pp = &p;

    printf("&a = %p, p = %p\n", &a, p);
    printf("&p = %p, pp = %p\n", &p, pp);
    printf("&pp = %p\n", &pp);

    printf("before: a = %d, *p = %d, **pp = %d\n", a, *p, **pp);
    a++;
    (*p)++;
    (**pp)++;
    printf("after: a = %d, *p = %d, **pp = %d\n", a, *p, **pp);

    return 0;
}