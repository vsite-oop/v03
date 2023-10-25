#include "app.h"
#include <iostream>
#include <string>
// read number of results
// read all student data
// read grade and output grade statistics
// read letter and output letter statistics
int main()
{
	std::string ime;
	int ocjena;
	int broj_studenata;
	std::cout <<"Unesite broj studenata: ";
	std::cin >> broj_studenata;
	vsite::oop::v3::results r(broj_studenata);
	for (int i = 0; i < broj_studenata; ++i)
	{
		std::cout <<"Unesite ime studenta: ";
		std::cin >> ime;
		std::cout <<"Unesite ocjenu studenta: ";
		std::cin >> ocjena;
		r.add({ ime,ocjena });
	}
	int ocjena2;
	std::cout <<"Unesite ocjenu za koju zelite statistiku: ";
	std::cin >> ocjena2;
	std::cout << r.has_grade(ocjena2) << std::endl;
	char slovo;
	std::cout <<"Unesite slovo studenta: ";
	std::cin >> slovo;
	std::cout << r.starts_with_letter(slovo);
}
