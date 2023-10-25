#include "app.h"
#include <algorithm>

namespace vsite::oop::v3
{
	results::results(int c) {
		count = c;
		studNiz = new student[count];
	}

	void results::add(student s) {
		studNiz[pos] = s;
		pos++;
	}

	unsigned results::has_grade(int g) {
		int studCount = 0;

		for (int i = 0; i < count; i++) {
			if (studNiz[i].grade == g) {
				studCount++;
			}
		}
		return studCount;
	}

	unsigned results::starts_with_letter(char c) {

		int studCount = 0;

		for (int i = 0; i < count; i++) {
			if (tolower(studNiz[i].name[0]) == tolower(c)) {
				studCount++;
			}
		}
		return studCount;
	}
	results::~results()
	{
		delete[] studNiz;
	}
	
	array::array(unsigned s, double value) {

		_size = s;
		nizArr = new double[s];

		for (int i = 0; i < s; i++) {
			nizArr[i] = value;
		}
	}

	array::array(const array& s)
	{
		_size = s._size;
		nizArr = new double[_size];

		for (int i = 0; i < _size; i++) {
			nizArr[i] = s.nizArr[i];
		}
	}

	array::array(array&& s) noexcept {
		_size = s._size;
		nizArr = s.nizArr;
		s._size = 0;
		s.nizArr = nullptr;
	}
	
	double array::at(int i) {
		if (i < 0 || i > _size) {
			return 0.;
		}

		return nizArr[i];
	}

	void array::push_back(double val) {
		int tempSize = _size + 1;
		double* tempNiz = new double[tempSize];

		for (int i = 0; i < tempSize - 1; i++) {
			tempNiz[i] = nizArr[i];
		}
		tempNiz[tempSize-1] = val;

		delete[] nizArr;
		nizArr = tempNiz;
		_size = tempSize;		
	}
}