/******************************************************************/
/* NAME : VEYSEL TOPRAK
*  ID   : 124332198
*  EMAIL: vtoprak@myseneca.ca
*  DATE : 10/10/2023
*
I have done all the coding by myself and only copied the code that
my professor provided to complete my workshops and assignments*/
/******************************************************************/

#ifndef SDDS_LABEL_H
#define SDDS_LABEL_H
#include <istream>
#include <iostream>
#define MAX_CHARACTER 70

namespace sdds {
	class Label {
		char m_frame[9]{};
		char* m_content{};
	public:
		Label();
		~Label();
		Label(const char* frameArg);
		Label(const char* frameArg, const char* content);
		std::istream& readLabel();
		std::ostream& printLabel()const;
		Label& text(const char* content);
	};
}
#endif// !SDDS_LABEL_H