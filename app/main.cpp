#include "app.h"
#include <iostream>

using vsite::oop::v3::student;
using vsite::oop::v3::array;
using vsite::oop::v3::results;

int main()
{
    student s;
    int sBrojac;

    std::cout << "Unesite broj studenata: ";
    std::cin >> sBrojac;

    results sData(sBrojac);

    for (int i = 0; i < sBrojac; i++) {
        std::cout << "Unesite ime i ocjenu: ";
        std::cin >> s.name >> s.grade;

        sData.add(s);
    }

    int statO;
    std::cout << "Unesite ocjenu koju zelite: ";
    std::cin >> statO;
    std::cout << "Broj studenata :'" << statO << "' : " << sData.has_grade(statO) << std::endl;

    char statS;
    std::cout << "Unesite slovo: ";
    std::cin >> statS;
    std::cout << "Broj studenata sa pocetnim slovom '" << statS << "' : " << sData.starts_with_letter(statS) << std::endl;
}
