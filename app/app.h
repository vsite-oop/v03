#pragma once
#include <string>

namespace vsite::oop::v3 
{
    struct student {
        std::string name;
        int grade;
    };

    class results {
        uint32_t nrStudents;
        int nrStudentsAdded;
        student* arStudents;

    public:
        results(uint32_t nrStudents);
        ~results();

        void add(const student& stdnt);
        uint32_t has_grade(const int grade) const;
        uint32_t starts_with_letter(const char firstLetter) const;
    };

    class array {
        uint32_t reservedSpace;
        uint32_t arraySize;
        double *valueArray;
        void growArray();
        uint32_t getReservedSpaceFromSize(int size);
    public:
        array();
        array(uint32_t arraySize, double value);
        array(const array& templateArray);
        array(array&& other);
        ~array();
        uint32_t size() const;
        double at(const int index) const;
        void push_back(const double value);
    };
}