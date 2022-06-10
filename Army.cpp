/*
***************************
                          Workshop - #3 (P1)
Full Name  : MD Faiaz
Student ID#: 164899213
Email      : mfaiaz@myseneca.ca
Section    : NBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
***************************
*/

#include "Army.h"
#include <iostream>
#include <cstring>
#include <iomanip>


using namespace std;
namespace sdds
{
// default constructor to set object to an empty state
Army::Army()
{
setEmpty();
}

// function to set nationality to empty string and change the units and power to 0 value
void Army:: setEmpty()
{
    strcpy(nationality,"");
    units = 0;
	power = 0;
}

// function to set the nationality, power and units to input parameters if everything is correct
void Army:: createArmy(const char* country, double pow, int troops)
{

// check if country is not null and if the length of country is greater than 0, and pow and troops are greater than 0
if(country != nullptr && strlen(country) > 0 && pow > 0 && troops > 0)
{
	// copy country to nationality
	if(strlen(country) > MAX_NAME_LEN) 
	{
		strncpy(nationality, country, MAX_NAME_LEN);
	}
	else // else copy the characters from nationality to country
	strcpy(nationality, country);

// copy troops to units and pow to power
	units = troops;
	power = pow;
}

else // any invalid value, will chgange the object to empty state
setEmpty();
}

// function to update the units and power
void Army:: updateUnits(int troops)
{
units += troops; // add input troops to units
power += troops*(0.25); // add 25% of troops as power
}

//getters

// return nationality
const char* Army:: checkNationality() const
{
return nationality;
}

// return units
int Army:: checkCapacity() const
{
return units;
}

// return power
double Army:: checkPower() const
{
return power;
}

// function that will return true if nationality is an empty string and units is less than or equal to 0 otherwise, return false
bool Army:: isEmpty() const
{
return strlen(nationality) == 0 && units == 0;
}

// function that will return true if power of this Army is greater than power of army otherwise it returns false
bool Army:: isStrongerThan(const Army& army)const
{
    if(power>army.checkPower())
        return true;
    else 
		return false;
}

// function that will take the input references of two Army objects and 
//updates the units and power of one of the Army object
void battle(Army &arm1, Army &arm2)
{
	//validate the input of armies is valid
    if(!(arm1.isEmpty() && arm2.isEmpty()))
    {
		//display the armies in the battle and the army which has won the battle 
        cout<<"In battle of "<<arm1.checkNationality()<<" and "<<arm2.checkNationality()<<", ";
        if(arm1.isStrongerThan(arm2))
        {
			//arm1 is stronger than arm2
            cout<<arm1.checkNationality();
			
			//decrease unit of arm1 by 50%
            arm2.updateUnits(arm2.checkCapacity()*(-0.5));
        }
        else
        {
			//arm2 is more poweful than arm1
            cout<<arm2.checkNationality();
			
			//decrease unit of arm2 by 50%
            arm1.updateUnits(arm1.checkCapacity()*(-0.5));
        }
        cout<<" is victorious!" << endl;
    }
}


// function that will take inputs of an array that has Army objects and its size
// and then display the nationality, units and power of each army that are valid
void displayDetails(const Army* armies, int size){
cout << "Armies reporting to battle: "<<endl;

// loop over the given array
for(int i=0;i<size;i++)
{
// if the army is not empty then display the nationality, units and power
if(!armies[i].isEmpty())
cout << "Nationality: " << armies[i].checkNationality() << ", Units Count: " << armies[i].checkCapacity()
<< ", Power left: " << fixed << setprecision(1) << armies[i].checkPower() << endl;
}

}
}

// end of Army.cpp