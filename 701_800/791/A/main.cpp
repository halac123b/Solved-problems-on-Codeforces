#include <iostream>
using namespace std;

int main()
{
  int small, big;
  cin >> small >> big;

  int count = 0;
  do
  {
    small *= 3;
    big *= 2;
    count++;
  } while (small <= big);

  cout << count;
  return 0;
}