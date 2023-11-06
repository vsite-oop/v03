#pragma once
#include <string>

namespace vsite::oop::v3 
{
	struct student {
		std::string name;
		int grade;
	};
	class results	{
		student* student_data;
		size_t capacity;
		size_t size;

	public:
		results(size_t capacity);
		~results();
		void add(const student& s);
		uint32_t has_grade(int grade) const;
		uint32_t starts_with_letter(char letter) const;
	};

	class array {
		double* data;
		uint32_t capacity;
		uint32_t currentSize;

	public:
		array();
		array(uint32_t size, double value);
		array(const array& other);
		array(array&& other);
		~array();

		double at(uint32_t index) const;
		uint32_t size() const;
		void push_back(double value);
	};

}