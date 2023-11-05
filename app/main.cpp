#include "app.h"
#include <string>
#include <iostream>

//read number of results
//read all student data
//read grade and output grade statistics
//read letter and output letter statistics
using namespace vsite::oop::v3;

	int main()
	{
		std::string name;
		int grade;
		int num_of_students;
		std::cout << "Unesite broj studenata: ";
		std::cin >> num_of_students;
		results r(num_of_students);

		for (int i = 0; i < num_of_students; i++) {
			std::cout << "Ime " << i + 1 << ". studenta: ";
			std::cin >> name;
			std::cout << "Ocjena: ";
			std::cin >> grade;
			r.add({ name, grade });
		}

		int specific_grade;
		std::cout << "\nUnesite ocjenu koju trazite: ";
		std::cin >> specific_grade;
		std::cout << "Postoji " << r.has_grade(specific_grade) << " studenata s ocjenom " << specific_grade << std::endl;

		char specific_letter;
		std::cout << "\nUnesite prvo slovo trazenog imena: ";
		std::cin >> specific_letter;
		std::cout << "Na slovo " << (char)toupper(specific_letter) << " pocinje " << r.starts_with_letter(specific_letter) << " studenata.";

	}
