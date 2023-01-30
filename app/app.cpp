#include "app.h"
#include <algorithm>

namespace vsite::oop::v3
{
	void results::add(const student& stud) {
		student_array[count] = stud;
		count++;
	};

	unsigned int results::has_grade(unsigned int grade) const {
		unsigned int grade_count = 0;
		for (unsigned int i = 0; i < count; ++i) {
			if (student_array[i].grade == grade) {
				grade_count++;
			}
		}
		return grade_count;
	};

	unsigned int results::starts_with_letter(char letter) const {
		
		unsigned int letter_count = 0;
		for ( unsigned int i = 0; i < count; ++i) {
			
			if (tolower(student_array[i].name[0]) == tolower(letter)) {
				letter_count++;
			};
			
		} 
		return letter_count;
	};
}