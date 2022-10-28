#pragma once
#include <string>

namespace vsite::oop::v3 
{
	struct student {
		std::string name;
		int grade;
	public:
		//student();
		//student(std::string s, int g);
	};

	class results {
		unsigned int id;
		student* students;
	public:
		results(const int id);

		void add(student);
		unsigned int has_grade(int) const;
		unsigned int starts_with_letter(char) const;

		~results() { delete[] students; };
	};
}