#include <iostream>
using namespace std;

int main()
{
    int layer;
    cin >> layer;
    
    string result = "";
    for (int i = 0; i < layer; i++){
        if (i % 2 == 0){
            result += "I hate ";
        }
        else {
            result += "I love ";
        }

        if (i == layer - 1){
            result += "it";
        }
        else {
            result += "that ";
        }
    }

    cout << result;
    return 0;
}