#include "app.h"
#include <iostream>  // cout, cin
#include <format>  // format

// read number of results
// read all student data
// read grade and output grade statistics
// read letter and output letter statistics

/*Napišite program koji koristeæi te klase radi analizu rezultata studentskog testa:

Program uèitava rezultate - prvo broj unosa, nakon toga za svakog studenta: ime (jedna rijeè) i ocjena (cijeli broj).

Prvo se unosi ocjena za koju se želi statistika - program ispisuje broj studenata sa tom ocjenom.
Nakon toga unosi se prvo slovo studenata za koje se želi statistika - program ispisuje broj studenata koji poèinju
tim slovom (neovisno malo/veliko)*/

using namespace vsite::oop::v3;  // I added this.

int main()
{
	unsigned input;

	std::cout << "Unesite broj unosa:" << std::endl;
	std::cin >> input;
	
	results r(input);  // Array of students has been made.

	for (int i = 0; i < input; i++) {
		std::cout << "Unesite ime i ocjenu:" << std::endl;

		std::string name_input;
		int grade_input;
		std::cin >> name_input >> grade_input;
		r.add({ name_input, grade_input });
	}

	std::cout << "Unesite ocjenu za koju zelite statistiku:" << std::endl;
	std::cin >> input;
	unsigned grade_stat = r.has_grade(input);
	std::cout << std::format("Broj studenata s ocjenom {} je: {}", input, grade_stat);

	char input_char;
	std::cout << "\nUnesite prvo slovo studenta za koji zelite statistiku:" << std::endl;
	std::cin >> input_char;
	unsigned letter_stat = r.starts_with_letter(input_char);
	std::cout << std::format("Broj studenata cije ime pocinje sa slovom {} je: {}\n", input_char, letter_stat);
}
