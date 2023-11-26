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
#include <cstring>
#include "LblShape.h"

namespace sdds
{
	void LblShape::setEmpty()
	{
		m_label = nullptr;
	}
	const char* LblShape::label() const
	{
		return m_label;
	}
	LblShape::LblShape()
	{
		
	}
	LblShape::LblShape(const char* label)
	{
		if (label) {
			delete[] m_label;
			m_label = nullptr;
			m_label = new char[strlen(label) + 1];
			strcpy(m_label, label);
		}
		else {
			setEmpty();
		}
	}
	void LblShape::getSpecs(std::istream& istr)
	{
		char str[4096];
		istr.get(str, 4096,',');
		istr.ignore();

		delete[] m_label;
		m_label = new char[strlen(str) + 1];
		strcpy(m_label, str);
	}
	LblShape::~LblShape()
	{
		delete[] m_label;
	}
}