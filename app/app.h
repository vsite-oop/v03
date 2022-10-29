#pragma once
#include <string>

namespace vsite::oop::v3
{
	struct student {
		std::string name;
		int grade;
	};

	class results {
		unsigned n;
		student* arr;
		int spot;

	public:
		results(unsigned n);
		~results();

		void add(student s);
		unsigned has_grade(int a) const;
		unsigned starts_with_letter(char a) const;
	};
}