#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    string input;
    int count = 0;
    for (int i = 0; i < number; i++){
        cin >> input;

        if (input == "Tetrahedron"){
            count += 4;
        }
        else if (input == "Cube"){
            count += 6;
        }
        else if (input == "Octahedron"){
            count += 8;
        }
        else if (input == "Dodecahedron"){
            count += 12;
        }
        else if (input == "Icosahedron"){
            count += 20;
        }
    }

    cout << count;

    return 0;
}