/******************************************************************/
/* NAME : VEYSEL TOPRAK
*  ID   : 124332198
*  EMAIL: vtoprak@myseneca.ca
*  DATE : 11/24/2023
*
I have done all the coding by myself and only copied the code that
my professor provided to complete my workshops and assignments*/
/******************************************************************/
#ifndef SDDS_GRADUATE_H
#define SDDS_GRADUATE_H
#include "Student.h"

namespace sdds
{
    class Graduate : public Student {
        char* m_thesis{nullptr};
        char* m_supervisor{nullptr};
        void setEmpty();
    public:
        Graduate();
        Graduate(const char* name, size_t age, const char* thesis, const char* supervisor);
        virtual ~Graduate();
        Graduate(const Graduate& graduate);
        Graduate& operator=(const Graduate& graduate);
        void display() const;
    };
}
#endif // !SDDS_GRADUATE_H
