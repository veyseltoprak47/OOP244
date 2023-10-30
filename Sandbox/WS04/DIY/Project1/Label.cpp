/******************************************************************/
/* NAME : VEYSEL TOPRAK
*  ID   : 124332198
*  EMAIL: vtoprak@myseneca.ca
*  DATE : 10/10/2023
*
I have done all the coding by myself and only copied the code that
my professor provided to complete my workshops and assignments*/
/******************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <iomanip>
#include "Label.h"

namespace sdds{
	
	Label::Label() 
	{
		const char defaultFrame[] = "+-+|+-+|";
		strcpy(m_frame, defaultFrame);
		m_content = nullptr;
	}

	Label::~Label() {
			delete[] m_content;
			m_content = nullptr;
	}

	Label::Label(const char* frameArg)
	{
		if (frameArg != nullptr )
		{
			strcpy(m_frame, frameArg);
		}else{
			
			const char defaultFrame[] = "+-+|+-+|";
			strcpy(m_frame, defaultFrame);
		}
		
	}

	Label::Label(const char* frameArg, const char* content)
	{
		delete[] m_content;
		m_content = nullptr;
		m_content = new char[strlen(content) + 1];
		strcpy(m_content, content);

		strcpy(m_frame, frameArg);
	}

	std::istream& Label::readLabel()
	{
		char content[71];

		std::cout << "> ";
		std::cin.clear();
		std::cin.getline(content, 71, '\n');

		text(content);

		return std::cin;
	}

	std::ostream& Label::printLabel()const
	{
		if (m_content) {
			const int labelSize = strlen(m_content) + 3;

			std::cout << m_frame[0] << std::setfill(m_frame[1]) << std::setw(labelSize) << m_frame[2] << std::endl
				<< m_frame[7] << std::setfill(' ') << std::setw(labelSize) << m_frame[3] << std::endl
				<< m_frame[7] << " " << m_content << " " << m_frame[3] << std::endl
				<< m_frame[7] << std::setfill(' ') << std::setw(labelSize) << m_frame[3] << std::endl
				<< m_frame[6] << std::setfill(m_frame[5]) << std::setw(labelSize) << m_frame[4];
		}

		return std::cout;
	}

	Label& Label::text(const char* content)
	{
		if (m_content != nullptr) {
			delete[] m_content;
			m_content = nullptr;
		}
			
		m_content = new char[strlen(content) + 1];
		strcpy(m_content, content);

		return *this;

	}

}