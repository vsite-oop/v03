#include "app.h"
#include <iostream>
#include "app.cpp"
using namespace vsite::oop::v3;

// read number of results
// read all student data
// read grade and output grade statistics
// read letter and output letter statistics
int main() {
	int n; std::cin >> n;
	results r(n);
	while (n--) {
		student s;
		std::cin >> s.name >> s.grade;
		r.add(s);
	}
	int g; std::cin >> g; std::cout << r.has_grade(g) << std::endl;
	char l; std::cin >> l; std::cout << r.starts_with_letter(l);
}
