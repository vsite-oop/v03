#include "app.h"

// read number of results
// read all student data
// read grade and output grade statistics
// read letter and output letter statistics
int main()
{
	int n;
	std::cout << "unos broja studenta: ";
	std::cin >> n;
	vsite::oop::v3::results list(n);
	
	std::string ime;			
	int ocjena;
	for (int i = 0; i < n; i++) {
		std::cout << "ime: ";			
		std::cin >> ime;
		std::cout << "ocjena: ";
		std::cin >> ocjena;
		list.add({ ime,ocjena });
	}
	int trazenaocjena;
	std::cout << "broji studente s ocjenom: ";
	std::cin >> trazenaocjena;
	std::cout << list.has_grade(trazenaocjena) << "\n";
	char x;
	std::cout << "broji studente sa slovom: ";
	std::cin >> x;
	std::cout << list.starts_with_letter(x) << "\n";

}
