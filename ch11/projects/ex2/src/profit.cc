#include <iostream>
#include <cstring>
#include "movie.h"

using namespace std;

void display(movie_t *movie)
{
    cout << "Director: " << movie->director << endl;
}

int main(void)
{
    movie_t movie = {"Collateral", "Tom Cruise", 2001, 130};

    cout << "configured!" << endl;

    display(&movie);

    return 0;
}

/*
    
*/