// page 174
// 在和书上的原程序结构一样的条件下，我把年龄改成了分数，因为我觉得原程序很拗口
#include <iostream>

using namespace std;

const char * qualify[4] = 
{
    "完美",
    "优秀",
    "不错",
    "不及格"
};

int main()
{
    int score;
    cout << "Enter your score: ";
    cin >> score;
    int index;

    if (score >= 0 && score < 60)
    {
        /* code */
        index = 3;
    }
    else if (score >= 60 && score <= 70)
    {
        /* code */
        index = 2;
    }
    else if (score > 70 && score <= 85)
    {
        /* code */
        index = 1;
    }
    else if (score > 85 && score <=100)
    {
        /* code */
        index = 0;
    }
    else
    {
        cout << "分数范围不正确，请输入正确的分数：";
    }
    cout << "You qualify for the " << qualify[index];
    return 0;
}