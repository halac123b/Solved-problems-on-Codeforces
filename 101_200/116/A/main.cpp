#include <iostream>
using namespace std;

int main()
{
  int numberTram;
  cin >> numberTram;

  int capacity = 0;
  int number = 0;
  int enter = 0, exit = 0;
  for (int i = 0; i < numberTram; i++)
  {
    cin >> exit >> enter;
    number += (enter - exit);
    if (number < 0)
    {
      number = 0;
    }
    if (number > capacity)
    {
      capacity = number;
    }
  }
  cout << capacity;
  return 0;
}