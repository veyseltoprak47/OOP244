/******************************************************************/
/* NAME : VEYSEL TOPRAK
*  ID   : 124332198
*  EMAIL: vtoprak@myseneca.ca
*  DATE : 11/24/2023
*
I have done all the coding by myself and only copied the code that
my professor provided to complete my workshops and assignments*/
/******************************************************************/

#ifndef SDDS_STUDENT_H
#define SDDS_STUDENT_H
namespace sdds 
{
    class Student 
    {
        char* m_name{nullptr};
        int m_age{0};
        void setEmpty();
    protected:
        operator bool()const;
        //allocate memory and copy the source to destination
        void alocpy(char*& destination, const char* source);
    public:
        Student();
        Student(const char* name, size_t age);
        Student(const Student& student);
        Student& operator=(const Student& student);
        virtual ~Student();
        void display() const;
    };
}
#endif // SDDS_STUDENT_H
