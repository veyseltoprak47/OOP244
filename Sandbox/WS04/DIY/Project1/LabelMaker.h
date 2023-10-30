/******************************************************************/
/* NAME : VEYSEL TOPRAK
*  ID   : 124332198
*  EMAIL: vtoprak@myseneca.ca
*  DATE : 10/10/2023
*
I have done all the coding by myself and only copied the code that
my professor provided to complete my workshops and assignments*/
/******************************************************************/

#ifndef SDDS_LABELMAKER_H
#define SDDS_LABELMAKER_H
#include "Label.h"

namespace sdds {
    class LabelMaker {
        Label* labels;
        int m_numberOfLabels;

    public:
        LabelMaker(int noOfLabels);

        void readLabels();

        void printLabels();

        ~LabelMaker();
    };

}
#endif// !SDDS_LABELMAKER_H