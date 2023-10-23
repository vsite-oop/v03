#pragma once
#include <string>


namespace vsite::oop::v3 
{
	struct student {
		std::string name;
		int grade;
	};
	class results {
	private:
		int brojac = 0;
		int duljina = 0;
		student* niz = nullptr;
	public: 
		results(int duljina = 0);
		void add(student s);
		unsigned has_grade(int i);
		unsigned starts_with_letter(char c);
		void ispis();
		~results();
	};
		class array {
		private:
			uint32_t si;
			double va;
			double* niz2 = nullptr;
		public:
			array(uint32_t s = 0, double value = 0.0);
			~array();
			uint32_t size();
			double at(int i = 0);
			void push_back(double broj);
			array(array&& other) noexcept;
			array(const array& other);
		};
}