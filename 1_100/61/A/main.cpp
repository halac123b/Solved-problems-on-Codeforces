#include <iostream>
using namespace std;

int main()
{
    string in1, in2;
    cin >> in1 >> in2;

    string out = "";
    for (int i = 0; i < in1.length(); i++){
        if (in1[i] != in2[i]){
            out += '1';
        }
        else {
            out += '0';
        }
    }

    cout << out;
    return 0;
}