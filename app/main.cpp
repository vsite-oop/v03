#include "app.h"
#include <string>
#include <iostream>

using namespace vsite::oop::v3;

// TODO:01 read number of results
// TODO:02 read all student data
// TODO:03 read grade and output grade statistics
// TODO:04 read letter and output letter statistics
int main() {
	std::string ime;
	int ocjena;
	int n_studenata;

	std::cout << "Unesite broj unosa: ";
	std::cin >> n_studenata;
	results r(n_studenata);

	for (int i = 0; i < n_studenata; i++) {
		std::cout << i + 1 << ". student, ocjena ";
		std::cin >> ime >> ocjena;
		r.add({ ime, ocjena });
	}

	// DID TODO 03
	int trazena_ocjena;
	std::cout << "\nOcjena koju trazite: ";
	std::cin >> trazena_ocjena;
	std::cout << "\nIma " << r.has_grade(trazena_ocjena) << " student s ocjenom " << trazena_ocjena << std::endl;

	// DID TODO 04
	char trazeno_slovo;
	std::cout << "\nPrvo slovo imena koje trazite: ";
	std::cin >> trazeno_slovo;
	std::cout << "\nIma " << r.starts_with_letter(trazeno_slovo) << " student s prvim slovom imena " << (char)toupper(trazeno_slovo) << std::endl;
}
