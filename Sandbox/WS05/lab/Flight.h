/******************************************************************/
/* NAME : VEYSEL TOPRAK
*  ID   : 124332198
*  EMAIL: vtoprak@myseneca.ca
*  DATE : 13/10/2023
*
I have done all the coding by myself and only copied the code that
my professor provided to complete my workshops and assignments*/
/**********************************************************************/
/***********************************************************************
// OOP244 Workshop #5 lab (part 1): tester program
//
// File  Flight.h
// Version 1.0
// Author   Asam Gulaid, revised by Fardad Soleimanloo
// Description
//
// Revision History
// -----------------------------------------------------------
// Name                 Date            Reason
***********************************************************************/
#ifndef SDDS_FLIGHT_H
#define SDDS_FLIGHT_H
#include <iostream>

namespace sdds {

    const int Boen747Capacity = 388;
    const int FuelTankCapacity = 238840;

    class Flight {

        int m_passengers = 0;
        double m_fuel = 0;
        char m_title[16];
        void emptyPlane();

    public:
        Flight();
        Flight(int passengers, double fuel, const char* title);
        std::ostream& display()const;
        operator bool() const;
        operator int() const;
        operator double() const;
        operator const char* () const;
        bool operator~ () const;
        Flight& operator+= (double fuel);
        Flight& operator+= (int passenger);
        Flight& operator-= (double fuel);
        Flight& operator-= (int passenger);
        Flight& operator<< (Flight& flight);
        Flight& operator>> (Flight& flight);
        int operator+ (Flight& flight);
        friend int operator+= (int& value, const Flight& flight);
        Flight& operator= (int passenger);
        Flight& operator= (double fuel);
        Flight& operator= (Flight& flight);
    };

}
#endif // SDDS_FLIGHT_H
