/******************************************************************/
/* NAME : VEYSEL TOPRAK
*  ID   : 124332198
*  EMAIL: vtoprak@myseneca.ca
*  DATE : 11/17/2023
*
I have done all the coding by myself and only copied the code that
my professor provided to complete my workshops and assignments*/
/******************************************************************/

#ifndef SDDS_SHAPE_H
#define SDDS_SHAPE_H
#include <iostream>

namespace sdds {
	class Shape {
	public:
		virtual void draw(std::ostream& ostr) const = 0;
		virtual void getSpecs(std::istream& istr) = 0;
		virtual ~Shape();
	};

	std::ostream& operator <<(std::ostream& ostr, const Shape& shape);
	std::istream& operator >>(std::istream& istr, Shape& shape);
}
#endif // !SDDS_SHAPE_H
