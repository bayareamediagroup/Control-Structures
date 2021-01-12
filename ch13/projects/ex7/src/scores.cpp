#include <cstdlib>
#include <cstring>
#include <iostream>

#include "scores.hpp"

using namespace std;

Scores::Scores()
{
    cout << "Default Constructor" << endl;
}

Scores::Scores(double s1, double s2, double s3)
{
    score1 = s1;
    score2 = s2;
    score3 = s3;
}

void Scores::setAverageTestScores(double t1, double t2, double t3)
{
    score1 = t1;
    score2 = t2;
    score3 = t3;
}

double Scores::getAverageTestScores() const
{
  double sum = (score1 + score2 + score3) / 3;
  return sum;
}

Scores::~Scores()
{
    cout << "Destructor Called!" << endl;
}
