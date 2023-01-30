#pragma once
#include <string>

namespace vsite::oop::v3

{
	

	struct student {
		std::string name;
		int grade = 0;
	};

	class results {
		student* student_array = nullptr;
		unsigned int count = 0;

	public:
		results(int n) {
			student_array = new student[n];
		};

		~results() {
			delete[] student_array; student_array = nullptr;
		};
		void add(const student& stud);
		unsigned int has_grade(unsigned int grade) const;
		unsigned int starts_with_letter(char letter) const;
	};
}