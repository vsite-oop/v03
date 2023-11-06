#include "app.h"
#include <algorithm>
#include <cctype>

namespace vsite::oop::v3
{
	results::results(size_t capacity) : capacity(capacity), size(0) {
		student_data = new student[capacity];
	}

	results::~results() {
		delete[] student_data;
	}

	void results::add(const student& s) {
		if (size < capacity) {
			student_data[size] = s;
			size++;
		}
	}

	uint32_t results::has_grade(int grade) const {
		size_t count = 0;
		for (size_t i = 0;i < size;i++) {
			if (student_data[i].grade == grade) {
				count++;
			}
		}
		return count;
	}

	uint32_t results::starts_with_letter(char letter) const {
		size_t count = 0;
		char SmallLetter = std::tolower(letter);
		for (size_t i = 0;i < size;i++) {
			if (!student_data[i].name.empty() && std::tolower(student_data[i].name[0]) == SmallLetter) {
				count++;
			}
		}
		return count;
	}

	array::array():data(nullptr), capacity(0), currentSize(0){}

	array::array(uint32_t size, double value) : capacity(size), currentSize(size) {
		data = new double[size];
		for (uint32_t i = 0;i < size;i++) {
			data[i] = value;
		}
	}
	array::array(const array& other) : capacity(other.capacity), currentSize(other.currentSize) {
		data = new double[capacity];
		for (uint32_t i = 0;i < currentSize;i++) {
			data[i] = other.data[i];
		}
	}
	array::array(array&& other) : data(other.data), capacity(other.capacity), currentSize(other.currentSize) {
		other.data = nullptr;
		other.capacity = 0;
		other.currentSize = 0;
	}
	array::~array() {
		delete[] data;
	}

	double array::at(uint32_t index) const {
		if (index >=0 && index < currentSize) {
			return data[index];
		}
		return 0;
	}

	uint32_t array::size() const {
		return currentSize;
	}

	void array::push_back(double value) {
		if (currentSize >= capacity) {
			capacity = (capacity == 0) ? 1 : capacity * 2;
			double* newData = new double[capacity];
			for (uint32_t i = 0;i < currentSize;i++) {
				newData[i] = data[i];
			}
			delete[] data;
			data = newData;
		}
		data[currentSize] = value;
		currentSize++;
	}
}