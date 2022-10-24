#pragma once
#include <string>

namespace vsite::oop::v3 
{

	struct student {
		std::string name = "";
		int grade = 0;
	};

	class results {
	private:
		student* point = nullptr;
		int index = 0;

	public:
		results(unsigned num);
		~results();

		void add(student s);
		unsigned has_grade(int grade);
		unsigned starts_with_letter(char letter);

	};
}