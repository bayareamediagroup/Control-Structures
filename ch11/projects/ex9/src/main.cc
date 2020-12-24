#include <iostream>
#include <iomanip>
#include <cstring>

#include "speaker.h"

#define SIZE 10

using namespace std;

void enter_data(speaker_t *s)
{
  cout << "Name: ";
  cin.ignore();
  getline(cin, s->name);

  cout << "Phone Number: ";
  cin >> s->phone;

  cout << "Topic: ";
  cin >> s->topic;

  cout << "Registration Fee: ";
  cin >> s->fee;
}

int main(void)
{
  int i = 0;
  speaker_t speaker[SIZE];

  cout << "Enter Data: ";

  while(i < SIZE) {
    enter_data(&speaker[i]);
    i += 1;
  }

  display(speaker);

  return 0;
}

/*
 * Speakers' Bureau
 *
 * Write a program that keeps track of speakers's beureau
 *
 * The program should use a structure to store the following data about a speaker:
 * Name
 * Telephone Number
 * Speaker Topic
 * Fee Required
 * */
