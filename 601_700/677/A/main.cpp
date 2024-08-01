#include <iostream>
using namespace std;

int main()
{
  int number;
  int height;
  cin >> number >> height;

  int personHeight;
  int sumWidth = 0;
  for (int i = 0; i < number; i++)
  {
    cin >> personHeight;
    if (personHeight > height)
    {
      sumWidth += 2;
    }
    else
    {
      sumWidth += 1;
    }
  }

  cout << sumWidth;
  return 0;
}