/******************************************************************/
/* NAME : VEYSEL TOPRAK
*  ID   : 124332198
*  EMAIL: vtoprak@myseneca.ca
*  DATE : 11/10/2023
*
I have done all the coding by myself and only copied the code that
my professor provided to complete my workshops and assignments*/
/******************************************************************/

#ifndef SDDS_PACK_H
#define SDDS_PACK_H
#include "Container.h"
namespace sdds
{
	class Pack : public Container
	{
		char m_content[MAX_LENGTH+1];
		int m_size;
		int unitSize;
		int numOfUnits;
	public:
		void setEmpty();
		Pack(const char* content, int size, int unitSize = 330, int numOfUnits = 0);
		int operator+=(int add);
		int operator-=(int subtract);
		int unit();
		int noOfUnits();
		int size();
		void clear(int size, int unitSize, const char* content);
		std::ostream& print(std::ostream& os);
		std::istream& read(std::istream& is);
	};
	std::ostream& operator<< (std::ostream& os, Pack& pack);
	std::istream& operator>> (std::istream& is, Pack& pack);
}
#endif //SDDS_PACK_H