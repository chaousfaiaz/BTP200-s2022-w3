/*
***************************
                          Workshop - #3 (P1)
Full Name  : Arnav Barua 
Student ID#: 164864217
Email      : abarua10@myseneca.ca
Section    : NBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
***************************
*/

#ifndef ARMY_H
#define ARMY_H

#define MAX_NAME_LEN 50

namespace sdds
{
class Army
{
private:
// private data members
char nationality[MAX_NAME_LEN+1];
int units;
double power;

public:

Army(); 

void setEmpty(); // set the army to a empty state
void createArmy(const char* country, double pow, int troops);
void updateUnits(int troops); // update the units and power
const char* checkNationality() const;
int checkCapacity() const;
double checkPower() const;
bool isEmpty() const; // to verify if army is in empty state
bool isStrongerThan(const Army& army)const; // compare this army with the parameter army to see which is stronger
};

// global (stand-alone) functions
void battle( Army& arm1, Army& arm2);
void displayDetails(const Army* armies, int size);
}

#endif //ARMY_H