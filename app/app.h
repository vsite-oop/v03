#pragma once
#include <string>

namespace vsite::oop::v3 
{
	struct student {
		std::string name;
		int grade = 0;
	};

	class results {
		int num_of_el = 0;
		student* stud = nullptr;
		int counter = 0;

	public:
		results(int noe = 0);
		~results();

		void add(const student& s);
		unsigned has_grade(unsigned grade);
		unsigned starts_with_letter(char letter);

	};

	class array {
		int sizeArr;
		double* arr;

	public:
		array(unsigned siz = 0, double val = 0.0);
		array(const array& ref);
		array(array&& ref);
		~array();

		unsigned size();
		double at(int pointer);
		void push_back(double value);
	};
}