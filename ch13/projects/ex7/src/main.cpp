#include <cstdlib>
#include <cstring>
#include <iostream>

#include "scores.hpp"

using namespace std;

int main(int argc, char **argv)
{
  int i = 0;
  double tc[3] = {0};
  Scores scores;
  Scores *sc = nullptr;

  sc = &scores;

  sc->setAverageTestScores(95.4, 78.9, 88.3);

  do {
    cout << "Test Score " << i << endl;
    cin >> tc[i];
    i++;
  } while(i < 3);

  sc->setAverageTestScores(tc[0], tc[1], tc[2]);

  cout << "Average Scores: " << sc->getAverageTestScores() << endl;

  return 0;
}
