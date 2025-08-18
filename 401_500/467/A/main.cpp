#include <iostream>
using namespace std;

int main()
{
    int numberRoom;
    cin >> numberRoom;
    
    int count = 0;
    for (int i = 0; i < numberRoom; i++){
        int p, q;
        cin >> p >> q;

        if (q - p >= 2){
            count++;
        }
    }

    cout << count;
    return 0;
}