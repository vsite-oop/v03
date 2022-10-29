#include "app.h"
#include <algorithm>

namespace vsite::oop::v3
{
	results::results(unsigned n) : n(n), spot(0) {
		arr = new student[n];
	}

	results::~results() {
		delete[] arr;
		arr = nullptr;
	}

	void results::add(student s) {
		arr[spot] = s;
		spot++;
	}
	unsigned results::has_grade(int a) const {
		unsigned x = 0;
		for (int i = 0; i < n; ++i) {
			if (arr[i].grade == a) {
				x++;
			}
		}
		return x;
	}
	unsigned results::starts_with_letter(char a) const {
		unsigned x = 0;
		for (int i = 0; i < n; ++i) {
			if (tolower(arr[i].name[0]) == tolower(a)) {
				x++;
			}
		}
		return x;
	}
}