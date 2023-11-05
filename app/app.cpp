#include "app.h"
#include <algorithm>
#include <string>
#include <list>
#include <iostream>

namespace vsite::oop::v3
{
	results::results(int len) {
		size = len;
		array = new student[size];

	}

	void results::add(student const& s) {
		array[cntr] = s;
		++cntr;
	}

	uint32_t results::has_grade(int num) {
		int num_grade = 0;
		for (int i = 0; i < size; i++) {
			if (array[i].grade == num) num_grade++;
		}
		return num_grade;
	}

	uint32_t results::starts_with_letter(char letter) {
		int num_letter = 0;
		for (int i = 0; i < size; i++) {
			if (tolower(array[i].name[0]) == tolower(letter)) num_letter++;
		}
		return num_letter;
	}

	results::~results() {
		delete[] array;
	}

	array::array(uint32_t l, double v) {
		array2 = new double[l];
		len = l;
		for (uint32_t i = 0; i < l; i++) {
			array2[i] = v;
		}
	}

	uint32_t array::size() {
		return len;
	}

	double array::at(int i) {
		if (i >= 0 && i < len) return array2[i];
		return 0;
	}

	void array::push_back(double i) {
		int new_len = len + 1;
		double* new_array = new double[new_len];
		for (int j = 0; j < len; j++) new_array[j] = array2[j];
		delete[] array2;
		array2 = new_array;
		new_array[new_len - 1] = i;
		len = new_len;
	}

	array::array(array&& other) : len(other.len), array2(other.array2) {
		other.len = 0;
		other.array2 = nullptr;
	}

	array::array(const array& other) : len(other.len) {
		array2 = new double[len];
		for (uint32_t i = 0; i < len; i++) array2[i] = other.array2[i];
	}

	array::~array() {
		delete[] array2;
	}
}