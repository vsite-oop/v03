#pragma once
#include <string>
#include <cctype>

namespace vsite::oop::v3
{
	class student {

	public:
		student() : grade(0), name("") {};
		student(std::string name, int grade) : grade(grade), name(name) {};
		std::string name;
		int grade;
	};

	class results {
		student* studentArr;
		int mLength = 0;
		int i = 0;

	public:
		results(int length);
		~results() { delete[] studentArr; };

		void add(student myStudent);
		unsigned int has_grade(int n);
		unsigned int starts_with_letter(char l);
	};
}