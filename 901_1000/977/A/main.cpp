#include <iostream>
using namespace std;

int main()
{
  int number, divide;
  cin >> number >> divide;

  for (int i = divide; i > 0; i--)
  {
    if (number % 10 > 0)
    {
      number--;
    }
    else
    {
      number /= 10;
    }
  }
  cout << number;
  return 0;
}