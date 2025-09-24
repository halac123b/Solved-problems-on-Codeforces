#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int sumTaskList[number];
    for (int i = 0; i < number; i++)
    {
        sumTaskList[i] = 0;
    }
    int count = 0;

    int aTask, bTask;
    cin >> aTask;

    int aTaskList[aTask];
    for (int i = 0; i < aTask; i++)
    {
        cin >> aTaskList[i];

        if (sumTaskList[aTaskList[i] - 1] == 0)
        {
            count++;
            sumTaskList[aTaskList[i] - 1] = 1;
        }
    }

    cin >> bTask;
    int bTaskList[bTask];
    for (int i = 0; i < bTask; i++)
    {
        cin >> bTaskList[i];

        if (sumTaskList[bTaskList[i] - 1] == 0)
        {
            count++;
            sumTaskList[bTaskList[i] - 1] = 1;
        }
    }

    if (count >= number){
        cout << "I become the guy.";
    }
    else {
        cout << "Oh, my keyboard!";
    }

    return 0;
}