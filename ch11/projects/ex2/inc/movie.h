#ifndef MOVIE_H
#define MOVIE_H

#define SIZE 20

typedef struct Movie_t
{
    char director[SIZE];
    char title[SIZE];
    int length;
    int year;
} movie_t;

#endif