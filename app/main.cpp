#include <iostream>
#include <format>
#include <string>
#include "app.h"


int main()
{
    int nrStudents;
    std::cout << "Unesite broj studenata: ";
    std::cin >> nrStudents;

    vsite::oop::v3::results tablicaRezultata = vsite::oop::v3::results(nrStudents);

    for (int i = 1; i <= nrStudents; i++) {
        vsite::oop::v3::student inputStudent;

        std::cout << "Unesite ime " << i << ". studenta: ";
        std::cin >> inputStudent.name;

        std::cout << "Unesite ocjenu " << i << ". studenta: ";
        std::cin >> inputStudent.grade;

        tablicaRezultata.add(inputStudent);
    }

    int ocjenaStatistika;
    std::cout << "\n\nUnesite ocjenu za koju zelite vidjeti statistiku: ";
    std::cin >> ocjenaStatistika;
    std::cout << std::format("Broj studenata koji su dobili ocjenu {}: {}\n", ocjenaStatistika, tablicaRezultata.has_grade(ocjenaStatistika));

    char imeStatistika;
    std::cout << "\n\nUnesite prvo slovo imena za koje zelite vidjeti statistiku: ";
    std::cin >> imeStatistika;
    std::cout << std::format("Broj studenata cije ime pocinje s '{}': {}\n", imeStatistika, tablicaRezultata.starts_with_letter(imeStatistika));
}
