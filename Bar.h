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
*///Bar.h

#ifndef SDDS_BAR_H
#define SDDS_BAR_H

namespace sdds
{
	class Bar
	{
		char m_title[20];
		char m_fill;
		int m_Val;

	public:
		void setEmpty();
		void set(const char* title, char fill, int val);
		bool isValid()const;
		void draw()const;

	};
}
#endif//BAR_H

