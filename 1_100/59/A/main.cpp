#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  string input;
  vector<int> upperIndex, lowerIndex;
  cin >> input;
  for (unsigned int i = 0; i < input.length(); i++)
  {
    if (input[i] >= 'a')
    {
      lowerIndex.push_back(i);
    }
    else
    {
      upperIndex.push_back(i);
    }
  }

  if (lowerIndex.size() >= upperIndex.size())
  {
    for (unsigned int i = 0; i < upperIndex.size(); i++)
    {
      input[upperIndex[i]] += 32;
    }
  }
  else
  {
    for (unsigned int i = 0; i < lowerIndex.size(); i++)
    {
      input[lowerIndex[i]] -= 32;
    }
  }

  cout << input;
  return 0;
}