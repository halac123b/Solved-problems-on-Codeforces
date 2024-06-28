#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> numberList;
  string inputString;
  cin >> inputString;

  // Lấy các số từ string rồi push vào vector
  for (unsigned int i = 0; i < inputString.length(); i += 2)
  {
    numberList.push_back(inputString[i] - '0');
  }
  // Sort vector
  sort(numberList.begin(), numberList.end());

  string result = "";
  for (int i = 0; i < numberList.size(); i++)
  {
    result += numberList[i] + '0';
    if (i != numberList.size() - 1)
    {
      result += '+';
    }
  }
  cout << result;
  return 0;
}