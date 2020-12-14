#include <iostream>
#include "movie.h"

using namespace std;

void information(movie_t film)
{
  cout << "Title: " << film.title << "\nDirector: " << film.director << "\nYear Released: " << film.released << endl;
}

int main(void)
{
  movie_t movie = {"Training Day", "Michael Jones", 2001, 89};

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
