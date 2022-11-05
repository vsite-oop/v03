#include "app.h"
#include <algorithm>

namespace vsite::oop::v3
{
	results::results(int size) :
		size(size)
	{
		students = new student[size];
	}

	void results::add(student new_student)
	{
		students[current_student] = new_student;
		current_student++;
	}

	unsigned int results::has_grade(int wanted_grade) const
	{
		unsigned int wanted_grade_count = 0;

		for (int i = 0; i < size; i++)
		{
			if (students[i].grade == wanted_grade)
				wanted_grade_count++;
		}

		return wanted_grade_count;
	}

	unsigned int results::starts_with_letter(char wanted_letter) const
	{
		unsigned int wanted_letter_count = 0;

		for (int i = 0; i < size; i++)
		{
			if (tolower(students[i].name[0]) == tolower(wanted_letter))
				wanted_letter_count++;
		}

		return wanted_letter_count;
	}


	array::array()
	{
		arr = new double[max_length];
	}

	array::array(uint32_t number_of_elements, double value) :
		number_of_elements(number_of_elements)
	{
		memory_size_adjustment();

		arr = new double[max_length];

		for (int i = 0; i < number_of_elements; i++)
		{
			arr[i] = value;
		}
	}

	array::array(const array& other):
		max_length(other.max_length), number_of_elements(other.number_of_elements)
	{
		arr = new double[max_length];

		for (uint32_t i = 0; i < other.number_of_elements; i++)
		{
			arr[i] = other.arr[i];
		}
	}

	array::array(array&& other) noexcept:
		max_length(other.max_length), number_of_elements(other.number_of_elements), arr(other.arr)
	{
		other.max_length = NULL;
		other.number_of_elements = NULL;
		other.arr = nullptr;
	}

	array::~array()
	{
		delete[] arr; arr = nullptr;
	}

	double array::at(uint32_t idx) const
	{ 
		return (idx >= 0 && idx < number_of_elements)? arr[idx] : 0;
	}

	void array::push_back(double number)
	{
		number_of_elements++;
		memory_realocation();

		arr[number_of_elements - 1] = number;
		
	}

	void array::memory_realocation()
	{
		if (number_of_elements <= max_length)
			return;
		
		unsigned int new_max_length = max_length * 2;
		double* new_arr = new double[new_max_length];

		for (uint32_t i = 0; i < max_length; i++)
		{
			new_arr[i] = arr[i];
		}

		delete[] arr;
		arr = new_arr; new_arr = nullptr;
	}


	void array::memory_size_adjustment()
	{
		while (number_of_elements > max_length)
			max_length *= 2;
	}
}