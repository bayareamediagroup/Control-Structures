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
    Modify the Movie Data program written for Programming Challenge 1 to include two
    additional members that hold the movie's production costs and first-year revenues.

    Modify the function that displays the movie data to display: title, director, release
    year, running time and first year's profit or loss. 
*/