/******************************************************************/
/* NAME : VEYSEL TOPRAK
*  ID   : 124332198
*  EMAIL: vtoprak@myseneca.ca
*  DATE : 11/17/2023
*
I have done all the coding by myself and only copied the code that
my professor provided to complete my workshops and assignments*/
/******************************************************************/

#ifndef SDDS_LINE_H
#define SDDS_LINE_H
#include "LblShape.h"

namespace sdds
{
	class Line : public LblShape
	{
		int m_length{0};
	public:
		Line();
		Line(const char* label, const int lenght);
		void getSpecs(std::istream& istr=std::cin);
		void draw(std::ostream& ostr=std::cout) const;
	};
}
#endif // !SDDS_LINE_H