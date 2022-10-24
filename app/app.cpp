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

    /*results::~results() {
        delete arStudents; arStudents = nullptr;
    }*/

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
}