#include "app.h"
#include <iostream>

// read number of results
// read all student data
// read grade and output grade statistics
// read letter and output letter statistics
int main()
{
    using namespace vsite::oop::v3;
    int n; 
    std::cout<<"Define number of students: ";
    std::cin>>n;
    vsite::oop::v3::results r(n);
    for(int i=0;i<n;++i){
        vsite::oop::v3::student s;
        std::cin>>s.name>>s.grade;
        r.add(s);
    }

    unsigned grade;
	std::cout << "Grade stats: ";
	std::cin >> grade;
	std::cout << "Number of students with grade: " << r.has_grade(grade);

    char c;
	std::cout << "\n"<<"Starting letter stats: ";
	std::cin >> c;
	std::cout << "Number of students with starting letter is " << r.starts_with_letter(c);
}
