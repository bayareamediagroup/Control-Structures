#include <iomanip>
#include <iostream>
#include <string>

#include "scores.hpp"

using namespace std;

void sort_scores(int *scores, int s)
{
  cout << "Sort Test Scores " << endl;
  int *sc = scores;

  for(int k = s; k >= 0; k--)
  {
    cout << "-> " << *(sc + k) << endl;
  }
}

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

  sort_scores(ptrScores, size);

  /* return memory to the heap store */

  delete [] ptrScores;

  /* assign the pointer to nullptr */
  ptrScores = nullptr;
}

int main(void)
{
  int scores = 0;

  cout << "How many test scores would you like to enter? ";

  cin >> scores;

  test_scores(scores);

  return 0;
}
