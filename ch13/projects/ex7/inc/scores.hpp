#ifndef SCORES_H
#define SCORES_H

class Scores
{
  private:
    double score1, score2, score3;

  public:
    Scores();
    Scores(double, double, double);
    void setAverageTestScores(double, double, double);
    double getAverageTestScores() const;
    ~Scores();
};

#endif
