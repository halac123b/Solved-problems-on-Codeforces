#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
  string s1, s2;
  cin >> s1 >> s2;
  int result = 0;
  for (int i = 0; i < s1.length(); i++)
  {
    if (s1[i] == s2[i] || abs(s1[i] - s2[i]) == 32)
    {
      continue;
    }
    else
    {
      if (s1[i] >= 97)
      {
        s1[i] -= 32;
      }
      if (s2[i] >= 97)
      {
        s2[i] -= 32;
      }
      if (s1[i] > s2[i])
      {
        result = 1;
      }
      else
      {
        result = -1;
      }
      break;
    }
  }
  if (result == 0)
  {
    if (s1.length() > s2.length())
    {
      result = 1;
    }
    else if (s1.length() < s2.length())
    {
      result = -1;
    }
  }
  cout << result;
  return 0;
}