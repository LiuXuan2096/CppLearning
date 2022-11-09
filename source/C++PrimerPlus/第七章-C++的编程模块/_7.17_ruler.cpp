#include <iostream>

using namespace std;

const int Len = 66;
const int Divs = 6;
void subdivide(char ar[], int low, int high, int level);

int main()
{
    char ruler[Len];
    int i;
    for (int i = 1; i < Len - 2; i++)
    {
        /* code */
        ruler[i] = ' ';
    }
    ruler[Len - 1] = '\0';
    int max = Len - 2;
    int min = 0;

}