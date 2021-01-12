#include <cstdlib>
#include <cstring>
#include <iostream>

#include "scores.hpp"

using namespace std;

int main(int argc, char **argv)
{
  Scores scores;
  Scores *sc = nullptr;

  sc = &scores;

  sc->setAverageTestScores(95.4, 78.9, 88.3);

  cout << "Average Scores: " << sc->getAverageTestScores() << endl;

  return 0;
}
