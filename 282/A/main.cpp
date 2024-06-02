#include <iostream>
#include <string>

using namespace std;

int main()
{
  int numberTest;
  string statement;
  cin >> numberTest;
  int number = 0;
  for (int i = 0; i < numberTest; i++)
  {
    cin >> statement;
    if (statement.find('+') != std::string::npos)
    {
      number++;
    }
    else
    {
      number--;
    }
  }
  cout << number;
  return 0;
}