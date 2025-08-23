#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int received[number];
    int give;
    for (int i = 0; i < number; i++){
        cin >> give;
        received[give - 1] = i + 1;
    }

    for (int i = 0; i < number; i++){
        cout << received[i];

        if (i != number - 1){
            cout << " ";
        }
    }
    return 0;
}