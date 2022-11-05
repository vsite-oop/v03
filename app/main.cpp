#include<iostream>

#include "app.h"

// read number of results
// read all student data
// read grade and output grade statistics
// read letter and output letter statistics
int main()
{
	int student_count;

	std::cout << "Input number of students: ";
	std::cin >> student_count;
	auto results = vsite::oop::v3::results(student_count);

	for (int i = 0; i < student_count; i++)
	{
		std::string temp_name;
		int temp_grade;

		std::cout << "\n" << i + 1 << ". Students name: ";
		std::cin >> temp_name;

		std::cout << i + 1 << ". Students grade: ";
		std::cin >> temp_grade;

		results.add({ temp_name, temp_grade });
	}

	int grade_filter;
	char start_letter_filter;

	std::cout << "\nStudent count with grade: ";
	std::cin >> grade_filter;
	std::cout << results.has_grade(grade_filter) << " students have grade " << grade_filter << "\n";

	std::cout << "\nStudent count with name starting with letter: ";
	std::cin >> start_letter_filter;
	std::cout << results.starts_with_letter(start_letter_filter) << " students name starts with letter " << start_letter_filter;
}
