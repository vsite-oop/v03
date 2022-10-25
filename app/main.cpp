#include "app.h"
#include "iostream"

// read number of results
// read all student data
// read grade and output grade statistics
// read letter and output letter statistics
int main()
{
	int n; 
	std::cout << "Input the number of students: ";
	std::cin >> n;
	vsite::oop::v3::results r(n);
	
	for (int i = 0; i < n; ++i) {
		vsite::oop::v3::student s;
		std::cout << "name: ";
		std::cin >> s.name;
		std::cout << "grade: ";
		std::cin >> s.grade;
		std::cout << std::endl;
		r.add(s);
	}

	unsigned grade;
	std::cout << "Grade you want statistics for: ";
	std::cin >> grade;
	std::cout << "Number of students with grade: " << r.has_grade(grade);

	char letter;
	std::cout << "\nStarting letter you want statistics for: ";
	std::cin >> letter;
	std::cout << "Number of students with starting letter " << r.starts_with_letter(letter);
}
