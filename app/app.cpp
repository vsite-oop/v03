#include "app.h"

namespace vsite::oop::v3
{
	results::results(unsigned int i) {
		len = i;
		arr = new student[len];
	}

	results::~results() {
		delete[] arr;
	}

	void results::add(student const& s) {
		arr[counter] = s;
		counter++;
	}

	unsigned int results::starts_with_letter(char x) {
		unsigned int n = 0;
		for (int i = 0; i < counter;i++) {
			if (std::tolower(arr[i].name[0]) == std::tolower(x)) {
				n++;
			}
		}
		return n;
	}

	unsigned int results::has_grade(unsigned int x) {
		unsigned int n = 0;
		for (int i = 0; i < counter;i++) {
			if (arr[i].grade == x) {
				n++;
			}
		}
		return n;
	}

	array::array(uint32_t size, double value) {
		len = size;
		arr = new double[len];
		for (int i = 0; i < size; ++i) {
			arr[i] = value;
		}
	}

	array::array(const array& other): len(other.len) {
		arr =new double[len];
		for (int i = 0; i < len; i++) {
			arr[i] = other.arr[i];
		}
	}

	array::array(array&& other) {
		len = other.len;
		arr = other.arr;
		other.len = 0;
		other.arr = nullptr;
	}

	array::~array() {
		delete[] arr;
	}

	uint32_t array::size() {
		return len;
	}

	double array::at(uint32_t i){
		if (i < 0 || i >= len) {
			return 0;
		}
		else {
			return arr[i];
		}
	}

	void array::push_back(double x) {
		uint32_t newLen=len+1;
		double* newArr=new double[newLen];
		for (int i = 0; i < len; i++) {
			newArr[i] = arr[i];
		}
		newArr[len] = x;
		len = newLen;
		arr = newArr;
	}
}