/******************************************************************/
/* NAME : VEYSEL TOPRAK
*  ID   : 124332198
*  EMAIL: vtoprak@myseneca.ca
*  DATE : 11/17/2023
*
I have done all the coding by myself and only copied the code that
my professor provided to complete my workshops and assignments*/
/******************************************************************/

#ifndef SDDS_LBLSHAPE_H
#define SDDS_LBLSHAPE_H
#include "Shape.h"

namespace sdds
{
	class LblShape : public Shape
	{
		char* m_label{nullptr};
		void setEmpty();
	protected:
		const char* label()const;
	public:
		LblShape();
		LblShape(const char* label);
		virtual void getSpecs(std::istream& istr = std::cin);
		virtual ~LblShape();
	};
}
#endif // !SDDS_LBLSHAPE_H
