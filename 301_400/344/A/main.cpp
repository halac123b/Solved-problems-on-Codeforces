#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    string magnet;
    int count = 0;
    string currentStreak = "";
    for (int i = 0; i < number; i++){
        cin >> magnet;
        if (magnet != currentStreak){
            count++;
            currentStreak = magnet;
        }
    }

    cout << count;
    return 0;
}