#include "app.h"

namespace vsite::oop::v3
{
	results::results(int length) : mLength(length)
	{
		studentArr = new student[mLength];
	}
	void results::add(student myStudent)
	{
		studentArr[i] = myStudent;
		i++;
	}
	unsigned int results::has_grade(int n)
	{
		unsigned int sum = 0;
		for (int i = 0; i < mLength; i++) {
			if (studentArr[i].grade == n) {
				sum++;
			}
		}
		return sum;
	}
	unsigned int results::starts_with_letter(char l)
	{
		unsigned int sum = 0;
		for (int i = 0; i < mLength; i++) {
			if (studentArr[i].name[0] == l) {
				sum++;
			}
		}
		return sum;
	}
}