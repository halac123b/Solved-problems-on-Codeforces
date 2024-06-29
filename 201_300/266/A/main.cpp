#include <iostream>
using namespace std;

int main()
{
  int number;
  cin >> number;
  char a[50];
  char preChar = ' ';
  int count = 0;
  for (int i = 0; i < number; i++)
  {
    cin >> a[i];
    if (a[i] == preChar)
    {
      count++;
    }
    else
    {
      preChar = a[i];
    }
  }

  cout << count;
  return 0;
}