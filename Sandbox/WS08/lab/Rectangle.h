/******************************************************************/
/* NAME : VEYSEL TOPRAK
*  ID   : 124332198
*  EMAIL: vtoprak@myseneca.ca
*  DATE : 11/17/2023
*
I have done all the coding by myself and only copied the code that
my professor provided to complete my workshops and assignments*/
/******************************************************************/
#ifndef SDDS_RECTANGLE_H
#define SDDS_RECTANGLE_H
#include "LblShape.h"

namespace sdds {
	class Rectangle : public LblShape {
		int m_width{0};
		int m_height{0};
		void setEmpty();
	public:
		Rectangle();
		Rectangle(const char* label, const int width, const int height);
		void getSpecs(std::istream& istr);
		void draw(std::ostream& ostr) const;
	};
}
#endif // !SDDS_RECTANGLE_H