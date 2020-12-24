#include <cstring>
#include <iomanip>
#include <iostream>

#include "speaker.h"

#define SIZE  3

using namespace std;

static void display(const speaker_t *d, int size)
{
    int i;
    cout << "Registrants" << endl;

    for(i = 0; i < size; ++i)
    {
        cout << i << ". " << d[i].name << " " << d[i].phone << " " << d[i].topic << " " << d[i].fee << "\n------------" << endl;
    }
}

static void enter_data(speaker_t *s)
{
  static int count = 1;

  cout << "Registrant " << count << ". ";

  cout << "Name: ";
  cin.ignore();
  getline(cin, s->name);

  cout << "Phone Number: ";
  cin >> s->phone;

  cout << "Topic: ";
  cin >> s->topic;

  cout << "Registration Fee: ";
  cin >> s->fee;

  cout << "************" << endl;

  count += 1;
}

int main(void)
{
  int i = 0;
  speaker_t speaker[SIZE];

  while(i < SIZE) {
    enter_data(&speaker[i]);
    i += 1;
  }

  display(speaker, i);

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
