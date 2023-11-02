#include "app.h"
#include <algorithm>

namespace vsite::oop::v3
{
	results::results(size_t capacity) {
		student_data.reserve(capacity);
	}

	void results::add(const student& s) {
		student_data.push_back(s);
	}

	uint32_t results::has_grade(int grade) const {
		size_t count = 0;
		for (const student& s : student_data) {
			if (s.grade == grade) {
				count++;
			}
		}
		return count;
	}

	uint32_t results::starts_with_letter(char letter) const {
		size_t count = 0;
		char SmallLetter = std::tolower(letter);
		for (const student& s : student_data) {
			char FirstLetter = std::tolower(s.name[0]);
			if (!s.name.empty() && FirstLetter == SmallLetter) {
				count++;
			}
		}
		return count;
	}

	array::array() : data(0, 1.5) {}
	array::array(uint32_t size, double value) : data(size, value){}
	array::array(const array& other) :data(other.data){}
	array::array(array&& other) :data(std::move(other.data)){}

	double array::at(uint32_t index) const {
		if ((index >= 0 || index < 40) && index < data.size()) {
			return data[index];
		}
		return 0;
	}

	uint32_t array::size() const {
		return data.size();
	}

	void array::push_back(double value) {
		data.push_back(value);
	}
}