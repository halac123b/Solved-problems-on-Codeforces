#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int a, b;
    for (int i = 0; i < number; i++){
        cin >> a >> b;
        int step = ceil(((float)a / b)) * b - a;
        cout << step << endl;
    }
    return 0;
}