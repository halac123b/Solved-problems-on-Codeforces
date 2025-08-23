#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int sum = 0;
    int percent;

    for (int i = 0; i < number; i++){
        cin >> percent;
        sum += percent;
    }
    
    cout << (float)sum / number;
    return 0;
}