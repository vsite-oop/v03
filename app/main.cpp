#include "app.h"
#include <stdio.h>
#include<iostream>




using namespace::vsite::oop::v3;
using namespace::std;
	int main(){
		
		// read number of results
		cout << "Unesite broj za koliko studenata zelite napraviri ucitavanje: ";
		unsigned int input = 0;
		cin >> input;

		results r(input);
		// read all student data
		for (auto i = 0; i < input; ++i) {
			vsite::oop::v3::student student;

			cout << "Ime i ocjena: ";
			cin >> student.name >> student.grade;
			r.add(student);
		}

		// read grade and output grade statistics
		cout << "Ocjena za koju zelite statistiku: ";
		unsigned int grade = 0;
		cin >> grade;
		cout << r.has_grade(grade) << endl;
		
		// read letter and output letter statistics
		cout << "Unesite prvo slovo studenta: ";
		char chr = NULL;
		cin >> chr;
		cout << r.starts_with_letter(chr) << endl;

	}