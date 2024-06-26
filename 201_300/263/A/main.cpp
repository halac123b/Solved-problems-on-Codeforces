#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int num;
  int result = 0;
  for (int i = 1; i < 6; i++)
  {
    for (int j = 1; j < 6; j++)
    {
      cin >> num;
      if (num == 1)
      {
        result = abs(i - 3) + abs(j - 3);
        break;
      }
    }
  }
  cout << result;
  return 0;
}