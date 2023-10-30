#include "app.h"

// read number of results
// read all student data
// read grade and output grade statistics
// read letter and output letter statistics
int main()
{
	vsite::oop::v3::results r(3);
	r.add({ "ver", 1 });
	r.add({ "per", 2 });
	r.add({ "ham",3 });
	std::cout<<r.has_grade(1)<<"\n";
	std::cout << r.starts_with_letter('p')<<"\n";

	vsite::oop::v3::array a(5, 1.5);
	for (int i = 0; i < a.size(); ++i) {
		std::cout << a.at(i) << "\n";
	}
	a.push_back(4.5);
	std::cout << a.at(a.size()-1) << "\n";

}
