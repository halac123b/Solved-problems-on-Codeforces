#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int numCol;
    cin >> numCol;

    int rows[numCol];
    for (int i = 0; i < numCol; i++){
        cin >> rows[i];
    }
    sort(rows, rows + numCol);

    for (int i = 0; i < numCol; i++) {
        cout << rows[i] << " ";
    }
    return 0;
}