#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int number;
    cin >> number;
    
    int coin;
    int sum = 0;
    vector<int> myVector;
    for (int i = 0; i < number; i++){
        cin >> coin;
        myVector.push_back(coin);
        sum += coin;
    }

    sort(myVector.begin(), myVector.end());

    int mySum = 0;
    for (int i = number - 1; i >= 0; i--){
        mySum += myVector.at(i);
        if (mySum > (float)sum / 2){
            cout << number - i;
            break;
        }
    }
    return 0;
}