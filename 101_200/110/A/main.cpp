#include <iostream>
#include <string>
using namespace std;

int main()
{
  string input;
  cin >> input;

  int countLucky = 0;
  for (unsigned int i = 0; i < input.length(); i++)
  {
    if (input[i] == '4' || input[i] == '7')
    {
      countLucky++;
    }
  }

  bool checkLucky = true;
  if (countLucky == 0)
  {
    checkLucky = false;
  }
  else
  {
    while (countLucky != 0)
    {
      if (countLucky % 10 != 4 && countLucky % 10 != 7)
      {

        checkLucky = false;
        break;
      }
      countLucky /= 10;
    }
  }

  if (checkLucky)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
  return 0;
}