#pragma once
#include <string>

namespace vsite::oop::v3
{
	class student {
	public:
		std::string name;
		int grade;

	};

	class results {
	private:
		int counter = 0;
		int size = 0;
		student* array = nullptr;

	public:
		results(int size = 0);
		void add(student const& s);
		uint32_t has_grade(int nomero);
		uint32_t starts_with_letter(char character);
		~results();
	};

	class array {
	private:
		uint32_t len;
		double value;
		double* arr2 = nullptr;

	public:
		array(uint32_t l = 0, double v = 0.0);
		~array();
		double at(int i = 0);
		uint32_t size();
		void push_back(double num);
		array(array&& other);
		array(const array& other);
	};
}