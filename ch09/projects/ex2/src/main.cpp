#include <iomanip>
#include <iostream>
#include <string>

#include "scores.h"

using namespace std;

void test_scores(int &size)
{
  int *ptrScores = nullptr;

  ptrScores = new int[size];

  for(int i = 0; i < size; i++)
  {
    cout << "Text Score " << i << " ";
    cin >> ptrScores[i];
  }

  cout << "Scores Entered" << endl;

  for(int j = 0; j < size; j++)
  {
    cout << "> " << ptrScores[j] << endl;;
  }

}

int main(void)
{
  int scores = 0;

  cout << "How many test scores would you like to enter? ";

  cin >> scores;

  test_scores(scores);
  return 0;
}
