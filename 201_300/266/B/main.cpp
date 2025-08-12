#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    int time;
    cin >> time;

    string inputLine;
    cin >> inputLine;

    for (int j = 0; j < time; j++){
        bool check = false;
        for (int i = 0; i < (int)inputLine.length() - 1; i++){
            if (inputLine[i] == 'B' && inputLine[i + 1] == 'G'){
                inputLine[i] = 'G';
                inputLine[i + 1] = 'B';
                i++;
                check = true;
            }
        }

        if (!check){
            break;
        }
    }

    cout << inputLine;
    return 0;
}