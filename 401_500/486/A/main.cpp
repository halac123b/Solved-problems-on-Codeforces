#include <iostream>
using namespace std;

int main()
{
    long long number;
    cin >> number;
    
    cout << (number / 2) - (number % 2) * number;
    return 0;
}