#include <iostream>
#include <cstring>
#include "movie.h"

using namespace std;

void display(movie_t *movie)
{
    cout << "Title: " << movie->title << endl;
    cout << "Director: " << movie->director << endl;
    cout << "Director: " << movie->length << endl;
    cout << "Director: " << movie->year << endl;
    /*
    cout << "Budget: " << movie->budget << endl;
    cout << "Run Time: " << movie->length << endl;
    cout << "Year Released: " << movie->year << endl;
    */
}

int main(void)
{
    movie_t movie = {"Tom Cruise", "Colateral", 145, 2001};

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