#include "app.h"
#include <algorithm>
using namespace vsite::oop::v3;

   results::results(int c) {
        counter = c;
        niz = new student[counter];
        ind = 0; 
   }

   void results::add(const student& s) {
       if (ind < counter) {
           niz[ind] = s;
           ind++;
       }
   }

    unsigned results::has_grade(int g) {
        int stdCount = 0;

        for (int i = 0; i < counter; i++) {
            if (niz[i].grade == g) {
                stdCount++;
            }
        }
        return stdCount;
    }

    unsigned results::starts_with_letter(char c) {
        int studCount = 0;

        for (int i = 0; i < counter; i++) {
            if (tolower(niz[i].name[0]) == tolower(c)) {
                studCount++;
            }
        }
        return studCount;
    }

    results::~results() {
        delete[] niz;
    }

    array::array(unsigned s, double value) {
        _size = s;
        nizArr = new double[s];

        for (int i = 0; i < s; i++) {
            nizArr[i] = value;
        }
    }

    array::array(const array& s) {
        _size = s._size;
        nizArr = new double[_size];

        for (int i = 0; i < _size; i++) {
            nizArr[i] = s.nizArr[i];
        }
    }

    array::array(array&& s) : _size(s._size), nizArr(s.nizArr) {
        s._size = 0;
        s.nizArr = nullptr;
    }

    double array::at(int i) {
        if (i < 0 || i >= _size) {
            return 0.0;
        }

        return nizArr[i];
    }

    void array::push_back(double val) {
        int tempSize = _size + 1;
        double* tempNiz = new double[tempSize];

        for (int i = 0; i < tempSize - 1; i++) {
            tempNiz[i] = nizArr[i];
        }
        tempNiz[tempSize - 1] = val;

        delete[] nizArr;
        nizArr = tempNiz;
        _size = tempSize;
    }

    array::~array() {
        delete[] nizArr;
    }
