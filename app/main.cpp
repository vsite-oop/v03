#include "app.h"
#include<iostream>

using namespace vsite::oop::v3;

// read number of results
// read all student data
// read grade and output grade statistics
// read letter and output letter statistics
/*
Napišite program koji koristeći te klase radi analizu rezultata studentskog testa:
>program učitava rezultate - prvo broj unosa, nakon toga za svakog studenta: ime (jedna riječ) i ocjena (cijeli broj)
>prvo se unosi ocjena za koju se želi statistika - program ispisuje broj studenata sa tom ocjenom
>nakon toga unosi se prvo slovo studenata za koje se želi statistika - program ispisuje broj studenata koji počinju tim slovom (neovisno malo/veliko)
*/
int main()
{
	student st;
	int stCount;

	std::cout << "Unesite broj studenata: ";
	std::cin >> stCount;
	results studenti(stCount);

	for (int i = 0 ; i < stCount; i++) {
		std::cout << "Upisite ime i ocjenu studenta: ";
		std::cin >> st.name >> st.grade;
		studenti.add(st);
	}

	unsigned ocjena;
	std::cout << "Upisite ocjenu za statistiku: ";
	std::cin >> ocjena;
	std::cout << "Broj studenata sa ocjenom " << ocjena << " je: " << studenti.has_grade(ocjena) << std::endl;

	char slovo;
	std::cout << "Upisite slovo za statistiku: ";
	std::cin >> slovo;
	std::cout << "Broj studenata sa pocetnim slovom " << slovo << " je: " << studenti.starts_with_letter(slovo) << std::endl;

}
