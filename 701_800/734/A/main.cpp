#include <iostream>
using namespace std;

int main()
{
  int numberGame;
  cin >> numberGame;
  string result;
  cin >> result;

  int countAton = 0;
  for (int i = 0; i < numberGame; i++)
  {
    if (result[i] == 'A')
    {
      countAton++;
    }
  }

  if (countAton > numberGame - countAton)
  {
    cout << "Anton";
  }
  else if (countAton < numberGame - countAton)
  {
    cout << "Danik";
  }
  else
  {
    cout << "Friendship";
  }
  return 0;
}