#include <iostream>
using namespace std;

int main()
{
    int money;
    cin >> money;

    int step[5] = { 100, 20, 10, 5, 1};
    int count = 0;
    for (int i = 0; i < 5; i++){
        count += money / step[i];

        money -= step[i] * (money / step[i]);

        if (money <= 0){
            break;
        }
    }

    cout << count;

    return 0;
}