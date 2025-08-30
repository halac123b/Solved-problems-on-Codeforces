#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long number, order;
    cin >> number >> order;

    long long mid = ceil((double)number / 2);
    if (order > mid){
        cout << 2 * (order - mid);
    }
    else {
        cout << 2 * order - 1;
    }
    return 0;
}