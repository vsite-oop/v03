#pragma once
#include <string>

namespace vsite::oop::v3 
{
	struct student {
		std::string name;
		int grade = 0;
	};

	class results {
		int count = 0;
		int pos = 0;
		student* studNiz = nullptr;

	public:
		results(int count = 0);
		void add(student s);
		unsigned has_grade(int g);
		unsigned starts_with_letter(char c);
		~results();
	};

	class array {
		unsigned _size;
		double* nizArr;

	public:
		array(unsigned s = 0, double value = 0.0);
		array(const array& source);
		array(array&& source) noexcept;

		unsigned size() {
			return _size;
		}

		double at(int i);

		void push_back(double value);
	};
}   