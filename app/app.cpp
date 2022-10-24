#include "app.h"
#include <algorithm>

namespace vsite::oop::v3
{
	results::results(unsigned num){
		point = new student[num];
	}

	results::~results() {
		delete[] point;
		point = nullptr;
	}

	void results::add(student s) {
		point[index++] = s;
	}

	unsigned results::has_grade(int grade) {
		unsigned grades_found=0;
		for (int i = 0; i < sizeof(point); ++i) {
			if (point[i].grade == grade) {
				grades_found++;
			}
		}
		return grades_found;
	}

	unsigned results::starts_with_letter(char letter) {
		unsigned letters_found=0;
		for (int i = 0; i < sizeof(point); ++i) {
			if (toupper(point[i].name[1]) == toupper(letter)) {
				letters_found++;
			}
		}
		return letters_found;
	}
}



/*
	visualise code in c++
	new int[] - inicijalizacija polja na heapu
	delete[] - brisanje polja


	tip::funkc(int a, int b) : broj(a), broj(b) 
	ako nemammo defaultni konstruktor, mozemo inicijalizirati preko :

	unique_ptr i make_unique da ne bi imali zabunu oko  delete new ili free malloc 
*/