#include <iostream>
#include "app.h"

// read number of results
// read all student data
// read grade and output grade statistics
// read letter and output letter statistics
int main() {
	std::cout << "Unesite broj studenata:";
	int studentnumber;
	std::cin >> studentnumber;

	vsite::oop::v3::results results(studentnumber);

	for (int i = 0;i < studentnumber;i++) {
		std::string name;
		int grade;

		std::cout << "Unesite ime studenta " << i + 1 << ":";
		std::cin >> name;

		std::cout << "Unesite ocjenu studenta " << i + 1 << ":";
		std::cin >> grade;

		results.add({ name,grade });
	}

	int gradestats;
	std::cout << "Unesite broj za koji zelite statistiku: ";
	std::cin >> gradestats;

	size_t gradecount = results.has_grade(gradestats);
	std::cout << "Broj studenata s ocjenom " << gradestats << " je " << gradecount<<std::endl;

	char letterstats;
	std::cout << "Unesite slovo za koje zelite statistiku: ";
	std::cin >> letterstats;

	size_t lettercount = results.starts_with_letter(letterstats);
	std::cout << "Broj studenata s pocetnim slovom " << letterstats << " je " << lettercount<<std::endl;

	return 0;
}
