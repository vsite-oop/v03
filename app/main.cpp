#include <iostream>
#include <format>
#include <string>
#include "app.h"


int main()
{
    int nrStudents;
    std::cout << "Unesite broj studenata: ";
    std::cin >> nrStudents;

    auto tablicaRezultata = vsite::oop::v3::results(nrStudents);

    for (int i = 1; i <= nrStudents; i++) {
        std::string ime;
        int ocjena;

        std::cout << "Unesite ime " << i << ". studenta: ";
        std::cin >> ime;

        std::cout << "Unesite ocjenu " << i << ". studenta: ";
        std::cin >> ocjena;

        tablicaRezultata.add(vsite::oop::v3::student(ime, ocjena));
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
