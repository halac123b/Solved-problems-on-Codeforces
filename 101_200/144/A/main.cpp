#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int line[number];
    int min = INT_MAX, max = INT_MIN;
    int minIdx, maxIdx;
    for (int i = 0; i < number; i++){
        cin >> line[i];

        if (line[i] <= min){
            min = line[i];
            minIdx = i;
        }
        if (line[i] > max){
            max = line[i];
            maxIdx = i;
        }
    }

    int steps = maxIdx + (number - minIdx - 1);
    if (maxIdx > minIdx){
        steps--;
    }

    cout << steps;
    return 0;
}