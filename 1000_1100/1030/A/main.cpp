#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    int answers[number];
    
    bool isHard = false;
    for (int i = 0; i < number; i++){
        cin >> answers[i];
        if (answers[i] == 1){
            isHard = true;
            break;
        }
    }

    if (isHard){
        cout << "HARD";
    }
    else {
        cout << "EASY";
    }
}