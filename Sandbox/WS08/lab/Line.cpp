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
#include "Line.h"

using namespace std;
namespace sdds {
	Line::Line() : LblShape() {
		
	};

	Line::Line(const char* label, const int len) : LblShape(label) {
		m_length = len;
	};

	void Line::getSpecs(std::istream& istr) {
		LblShape::getSpecs(istr);
		istr >> m_length;
		istr.ignore();
	};

	void Line::draw(std::ostream& ostr) const {
		if (m_length > 0 && label() != nullptr) {
			ostr << label() << endl;

			for (int i = 0; i < m_length; i++) {
				ostr << "=";
			}
		}
	};
}