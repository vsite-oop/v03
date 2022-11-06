#include "app.h"
#include <algorithm>

namespace vsite::oop::v3
{
	/*student::student(std::string s, int g) {
		name = s;
		grade = g;
	}*/

	results::results(const int id) :id(0) {
		students = new student[id];
	}

	void results::add(const student& s) {
		students[id] = s;
		++id;
	}

	unsigned int results::has_grade(const int grade) const {
		unsigned int count = 0;

		for (auto i = 0; i < id; ++i) {
			if (students[i].grade == grade)
				++count;
		}
		return count;

	}
	unsigned int results::starts_with_letter(const char chr) const{
		unsigned int coutn = 0;

		for (auto i = 0; i < id; ++i) {
			if (toupper(students[i].name[0]) == toupper(chr))
				++coutn;
		}
		return coutn;
	}
}