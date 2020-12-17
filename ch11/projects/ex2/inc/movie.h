#ifndef MOVIE_H
#define MOVIE_H

#define SIZE 20

typedef struct
{
    char director[SIZE];
    char title[SIZE];
    int budget;
    int length;
    int year;
} movie_t;

#endif