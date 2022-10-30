#pragma once
#include <string>

namespace vsite::oop::v3 
{
    struct student {
        std::string name;
        int grade;
    };

    class results {
        unsigned nrStudents;
        int nrStudentsAdded;
        student* arStudents;

    public:
        results(unsigned nrStudents);
        ~results();

        void add(student stdnt);
        unsigned has_grade(int grade) const;
        unsigned starts_with_letter(char firstLetter) const;
    };

    class array {
        uint32_t arraySize;
        uint32_t tailIndex;
        double *valueArray;
        uint32_t reservedSpace;
        void growArray();
        uint32_t getReservedSpaceFromSize(int size);
    public:
        array();
        array(uint32_t arraySize, double value);
        array(const array& templateArray);
        array(array&& other);
        ~array();
        uint32_t size() const;
        double at(int index) const;
        void push_back(double value);
    };
}