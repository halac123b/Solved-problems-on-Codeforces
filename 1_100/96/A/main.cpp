#include <iostream>
#include <string>
using namespace std;

int main()
{
  string input;
  cin >> input;

  char currentTeam = input[0];
  int count = 1;
  bool isDangerous = false;

  for (int i = 1; i < input.length(); i++)
  {
    if (input[i] == currentTeam)
    {
      count++;
      if (count == 7)
      {
        isDangerous = true;
        break;
      }
    }
    else
    {
      currentTeam = input[i];
      count = 1;
    }
  }
  if (isDangerous)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
  return 0;
}