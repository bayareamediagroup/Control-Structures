#ifndef _MOVIE_
#define _MOVIE_

typedef struct Movie_t
{
    char title[20];
    char director[20];
    int released;
    int running_time;
} movie_t;

void information();
void showRelease(const movie_t *);

#endif
