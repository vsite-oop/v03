#include "app.h"
#include <algorithm>

namespace vsite::oop::v3
{
    results::results(unsigned int i) {
        len = i;
        niz = new student[len];
    }

    results::~results() {
        delete[] niz;
    }

    void results::add(student const& s) {
        niz[brojac] = s;
        brojac++;
    }

    unsigned int results::starts_with_letter(char x) {
        unsigned int n = 0;
        for (int i = 0; i < brojac; i++) {
            if (std::tolower(niz[i].name[0]) == std::tolower(x)) {
                n++;
            }
        }
        return n;
    }

    unsigned int results::has_grade(unsigned int x) {
        unsigned int n = 0;
        for (int i = 0; i < brojac; i++) {
            if (niz[i].grade == x) {
                n++;
            }
        }
        return n;
    }
    /*ovaj dio je promijenjen*/
    array::array(uint32_t size, double value) {
        len = size;
        niz = new double[len];

        for (uint32_t i = 0; i < len; ++i) {
            niz[i] = value;
        }
    }
/*do ovdje*/

    array::array(const array& other) : len(other.len) {
        niz = new double[len];
        memcpy(niz, other.niz, len * sizeof(double));
    }

    array::array(array&& other) {
        len = other.len;
        niz = other.niz;
        other.len = 0;
        other.niz = nullptr;
    }

    array::~array() {
        delete[] niz;
    }

    uint32_t array::size() {
        return len;
    }

    double array::at(uint32_t i) {
        if (i < 0 || i >= len) {
            return 0;
        }
        else {
            return niz[i];
        }
    }

    void array::push_back(double x) {
        uint32_t newLen = len + 1;
        double* newArr = new double[newLen];
        memcpy(newArr, niz, len * sizeof(double));
        newArr[len] = x;
        len = newLen;
        delete[] niz;
        niz = newArr;
    }
}
