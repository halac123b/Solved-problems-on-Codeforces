#include <iostream>
using namespace std;

int main()
{
  int numberVector;
  cin >> numberVector;
  int sumX = 0, sumY = 0, sumZ = 0;

  int x, y, z;
  for (int i = 0; i < numberVector; i++)
  {
    cin >> x >> y >> z;
    sumX += x;
    sumY += y;
    sumZ += z;
  }

  if (sumX == 0 && sumY == 0 && sumZ == 0)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
  return 0;
}