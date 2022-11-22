/*
使用while循环对1...100求和
*/
#include <stdio.h>

int main(void)
{
    int sum = 0;
    int n = 1;
    while (n <= 100)
    {
        /* code */
        sum += n;
        n++;
    }
    printf("1...100的和是: %d\n", sum);

    return 0;
}