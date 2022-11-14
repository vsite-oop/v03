#include "app.h"
#include <iostream>
using namespace vsite::oop::v3;

// read number of results
// read all student data
// read grade and output grade statistics
// read letter and output letter statistics

int main()
{
	student s{ "pero", 2 };

	std::cout << s.name.c_str() << std::endl;
	std::cout << s.grade << std::endl;
	std::cout << std::endl;

	results r(8);
	r.add({ "pero", 2 });
	r.add({ "marko", 3 });
	r.add({ "petra", 3 });
	r.add({ "ivo",	1 });
	r.add({ "drazen", 5 });
	r.add({ "paula", 5 });
	r.add({ "patrik", 3 });
	r.add({ "ivana", 2 });

	std::cout << "grades: " << r.has_grade(3) << std::endl;
	std::cout << "names: " << r.starts_with_letter('p') << std::endl;
}

