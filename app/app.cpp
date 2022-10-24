#include "app.h"
#include <algorithm>
#include <string>

namespace vsite::oop::v3
{
	struct student {
		std::string name;
		int grade = 0;
	};

	class results {
		int num, index;
		student* s;
	public:
		results(int n) {
			num = n;
			index = 0;
			s = new student[n];
		}
		void add(const student& a)
		{
			s[index++] = a;
		}
		unsigned int has_grade(int grade) const
		{
			int counter1 = 0;
			for (int b = 0; b < num; b++) {
				if (grade == s[b].grade) counter1++;
			}
			return counter1;
		}
		unsigned int starts_with_letter(char letter) const {
			int counter2 = 0;
			for (int c = 0; c < num; c++) {
				char d = s[c].name[0];
				if (tolower(letter) == tolower(d)) counter2++;
			}
			return counter2;
		}
	};
}