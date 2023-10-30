/******************************************************************/
/* NAME : VEYSEL TOPRAK
*  ID   : 124332198
*  EMAIL: vtoprak@myseneca.ca
*  DATE : 10/10/2023
*
I have done all the coding by myself and only copied the code that
my professor provided to complete my workshops and assignments*/
/******************************************************************/

#include <iostream>
#include "Label.h"
#include "LabelMaker.h"

namespace sdds {

    LabelMaker::LabelMaker(int noOfLabels) {
        m_numberOfLabels = noOfLabels;
        labels = new Label[m_numberOfLabels];
    }

    void LabelMaker::readLabels() {
        std::cout << "Enter " << m_numberOfLabels << " labels:" << std::endl;
        for (int i = 0; i < m_numberOfLabels; i++) {
            std::cout << "Enter label number " << i + 1 << std::endl;
            labels[i].readLabel();
        }
    }

    void LabelMaker::printLabels() {
        for (int i = 0; i < m_numberOfLabels; i++) {
            labels[i].printLabel();
            std::cout << std::endl;
        }
    }

    LabelMaker::~LabelMaker() {
        delete[] labels;
        labels = nullptr;
    }
}