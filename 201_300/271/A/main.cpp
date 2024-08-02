#include <iostream>
#include <string>
using namespace std;

bool isDistinct(int number)
{
  string str = to_string(number);
  bool isDuplicate = false;
  for (unsigned int i = 0; i < str.length(); i++)
  {
    for (unsigned int j = i + 1; j < str.length(); j++)
    {
      if (str[i] == str[j])
      {
        isDuplicate = true;
        break;
      }
    }
  }

  if (isDuplicate)
  {
    return false;
  }
  else
  {
    return true;
  }
}

int main()
{
  int number = 0;
  cin >> number;

  do
  {
    number++;
  } while (!isDistinct(number));

  cout << number;
  return 0;
}