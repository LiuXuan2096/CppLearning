// page 161 二维数组
#include <iostream>

using namespace std;

const int Cities = 5;
const int Years = 4;

int main()
{
    const char * cities[Cities] = 
    {
        "BeiJing",
        "ShangHai",
        "GuangZhou",
        "ShenZhen",
        "HanZhou"
    };

    int maxtemps[Years][Cities] = 
    {
        {96, 100, 87, 101, 105},
        {96, 98, 91, 107, 104},
        {97, 101, 93, 108, 107},
        {98, 103, 95, 109, 108}
    };

    cout << "Maxium temperature for 2008-2011\n\n";
    for (int city = 0; city < Cities; city++)
    {
        /* code */
        cout << cities[city] << ":\t";
        for (int year = 0; year < Years; year++)
        {
            /* code */
            cout << maxtemps[year][city] << "\t";
        }
        cout << endl;
        
    }
    return 0;
    
}