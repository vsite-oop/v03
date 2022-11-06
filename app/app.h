#pragma once
#include <string>

namespace vsite::oop::v3
{
	struct student {
		std::string name;
		int grade;
	};

	class results {
		uint32_t n;
		student* arr;
		int spot;

	public:
		results(uint32_t n);
		~results();

		void add(student s);
		uint32_t has_grade(int a) const;
		uint32_t starts_with_letter(char a) const;
	};


	class array {
		double* arr;
		double value;
		uint32_t arrsize;
		void grow();
		
	public:
		array(const uint32_t arrsize = 0, const double value = 0);
		array(const array& other);
		array(array&& other);
		~array();
		double at(int a) const;
		uint32_t size() const;
		void push_back(double a);
	};
}