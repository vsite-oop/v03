#include "app.h"
#include <algorithm>

namespace vsite::oop::v3
{
    results::results(unsigned nrStudents) : 
        nrStudents { nrStudents },
        nrStudentsAdded(0)
    {
        arStudents = new student[nrStudents];
    }

    results::~results() {
        delete[] arStudents; arStudents = nullptr;
    }

    void results::add(student stdnt) {
        arStudents[nrStudentsAdded] = stdnt;
        nrStudentsAdded++;
    }

    unsigned results::has_grade(int grade) const {
        unsigned rez = 0;
        for (int i = 0; i < nrStudentsAdded; i++) {
            if (arStudents[i].grade == grade)
                rez++;
        }
        return rez;
    }

    unsigned results::starts_with_letter(char firstLetter) const {
        unsigned rez = 0;
        for (int i = 0; i < nrStudentsAdded; i++) {
            if (tolower(arStudents[i].name[0]) == tolower(firstLetter))
                rez++;
        }
        return rez;
    }

    array::array()
        : arraySize{ 0 }
        , reservedSpace{ 8 }
        , valueArray{ new double[reservedSpace] }
    {
    }

    array::array(const uint32_t arraySize, const double value)
        : arraySize{ arraySize }
        , reservedSpace{ getReservedSpaceFromSize(arraySize)}
        , valueArray{ new double[reservedSpace] }
    {
        std::fill(valueArray, valueArray + arraySize, value);
        if (arraySize >= reservedSpace) { growArray();}
    }

    array::array(const array& templateArray)
        : arraySize{ templateArray.arraySize }
        , reservedSpace{ templateArray.reservedSpace }
        , valueArray{ new double[reservedSpace] }
    {
        std::copy(templateArray.valueArray, templateArray.valueArray + templateArray.arraySize, this->valueArray);
    }

    array::array(array&& other)
        : arraySize{ other.arraySize }
        , reservedSpace{ other.reservedSpace }
        , valueArray{ new double[reservedSpace] }
    {
        std::copy(other.valueArray, other.valueArray + other.arraySize, this->valueArray);
        other.arraySize = 0;
        other.reservedSpace = 0;
        other.valueArray = nullptr;
    }

    array::~array() {
        delete[] valueArray;
    }

    double array::at(const int index) const {
        if (0 < arraySize && index < arraySize) { return valueArray[index]; }
        return 0.;
    }

    uint32_t array::size() const { return arraySize; }

    void array::growArray() {
        reservedSpace *= 2;

        double* tempArray = new double[reservedSpace];
        std::copy_n(valueArray, arraySize, tempArray);
        delete[] valueArray;

        valueArray = tempArray;
    }

    uint32_t array::getReservedSpaceFromSize(const int size) {
        uint32_t start = 8;
        while (start <= size) { start *= 2; }
        return start;
    }

    void array::push_back(const double value) {
        if (arraySize == reservedSpace) {
            growArray();
        }
        
        valueArray[arraySize] = value;
        ++arraySize;
        }
}
