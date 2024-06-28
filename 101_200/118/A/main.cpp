#include <iostream>
#include <string>
using namespace std;

bool isVowel(char input)
{
  char vowels[] = {'A', 'O', 'Y', 'E', 'U', 'I'};
  if (input >= 'a')
  {
    input -= 32;
  }
  for (int i = 0; i < 6; i++)
  {
    if (input == vowels[i])
    {
      return true;
    }
  }
  return false;
}

int main()
{
  string input;
  cin >> input;
  string result = "";
  for (unsigned int i = 0; i < input.length(); i++)
  {
    if (!isVowel(input[i]))
    {
      result += '.';
      if (input[i] < 'a')
      {
        result += (input[i] + 32);
      }
      else
      {
        result += input[i];
      }
    }
  }
  cout << result;
  return 0;
}