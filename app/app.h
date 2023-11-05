#pragma once
#include <string>

namespace vsite::oop::v3 
{
	class student {
	public:
		std::string name;
		int grade;
	};

	class results{
	private:
		int cntr = 0;
		int size = 0;
		student* array = nullptr;
	public:
		results(int size = 0);
		void add(student const& s);
		uint32_t has_grade(int num);
		uint32_t starts_with_letter(char lett);
		~results();
	};

	class array {
	private:
		uint32_t len;
		double value;
		double* array2 = nullptr;
		
	public:
		array(uint32_t l = 0, double v = 0.0);
		~array();
		double at(int i = 0);
		uint32_t size();
		void push_back(double i);
		array(array&& other);
		array(const array& other);
		
	};




}