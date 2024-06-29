#include <iostream>
using namespace std;

int main()
{
  int moneyEach, moneyOwn, number;
  cin >> moneyEach >> moneyOwn >> number;

  int moneyBorrow = ((number + 1) * number / 2) * moneyEach - moneyOwn;
  if (moneyBorrow < 0)
  {
    moneyBorrow = 0;
  }
  cout << moneyBorrow;
  return 0;
}