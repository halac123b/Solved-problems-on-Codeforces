#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // Số người tham gia
  int numberPeople;
  // Index của thành viên để so sánh
  int checkIndex;

  cin >> numberPeople >> checkIndex;
  vector<int> peopleArray(numberPeople, 0);
  for (int i = 0; i < numberPeople; i++)
  {
    cin >> peopleArray[i];
  }

  int count = 0;
  for (int i = 0; i < numberPeople; i++)
  {
    if (peopleArray[i] >= peopleArray[checkIndex - 1] && peopleArray[i] > 0)
    {
      count++;
    }
  }
  cout << count;
  return 0;
}