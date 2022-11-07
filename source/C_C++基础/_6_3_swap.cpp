// 使用指针交换两个变量的值

#include <stdio.h>

void swap1(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}

void swap2(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int m = 2, n = 7;
    swap1(m, n);
    printf("after swap1: m = %d, n = %d\n", m, n);

    swap2(&m, &n);
    printf("after swap2: m = %d, n = %d\n", m, n);
    
    return 0;
}