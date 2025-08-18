#include <iostream>
using namespace std;

int main()
{
    int luckyNumber[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    int input;
    cin >> input;

    bool check = false;
    for (int i = 0; i < 14; i++){
        if (input >= luckyNumber[i]){
            if (input % luckyNumber[i] == 0){
                check = true;
                break;
            }
        }
        else {
            break;
        }
    }

    if (check){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}