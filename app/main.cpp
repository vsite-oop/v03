#include "app.h"
#include <iostream>
#include <vector>
#include<format>

// read number of results
// read all student data
// read grade and output grade statistics
// read letter and output letter statistics

    int main()
    {
 using vsite::oop::v3::student;
 using vsite::oop::v3::array;
 using vsite::oop::v3::results;
        student stud;
        int studCount;

        std::cout << "Unesite broj unosa: ";
        std::cin >> studCount;

        results studData(studCount);

        for (int i = 0; i < studCount; i++) {
            std::cout << "Unesite ime i ocjenu: ";
            std::cin >> stud.name >> stud.grade;

            studData.add(stud);
        }

        int statOcjena;
        std::cout << "Unesite ocjenu: ";
        std::cin >> statOcjena;
        std::cout << std::format("Broj studenata s trazenom ocjenom {} iznosi: {}\n", statOcjena, studData.has_grade(statOcjena));


        char statSlovo;
        std::cout << "Unesite prvo slovo studenta: ";
        std::cin >> statSlovo;
        std::cout << std::format("Broj studenata koji pocinju sa slovom: {} ima: {}\n", statSlovo, studData.starts_with_letter(statSlovo));

    }
