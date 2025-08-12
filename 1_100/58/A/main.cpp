#include <iostream>

using namespace std;

int main()
{
    string input;
    cin >> input;

    string hello = "hello";
    int count = 0;
    bool check = false;

    for (int i = 0; i < (int)input.length(); i++){
        if (input[i] == hello[count]){
            count++;

            if (count == 5){
                check = true;
                break;
            }
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