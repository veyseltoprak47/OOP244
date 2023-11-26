/******************************************************************/
/* NAME : VEYSEL TOPRAK
*  ID   : 124332198
*  EMAIL: vtoprak@myseneca.ca
*  DATE : 11/17/2023
*
I have done all the coding by myself and only copied the code that
my professor provided to complete my workshops and assignments*/
/******************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <cstring>
#include "Rectangle.h"


using namespace std;

namespace sdds
{
	void Rectangle::setEmpty()
	{
		m_width=0;
		m_height=0;
	}
	Rectangle::Rectangle() : LblShape() {
		
	};

	Rectangle::Rectangle(const char* label, const int width, const int height) : LblShape(label)
	{
		int value = strlen(this->label()) + 2;

		if (height < 3 || width < value) {
			setEmpty();
		}
		else {
			m_width = width;
			m_height = height;
		}
	};

	void Rectangle::getSpecs(std::istream& istr)
	{
		LblShape::getSpecs(istr);
		istr >> m_width;
		istr.ignore(2000, ',');
		istr >> m_height;
		istr.ignore(2000, '\n');
	};

	void Rectangle::draw(std::ostream& ostr) const
	{
		if (m_width > 0 && m_height > 0) {
			ostr << "+";
			for (int i = 0; i < m_width - 2; i++) {
				ostr << "-";
			}
			ostr << "+" << endl;

			ostr << "|";
			ostr << setw((streamsize)m_width - 2) << setfill(' ') << left << label();
			ostr << "|" << endl;

			for (int i = 0; i < m_height - 3; i++) {
				ostr << "|" << setw((streamsize)m_width - 2) << " " << "|" << endl;
			}

			ostr << "+";
			for (int i = 0; i < m_width - 2; i++) {
				ostr << "-";
			}
			ostr << "+";
		}
	};
}