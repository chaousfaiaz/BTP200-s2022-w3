/*
***************************
                          Workshop - #3 (2)
Full Name  : MD Faiaz
Student ID#: 164899213
Email      : mfaiaz@myseneca.ca
Section    : NAA

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
***************************
*/

#ifndef SDDS_BARCHART_H
#define SDDS_BARCHART_H
#include "Bar.h"
namespace sdds
{
	class BarChart
	{
		char* m_chartTitle;
		Bar* m_bars;
		char m_fill;
		int m_noOfsamples;
		int m_added;
		void setEmpty();
		bool isValid()const;

	public:

		void init(const char* title, int noOfSampels, char fill);
		void add(const char* bar_title, int value);
		void draw()const;
		void deallocate();
	};
}
#endif//BARCHART_H
