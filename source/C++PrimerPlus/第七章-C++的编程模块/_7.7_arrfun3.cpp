// page 218
#include <iostream>

using namespace std;

const int Max = 5;
int fill_array(double arr[], int limit);
void show_array(const double arr[], int n);
void revalue(double r, double arr[], int n);

int main()
{
    double properties[Max];

    int size = fill_array(properties, Max);
    show_array(properties, size);
    if (size > 0)
    {
        /* code */
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))
        {
            /* code */
            cin.clear();
            while (cin.get() != '\n')
            {
                /* code */
                continue;
            }
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}

int fill_array(double arr[], int limit)
{
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        /* code */
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)
        {
            /* code */
            cin.clear();
            while (cin.get() != '\n')
            {
                /* code */
                continue;
            }
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
        {
            /* code */
            break;
        }
        arr[i] = temp;
    }
    return i;
    
}

void show_array(const double arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << "Property #" << (i + 1) << ": $";
        cout << arr[i] << endl;
    }
}

void revalue(double r, double arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        arr[i] *= r;
    }   
}