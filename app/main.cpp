#include "app.h"
#include<iostream>

// read number of results
// read all student data
// read grade and output grade statistics
// read letter and output letter statistics
using vsite::oop::v3::student;
using vsite::oop::v3::array;
using vsite::oop::v3::results;

int main()
{
    student stud;
    int studCount;

    std::cout << "Unesite broj studenata: ";
    std::cin >> studCount;

    results studData(studCount);

    for (int i = 0; i < studCount; i++) {
        std::cout << "Unesite ime i ocjenu (npr. Antonio 2): ";
        std::cin >> stud.name >> stud.grade;

        studData.add(stud);
    }

    int statOcjena;
    std::cout << "Unesite ocjenu za koju zelite statistiku: ";
    std::cin >> statOcjena;
    std::cout << "Broj studenata sa ocjenom '" << statOcjena << "' : " << studData.has_grade(statOcjena) << std::endl;

    char statSlovo;
    std::cout << "Unesite slovo za koje zelite statistiku: ";
    std::cin >> statSlovo;
    std::cout << "Broj studenata sa pocetnim slovom '" << statSlovo << "' : " << studData.starts_with_letter(statSlovo) << std::endl;

}
