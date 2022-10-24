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
        //~results();

        void add(student stdnt);
        unsigned has_grade(int grade) const;
        unsigned starts_with_letter(char firstLetter) const;
    };
}