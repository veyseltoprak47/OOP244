/******************************************************************/
/* NAME : VEYSEL TOPRAK
*  ID   : 124332198
*  EMAIL: vtoprak@myseneca.ca
*  DATE : 11/10/2023
*
I have done all the coding by myself and only copied the code that
my professor provided to complete my workshops and assignments*/
/******************************************************************/

#ifndef SDDS_CONTAINER_H
#define SDDS_CONTAINER_H
#include <iostream>
namespace sdds
{
	const int MAX_LENGTH = 50;

	class Container
	{
		char m_content[MAX_LENGTH+1];
		int m_capacity;
		int m_volume;
	protected:
		void setEmpty();
		int capacity();
		int volume();
	public:
		Container(const char* content =nullptr, int capacity=0, int contentVolume = 0);
		int operator+=(int volume);
		int operator-=(int volume);
		operator bool();
		void clear(int capacity, const char* content);
		int getInt(const char* prompt, std::istream& is);
		int getInt(std::istream& is, int min, int max, const char* prompt, const char* errMes = nullptr);
		std::ostream& print(std::ostream& os) const;
		std::istream& read(std::istream& is);
	};
	std::ostream& operator<<(std::ostream& os, const Container& container);
	std::istream& operator>>(std::istream& is, Container& container);

}
#endif // !SDDS_CONTAINER_H
