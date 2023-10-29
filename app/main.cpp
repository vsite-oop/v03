#include "app.h"
#include <iostream>

using vsite::oop::v3::student;
using vsite::oop::v3::array;
using vsite::oop::v3::results;
using std::cout;
using std::cin;


// read number of results
// read all student data
// read grade and output grade statistics
// read letter and output letter statistics
int main()
{
    student stud;
    int studCount;

    cout << "Unesite broj studenata: ";
    cin >> studCount;

    results studData(studCount);

    for (int i = 0; i < studCount; i++) {
        cout << "Unesite ime i ocjenu: ";
        cin >> stud.name >> stud.grade;

        studData.add(stud);
    }

    int statOcjena;
    cout << "Unesite ocjenu za pretraziti: ";
    cin >> statOcjena;
    cout << "Broj studenata koji ima trazenu ocjenu " << statOcjena << " iznosi:  " << studData.has_grade(statOcjena) << std::endl;

    char statSlovo;
    cout << "Unesite slovo: ";
    cin >> statSlovo;
    cout << "Broj studenata koji pocinju sa slovom: " << statSlovo << " ima: " << studData.starts_with_letter(statSlovo) << std::endl;
}

