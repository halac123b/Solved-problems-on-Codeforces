#include <iostream>
#include <string>
using namespace std;

int main()
{
  int numInput;
  cin >> numInput;

  string test;
  for (int i = 0; i < numInput; i++)
  {
    cin >> test;
    if (test.length() > 10)
    {
      cout << test[0] << test.length() - 2 << test[test.length() - 1] << endl;
    }
    else
    {
      cout << test << endl;
    }
  }
}