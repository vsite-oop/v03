#include "app.h"
#include <algorithm>

namespace vsite::oop::v3
{
	results::results(int noe) {
		num_of_el = noe;
		stud = new student[num_of_el];
	}
	results::~results() {
		delete[] stud;
		stud = nullptr;
	}
	void results::add(const student& s) {
		stud[counter] = s;
		counter++;
	}
	unsigned results::has_grade(unsigned grade) {
		unsigned hasGrade = 0;
		for (int i = 0; i < counter; i++) {
			if (stud[i].grade == grade) hasGrade++;
		}
		return hasGrade;
	}
	unsigned results::starts_with_letter(char letter) {
		unsigned hasLetter = 0;
		for (int i = 0; i < counter; i++) {
			if (tolower(stud[i].name[0]) == tolower(letter)) hasLetter++;
		}
		return hasLetter;
	}

	array::array(unsigned siz, double val) {
		sizeArr = siz;
		arr = new double[sizeArr];
		for (int i = 0; i < sizeArr; i++) {
			arr[i] = val;
		}
	}
	array::array(const array& ref) {
		sizeArr = ref.sizeArr;
		arr = new double[sizeArr];
		for (int i = 0; i < sizeArr; i++) {
			arr[i] = ref.arr[i];
		}
	}
	array::array(array&& ref) : sizeArr(ref.sizeArr), arr(ref.arr) {
		ref.sizeArr = 0;
		ref.arr = nullptr;
	}
	array::~array() {
		delete[] arr;
	}

	unsigned array::size() {
		return sizeArr;
	}
	double array::at(int pointer) {
		if (pointer < 0 || pointer >= sizeArr) return 0;
		return arr[pointer];
	}
	void array::push_back(double value) {
		unsigned sizeTemp = sizeArr + 1;
		double* arrTemp = new double[sizeTemp];
		for (int i = 0; i < sizeArr; i++) {
			arrTemp[i] = arr[i];
		}
		arrTemp[sizeTemp - 1] = value;

		delete[] arr;
		arr = arrTemp;
		sizeArr = sizeTemp;
	}
}