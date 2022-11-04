#include "app.h"
#include <iostream>

using namespace vsite::oop::v3;

// read number of results
// read all student data
// read grade and output grade statistics
// read letter and output letter statistics
int main()
{
	int number_of_students;
	

	cout << "How many students would you like to input?\n";
	cin >> number_of_students;
	results students(number_of_students);
	for (int i = 0; i < number_of_students; ++i) {
		student s;
		cout << "Input name of " << i+1 << ". student:\n";
		cin >> s.name;
		cout << "Input grade of " << i+1 << ". student:\n";
		cin >> s.grade;
		students.add(s);
	}
	int grade;
	cout << "Input grade you would like statistics for:\n";
	cin >> grade;
	cout << "Number of students with that grade is: " << students.has_grade(grade)<< "\n";

	char letter;
	cout << "Input the first letter of the students name:\n";
	cin >> letter;
	cout << "Number of students whose name starts with that letter is: " << students.starts_with_letter(letter) << "\n";


}
