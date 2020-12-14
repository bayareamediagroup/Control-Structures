#include <iostream>
#include "movie.h"

using namespace std;

void showRelease(const movie_t *release)
{
  cout << "The famous director: " << release->director << endl;
}

void information(movie_t film)
{
  cout << "Title: " << film.title << "\nDirector: " << film.director << "\nYear Released: " << film.released << endl;
}

int main(void)
{
  movie_t movie = {"Training Day", "Michael Jones", 2001, 89};
  movie_t *ptrShow = 0;

  ptrShow = &movie;

  cout << "First Year Released: " << ptrShow->released << endl;

  showRelease(ptrShow);

  information(movie);

  return 0;
}

/*
 * Movie Data
 * Write a program that uses a structure named MovieData to store the following information about a movie.
 *
 * Title
 * Director
 * Year Released
 * Running Time (in minutes)
 *
 * The program should create two MoveData variables, store values in their members,
 * and pass each one, in turn, to a function that displays the information about the movie
 * in a clealy formated manner.
 * */
