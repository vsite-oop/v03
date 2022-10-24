#include "app.h"
#include <string>
#include <iostream>


// read number of results
// read all student data
// read grade and output grade statistics
// read letter and output letter statistics
int main()
{
	unsigned n;

	std::cout << "Unesi broj studenata: ";
	std::cin >> n;
	vsite::oop::v3::results r(n);

	for (int i = 0; i < n; ++i) {
		vsite::oop::v3::student s;
		std::cout << "Unesi ime i ocjenu " << i+1 <<". studenta: ";
		std::cin >> s.name >> s.grade;
		r.add(s);
	}
	unsigned ocjena;
	std::cout << "Za koju ocjenu zelis statistiku: ";
	std::cin >> ocjena;
	std::cout << "Ima " << r.has_grade(ocjena) << " studenata sa ocjenom " << ocjena;
	
	char slovo;
	std::cout << "\nUnesi prvo slovo imena: ";
	std::cin >> slovo;
	std::cout << "Ima " << r.starts_with_letter(slovo) << " studenata s prvim slovom " << slovo;
}
