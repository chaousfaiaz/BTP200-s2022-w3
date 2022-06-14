/*
***************************
                          Workshop - #3 (2)
Full Name  : MD Faiaz
Student ID#: 164899213
Email      : mfaiaz0@myseneca.ca
Section    : NAA

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
***************************
*/


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <iomanip>
#include "Bar.h"


using namespace std;
namespace sdds
{

	void Bar::setEmpty()
	{
		m_Val = -1;
		strcpy(m_title, "");

	}
	
	void Bar::set(const char* title, char fill, int val)
	{
		if (val < 0 || val>100)
		{
			setEmpty();
		}
		else
		{
			strcpy(m_title, title);
			m_fill = fill;
			m_Val = val;
		}
	}

	bool Bar::isValid()const
	{
		bool valid = false;
		if (m_Val > 0 && m_Val < 100 && strlen(m_title)>0)
		{
			valid = true;
		}
		return valid;
	}

	void Bar::draw()const
	{
		int i;
		if (Bar::isValid())
		{
			cout << setw(20) << left << setfill('.') << m_title << "|";
			for (i = 0; i < m_Val / 2; i++)
			{
				cout << m_fill;
			}
			cout << endl;
		}
	}
}