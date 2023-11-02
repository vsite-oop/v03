#pragma once
#include <string>
#include <vector>

namespace vsite::oop::v3 
{
	struct student {
		std::string name;
		int grade;
	};
	class results	{
		std::vector<student> student_data;
	public:
		results(size_t capacity);
		void add(const student& s);
		uint32_t has_grade(int grade) const;
		uint32_t starts_with_letter(char letter) const;
	};

	class array {
		std::vector<double> data;
	public:
		array();
		array(uint32_t size, double value);
		array(const array& other);
		array(array&& other);

		double at(uint32_t index) const;
		uint32_t size() const;
		void push_back(double value);
	};

}