#include "app.h"
#include <algorithm>

namespace vsite::oop::v3
{
	results::results(uint32_t n) : n(n), spot(0) {
		arr = new student[n];
	}

	results::~results() {
		delete[] arr;
		arr = nullptr;
	}

	void results::add(student s) {
		arr[spot] = s;
		spot++;
	}

	uint32_t results::has_grade(int a) const {
		uint32_t x = 0;
		for (int i = 0; i < n; ++i) {
			if (arr[i].grade == a) {
				x++;
			}
		}
		return x;
	}

	uint32_t results::starts_with_letter(char a) const {
		uint32_t x = 0;
		for (int i = 0; i < n; ++i) {
			if (tolower(arr[i].name[0]) == tolower(a)) {
				x++;
			}
		}
		return x;
	}


	array::array(const uint32_t x, const double y) : arrsize(x), value(y) {
		arr = new double[arrsize];
		for (uint32_t i = 0; i < arrsize; ++i) {
			arr[i] = value;
		}
	}

	array::array(const array& other) : arr(new double[other.arrsize]), arrsize(other.arrsize) {
		std::copy(other.arr, other.arr + arrsize, arr);
	}

	array::array(array&& other) : arr(other.arr), arrsize(other.arrsize) {
		other.arrsize = NULL;
		other.arr = nullptr;
	}
		
	array::~array() {
		delete[] arr;
		arr = nullptr;
	}
	
	double array::at(int a) const {
		if (a < 0 || a > arrsize) return 0.;
		return arr[a];
	}

	uint32_t array::size() const {
		return arrsize;
	}

	void array::grow() {
		double* temp = new double[arrsize+1];
		std::copy(arr, arr + arrsize, temp);
		delete[] arr;
		arr = temp;
		temp = nullptr;
	}

	void array::push_back(double a) {
		grow();
		arr[arrsize] = a;
		arrsize++;
	}
}