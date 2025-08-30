#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myVector;

    int color;
    int buyNumber = 0;
    for (int i = 0; i < 4; i++){
        cin >> color;

        for (int j = 0; j < myVector.size(); j++){
            if (color == myVector[j]){
                buyNumber++;
                break;
            }
        }
        myVector.push_back(color);
    }

    cout << buyNumber;
    return 0;
}