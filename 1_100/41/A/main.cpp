#include <iostream>
#include <string>
using namespace std;

int main()
{
  string normal, reverse;
  cin >> normal >> reverse;

  int len = normal.length();
  bool right = true;
  for (int i = 0; i < len; i++)
  {
    if (normal[i] != reverse[len - 1 - i])
    {
      right = false;
      break;
    }
  }
  if (right)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
  return 0;
}