#include "app.h"
#include <algorithm>
#include <string>
#include <list>
#include <iostream>
namespace vsite::oop::v3
{
	results::results(int i)
	{
		duljina = i;
		niz = new student[duljina];
	}
	void results::add(student const&  s) {
		niz[brojac] = s;
		++brojac;
	}
	void results::ispis()
	{
		for (int i = 0; i < duljina; ++i)
			std::cout << niz[i].name << std::endl;

	}
	unsigned results::has_grade(int ocjena)
	{
		int brojac1 = 0;
		for (int j = 0; j < duljina; ++j)
		{
			if (niz[j].grade == ocjena)
			{
				++brojac1;
			}
		}
		return brojac1; 
	}
	unsigned results::starts_with_letter(char c)
	{
		int brojac_slova = 0;
		char b = tolower(c);
		for (int j = 0; j < duljina; ++j)
		{
			char a = tolower(niz[j].name[0]);
			if (a == b)
			{
				++brojac_slova;
			}
		}
		return brojac_slova;
	}
	results::~results()
	{
		delete[] niz;
	}
	array::array(uint32_t s, double v)
	{
		niz2 = new double[s];
		si = s;
		for (uint32_t i = 0; i < s; ++i)
		{
			niz2[i] = v;
		}
	}
	uint32_t array::size()
	{
		return si;
	}
	double array::at(int i)
	{
		if(i < si && i >= 0)
			return niz2[i];
		return 0;
	}
	void array::push_back(double broj)
	{
		int nova_duljina = si + 1;
		double* novi_niz = new double[nova_duljina];
		for (int i = 0; i < si; ++i)
		{
			novi_niz[i] = niz2[i];
		}
		delete[] niz2;
		niz2 = novi_niz;
 		novi_niz[nova_duljina - 1] = broj;
		si = nova_duljina;
	}
	 array::array (array&& other): si(other.si),niz2(other.niz2)
	{
		other.si = 0;
		other.niz2 = nullptr;
	}
	 array::array(const array& other) : si(other.si)
	 {
		 niz2 = new double[si];
		 for (uint32_t i = 0; i < si; ++i)
		 {
			 niz2[i] = other.niz2[i];
		 }
	 }
	 array::~array()
	 {
		 delete[] niz2;
	 }
	
}