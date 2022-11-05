#pragma once
#include <string>

namespace vsite::oop::v3 
{
	struct student
	{
	public:
		std::string name = "";
		int grade = 0;
	};

	struct results
	{
	public:
		results(int size);

		void add(student new_student);
		unsigned int has_grade(int wanted_grade) const;
		unsigned int starts_with_letter(char wanted_letter) const;

	private:
		int size;
		int current_student = 0;
		student* students;
	};


	struct array
	{
	public:
		array();
		array(uint32_t number_of_elements, double value);

		array(const array& other);
		array(array&& other) noexcept;

		~array();

		unsigned int size() const { return number_of_elements;  }
		double at(uint32_t idx) const;
		void push_back(double number);

	private:
		uint32_t max_length = 2;
		uint32_t number_of_elements = 0;
		double* arr = nullptr;

		void memory_size_adjustment();
		void memory_realocation();
	};
}