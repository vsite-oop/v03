#include "app.h"
#include "iostream"

// read number of results
// read all student data
// read grade and output grade statistics
// read letter and output letter statistics
int main()
{
	int n; std::cin >> n;
	vsite::oop::v3::results r(n);
	for (int i = 0; i < n; ++i) {
		vsite::oop::v3::student s;
		std::cin >> s.name >> s.grade;
		r.add(s);
	}
}
