#include <iostream>
using namespace std;

int main()
{
    int length;
    cin >> length;

    string input;
    cin >> input;

    int arr[26] = {0};
    int count = 0;

    if (length < 26){
        cout << "NO";
    }
    else {
        for (int i = 0; i < length; i++){
            if (input[i] < 'a'){
                input[i] += 32;
            }
            
            int index = input[i] - 'a';
            if (arr[index] == 0){
                arr[index] = 1;
                count++;
            }
        }

        if (count == 26){
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }

    return 0;
}