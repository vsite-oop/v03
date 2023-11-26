#include "app.h"
#include <iostream>

using namespace vsite::oop::v3;

int main()
{
	std::string ime;
	int n, ocjena;

	std::cout << "Koliko studenta cete unijeti: ";
	std::cin >> n;
	vsite::oop::v3::results s(n);

	
	for (int i = 0; i < n; i++) {
		std::cout << "Unesi ime " <<i+1 <<". studenta: ";
		std::cin >> ime;
		std::cout << "Unesi njegovu ocjenu: ";
		std::cin >> ocjena;
		s.add({ ime,ocjena });
	}
	int nadjiOcjenu;
	std::cout << "\nUnesi ocjenu za koju zelis statistiku: ";
	std::cin >> nadjiOcjenu;
	std::cout << "Broj studenata sa ocjenom " << nadjiOcjenu<< " je: " << s.has_grade(nadjiOcjenu) << "\n";


	char prvoSlovo;
	std::cout << "Unesi slovo za koje zelis statistiku: ";
	std::cin >> prvoSlovo;
	std::cout << "Broj studenata sa prvim slovom "<< prvoSlovo << " je: " << s.starts_with_letter(prvoSlovo) << "\n";
}