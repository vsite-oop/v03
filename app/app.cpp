#include "app.h"
#include <algorithm>

namespace vsite::oop::v3
{
	/*====/Class student/====*/
	student::student(std::string student_name, int student_grade)  // P3 - one of four different implementation methods
		: student_name(student_name), student_grade(student_grade) {}

	std::string student::name() const {
		return student_name;
	}

	int student::grade() const {
		return student_grade;
	}

	/*=====/Class Results/=====*/
	results::results(unsigned arr_size) : arr_size(arr_size), index(0) {
		array = new student[arr_size];  // Can't make student array without default constructor!
	}

	results::~results() {
		delete[] array; array = 0;
	}

	void results::add(student s) {
		array[index] = s;
		index++;
	}

	unsigned results::has_grade(unsigned g) const {
		unsigned count = 0;
		
		for (int i = 0; i < arr_size; i++) {
			if (array[i].grade() == g) {
				count++;
			}
		}
		return count;
	}

	unsigned results::starts_with_letter(char c) const {
		unsigned count = 0;

		for (int i = 0; i < arr_size; i++) {
			if (tolower(array[i].name()[0]) == c || toupper(array[i].name()[0]) == c) {
				count++;
			}
		}
		return count;
	}
}