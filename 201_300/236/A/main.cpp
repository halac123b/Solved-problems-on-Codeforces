#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  vector<char> existChar;
  string input;
  cin >> input;
  int count = 0;

  for (int i = 0; i < input.length(); i++)
  {
    if (find(existChar.begin(), existChar.end(), input[i]) == existChar.end())
    {
      count++;
      existChar.push_back(input[i]);
    }
  }
  if (count % 2 != 0)
  {
    cout << "IGNORE HIM!";
  }
  else
  {
    cout << "CHAT WITH HER!";
  }
  return 0;
}