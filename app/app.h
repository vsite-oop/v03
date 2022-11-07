#pragma once
#include <string>

namespace vsite::oop::v3
{
	class student {
		std::string student_name;
		int student_grade;

	public:
		student(std::string student_name = "ime", int student_grade = 0);  // Default values must be here!

		std::string name() const;
		int grade() const;
	};


	class results {
		unsigned arr_size;
		student* array;
		unsigned index;
	
	public:
		results(unsigned arr_size);
		~results();

		void add(student s);
		unsigned has_grade(unsigned g) const;
		unsigned starts_with_letter(char c) const;
	};
}
