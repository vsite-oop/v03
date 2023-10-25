#include "app.h"
#include <iostream>

using vsite::oop::v3::student;
using vsite::oop::v3::array;
using vsite::oop::v3::results;

void GenerateDemoData(results& sd) {
    sd.add({"Alice", 3});
    sd.add({ "Bob", 4 });
    sd.add({ "Charlie", 2 });
    sd.add({ "David", 5 });
    sd.add({ "Ella", 3 });
    sd.add({ "Frank", 4 });
    sd.add({ "Grace", 1 });
    sd.add({ "Henry", 5 });
    sd.add({ "Isabella", 2 });
    sd.add({ "Jack", 3 });
    sd.add({ "Katherine", 4 });
    sd.add({ "Liam", 5 });
    sd.add({ "Mia", 2 });
    sd.add({ "Noah", 3 });
    sd.add({ "Olivia", 4 });
    sd.add({ "Peter", 1 });
    sd.add({ "Quinn", 2 });
    sd.add({ "Rachel", 5 });
    sd.add({ "Samuel", 4 });
    sd.add({ "Taylor", 3 });
    sd.add({ "Uma", 2 });
    sd.add({ "Victor", 1 });
    sd.add({ "Willow", 3 });
    sd.add({ "Xavier", 4 });
    sd.add({ "Yara", 5 });
    sd.add({ "Zachary", 2 });
    sd.add({ "Abigail", 4 });
    sd.add({ "Benjamin", 3 });
    sd.add({ "Charlotte", 5 });
    sd.add({ "Daniel", 1 });
    sd.add({ "Eleanor", 2 });
    sd.add({ "Finn", 4 });
    sd.add({ "Gabriella", 3 });
    sd.add({ "Harrison", 1 });
    sd.add({ "Isabelle", 5 });
    sd.add({ "Jackson", 4 });
    sd.add({ "Kylie", 2 });
    sd.add({ "Lucas", 3 });
    sd.add({ "Mackenzie", 4 });
    sd.add({ "Nathan", 5 });
    sd.add({ "Oliver", 2 });
    sd.add({ "Penelope", 3 });
    sd.add({ "Quincy", 1 });
    sd.add({ "Rebecca", 4 });
    sd.add({ "Samantha", 2 });
    sd.add({ "Theodore", 5 });
    sd.add({ "Ulysses", 1 });
    sd.add({ "Valentina", 3 });
    sd.add({ "William", 4 });
    sd.add({ "Xander", 2 });
    sd.add({ "Yasmine", 5 });
    sd.add({ "Zane", 1 });
    sd.add({ "Alexa", 3 });
    sd.add({ "Bryce", 4 });
    sd.add({ "Cora", 2 });
    sd.add({ "Dexter", 5 });
    sd.add({ "Eva", 3 });
    sd.add({ "Felix", 4 });
    sd.add({ "Georgia", 1 });
    sd.add({ "Hugo", 5 });
    sd.add({ "Isadora", 2 });
    sd.add({ "Jacob", 3 });
    sd.add({ "Keira", 4 });
    sd.add({ "Landon", 5 });
    sd.add({ "Mila", 2 });
    sd.add({ "Nolan", 3 });
    sd.add({ "Ophelia", 4 });
    sd.add({ "Preston", 1 });
    sd.add({ "Quinn", 2 });
    sd.add({ "Rose", 5 });
    sd.add({ "Sebastian", 4 });
    sd.add({ "Tessa", 3 });
    sd.add({ "Ulysses", 1 });
    sd.add({ "Violet", 3 });
    sd.add({ "Wyatt", 4 });
    sd.add({ "Ximena", 2 });
    sd.add({ "Yannick", 5 });
    sd.add({ "Zara", 1 });
    sd.add({ "Aiden", 3 });
    sd.add({ "Bella", 4 });
    sd.add({ "Caleb", 2 });
    sd.add({ "Daisy", 5 });
    sd.add({ "Eli", 3 });
    sd.add({ "Fiona", 4 });
    sd.add({ "Gavin", 1 });
    sd.add({ "Hannah", 5 });
    sd.add({ "Ivy", 2 });
    sd.add({ "James", 3 });
    sd.add({ "Kira", 4 });
    sd.add({ "Liam", 5 });
    sd.add({ "Mia", 2 });
    sd.add({ "Nora", 3 });
    sd.add({ "Oscar", 4 });
    sd.add({ "Piper", 1 });
    sd.add({ "Quincy", 2 });
    sd.add({ "Riley", 5 });
    sd.add({ "Sofia", 4 });
    sd.add({ "Theo", 3 });
    sd.add({ "Uma", 1 });
    sd.add({ "Violet", 2 });
}

// read number of results
// read all student data
// read grade and output grade statistics
// read letter and output letter statistics
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

    //results studData(100);
    //GenerateDemoData(studData);

    int statOcjena;
    std::cout << "Unesite ocjenu za koju zelite statistiku: ";
    std::cin >> statOcjena;
    std::cout << "Broj studenata sa ocjenom '" << statOcjena << "' : " << studData.has_grade(statOcjena) << std::endl;

    char statSlovo;
    std::cout << "Unesite slovo za koje zelite statistiku: ";
    std::cin >> statSlovo;
    std::cout << "Broj studenata sa pocetnim slovom '" << statSlovo << "' : " << studData.starts_with_letter(statSlovo) << std::endl;
}

