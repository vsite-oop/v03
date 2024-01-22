#include "app.h"
#include <algorithm>

namespace vsite::oop::v3
{
	results::results(int len) {
		size = len;
		array = new student[size];
	}

	void results::add(student const& s) {
		array[counter] = s;
		++counter;
	}

	uint32_t results::has_grade(int numero) {
		int numero_grade = 0;
		for (int i = 0; i < size; i++) {
			if (array[i].grade == numero) {
				numero_grade++;
			}
		}
		return numero_grade;
	}

	uint32_t results::starts_with_letter(char character) {
		int num_letter = 0;
		for (int i = 0; i < size; i++) {
			if (tolower(array[i].name[0]) == tolower(character)) {
				num_letter++;
			}
		}
		return num_letter;
	}

	results::~results() {
		delete[] array;
	}

	array::array(uint32_t l, double v) {
		arr2 = new double[l];
		len = l;
		for (uint32_t i = 0; i < l; ++i) {
			arr2[i] = v;
		}
	}

	uint32_t array::size() {
		return len;
	}

	double array::at(int i) {
		if (i < len && i >= 0) {
			return arr2[i];
		}
		return 0;
	}

	void array::push_back(double num) {
		int len2 = len + 1;
		double* new_arr = new double[len2];
		for (int i = 0; i < len; ++i) {
			new_arr[i] = arr2[i];
		}
		delete[] arr2;
		arr2 = new_arr;
		new_arr[len2 - 1] = num;
		len = len2;
	}

	array::array(array&& other) : len(other.len), arr2(other.arr2) {
		other.len = 0;
		other.arr2 = nullptr;
	}

	array::array(const array& other) : len(other.len) {
		arr2 = new double[len];
		for (uint32_t i = 0; i < len; i++) {
			arr2[i] = other.arr2[i];
		}
	}

	array::~array() {
		delete[] arr2;
	}
}