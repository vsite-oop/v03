#pragma once
#include <string>

namespace vsite::oop::v3 
{

	struct student {
		std::string name;
		int grade;
	};

	class results {
	private:
		student* point;
		int index;
		unsigned places_taken;
	public:
		results(unsigned num);
		~results();

		void add(student s);
		unsigned has_grade(int grade) const;
		unsigned starts_with_letter(char letter) const;

	};
}