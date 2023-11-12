#pragma once
#include <string>
#include<string>
#include<iostream>

namespace vsite::oop::v3
{
	struct student {
	public:
		std::string name;
		int grade;

	};
	class results {
		unsigned int len = 0;
		int brojac = 0;
		student* niz = nullptr;

	public:
		results(unsigned int len = 0);
		~results();
		void add(student const& s);
		unsigned int starts_with_letter(char x);
		unsigned int has_grade(unsigned int x);
	};


	class array {

		uint32_t len;
		double* niz = nullptr;

	public:
		array(uint32_t size = 0, double value = 0);
		array(const array& other);
		array(array&& other);
		~array();
		uint32_t size();
		double at(uint32_t x);
		void push_back(double x);
	};
}