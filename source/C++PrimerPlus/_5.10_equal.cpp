// page 141
#include <iostream>

using namespace std;

int main()
{
    int quizscores[10] = {20, 20, 20, 20, 20, 19, 20, 18, 20, 20};
    cout << "Doing it right:\n";
    int i;
    for (i = 0; quizscores[i] == 20; i++)
    {
        /* code */
        cout << "quiz " << i << " is a 20\n";
    }
    cout << "Doing it dangerously wrong:\n";
    for (i = 0; quizscores[i] = 20; i++)
    {
        /* code */
        cout << "quiz " << i << " is a 20\n";
    }
    return 0;
}